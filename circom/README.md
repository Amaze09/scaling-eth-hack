Circuits for verifying ZK-proofs.

-------- Steps to compile circom --------

Step A: Compile circom circuit
circom circuit.circom --json --wasm --r1cs --sym

Step B: Generate circuit input
node generate_circuit_input.js

Step C: Generate witness file
node circuit_js/generate_witness.js circuit_js/circuit.wasm input.json witness.wtns
or
snarkjs wtns calculate circuit_js/circuit.wasm input.json witness.wtns
or
cd circuit_js
node generate_witness.js circuit.wasm ../input.json ../witness.wtns

1. Start a new powers of tau ceremony
   snarkjs powersoftau new bn128 14 pot14_0000.ptau -v

2. Contribute to the ceremony
   snarkjs powersoftau contribute pot14_0000.ptau pot14_0001.ptau --name="First contribution" -v

3. Provide a second contribution
   snarkjs powersoftau contribute pot14_0001.ptau pot14_0002.ptau --name="Second contribution" -v -e="some random text"

4. Provide a third contribution using third party software
   snarkjs powersoftau export challenge pot14_0002.ptau challenge_0003
   snarkjs powersoftau challenge contribute bn128 challenge_0003 response_0003 -e="some random text"
   snarkjs powersoftau import response pot14_0002.ptau response_0003 pot14_0003.ptau -n="Third contribution name"

5. Verify the protocol so far
   snarkjs powersoftau verify pot14_0003.ptau

6. Apply a random beacon
   snarkjs powersoftau beacon pot14_0003.ptau pot14_beacon.ptau 0102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f 10 -n="Final Beacon"

7. Prepare phase 2
   snarkjs powersoftau prepare phase2 pot14_beacon.ptau pot14_final.ptau -v

8. Verify the final ptau
   snarkjs powersoftau verify pot14_final.ptau

9 - 15. Not required or done in previous step.

15. Setup: Doing for groth16
    snarkjs groth16 setup circuit.r1cs pot14_final.ptau circuit_0000.zkey

16. Contribute to the phase 2 ceremony
    snarkjs zkey contribute circuit_0000.zkey circuit_0001.zkey --name="1st Contributor Name" -v

17. Provide a second contribution
    snarkjs zkey contribute circuit_0001.zkey circuit_0002.zkey --name="Second contribution Name" -v -e="Another random entropy"

18. Provide a third contribution using third party software
    snarkjs zkey export bellman circuit_0002.zkey challenge_phase2_0003
    snarkjs zkey bellman contribute bn128 challenge_phase2_0003 response_phase2_0003 -e="some random text"
    snarkjs zkey import bellman circuit_0002.zkey response_phase2_0003 circuit_0003.zkey -n="Third contribution name"

19. Verify the latest zkey
    snarkjs zkey verify circuit.r1cs pot14_final.ptau circuit_0003.zkey

20. Apply a random beacon
    snarkjs zkey beacon circuit_0003.zkey circuit_final.zkey 0102030405060708090a0b0c0d0e0f101112131415161718191a1b1c1d1e1f 10 -n="Final Beacon phase2"

21. Verify the final zkey
    snarkjs zkey verify circuit.r1cs pot14_final.ptau circuit_final.zkey

22. Export the verification key
    snarkjs zkey export verificationkey circuit_final.zkey verification_key.json

23: Create the proof
snarkjs groth16 prove circuit_final.zkey witness.wtns proof.json public.json

24. Verify the proof
    snarkjs groth16 verify verification_key.json public.json proof.json

25. Turn the verifier into a smart contract
    snarkjs zkey export solidityverifier circuit_final.zkey verifier.sol

26. Simulate a verification call
    snarkjs zkey export soliditycalldata public.json proof.json
