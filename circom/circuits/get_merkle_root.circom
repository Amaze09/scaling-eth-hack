include "../node_modules/circomlib/circuits/mimc.circom";

template GetMerkleRoot(k){
    // k is depth of tree

    // merkel leaf
    signal input leaf;

    // path from leaf to root
    signal input paths2_root[k];

    // path from leaf to root with pos
    signal input paths2_root_pos[k];

    // the output variable
    signal output out;

    // hash of first two entries in tx Merkle proof
    component merkle_root[k];
    merkle_root[0] = MultiMiMC7(2,91);

    // paths2_root_pos is a binary vector representing left or right node

    // if `paths2_root_pos` is `0` `merkle_root[0].in[0]` becomes leaf
    // and `merkle_root[0].in[1]` becomes `paths2_root[0]`
    // if `paths2_root_pos` is `1` `merkle_root[0].in[0]` becomes `paths2_root[0]`
    // and `merkle_root[0].in[1]` becomes `leaf`
    merkle_root[0].in[0] <== leaf - paths2_root_pos[0]* (leaf - paths2_root[0]);
    merkle_root[0].in[1] <== paths2_root[0] - paths2_root_pos[0]* (paths2_root[0] - leaf);
    merkle_root[0].k <== k;
    // hash of all other entries in tx Merkle proof
    for (var v = 1; v < k; v++){
        merkle_root[v] = MultiMiMC7(2,91);
        merkle_root[v].in[0] <== paths2_root[v] - paths2_root_pos[v]* (paths2_root[v] - merkle_root[v-1].out);
        merkle_root[v].in[1] <== merkle_root[v-1].out - paths2_root_pos[v]* (merkle_root[v-1].out - paths2_root[v]);
        merkle_root[v].k <== k;
    }

    // output computed Merkle root
    out <== merkle_root[k-1].out;
}

// component main = GetMerkleRoot(2);