#include <stdio.h>
#include <iostream>
#include <assert.h>
#include "circom.hpp"
#include "calcwit.hpp"
void MiMC7_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MiMC7_0_run(uint ctx_index,Circom_CalcWit* ctx);
void MultiMiMC7_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MultiMiMC7_1_run(uint ctx_index,Circom_CalcWit* ctx);
void MultiMiMC7_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MultiMiMC7_2_run(uint ctx_index,Circom_CalcWit* ctx);
void GetMerkleRoot_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void GetMerkleRoot_3_run(uint ctx_index,Circom_CalcWit* ctx);
void LeafExistence_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void LeafExistence_4_run(uint ctx_index,Circom_CalcWit* ctx);
void MultiMiMC7_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MultiMiMC7_5_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_6_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_7_run(uint ctx_index,Circom_CalcWit* ctx);
void CompConstant_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void CompConstant_8_run(uint ctx_index,Circom_CalcWit* ctx);
void CompConstant_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void CompConstant_9_run(uint ctx_index,Circom_CalcWit* ctx);
void AliasCheck_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void AliasCheck_10_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_11_run(uint ctx_index,Circom_CalcWit* ctx);
void Num2Bits_strict_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Num2Bits_strict_12_run(uint ctx_index,Circom_CalcWit* ctx);
void BabyAdd_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BabyAdd_13_run(uint ctx_index,Circom_CalcWit* ctx);
void BabyDbl_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BabyDbl_14_run(uint ctx_index,Circom_CalcWit* ctx);
void IsZero_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void IsZero_15_run(uint ctx_index,Circom_CalcWit* ctx);
void Edwards2Montgomery_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Edwards2Montgomery_16_run(uint ctx_index,Circom_CalcWit* ctx);
void MontgomeryDouble_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MontgomeryDouble_17_run(uint ctx_index,Circom_CalcWit* ctx);
void MontgomeryAdd_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MontgomeryAdd_18_run(uint ctx_index,Circom_CalcWit* ctx);
void Multiplexor2_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Multiplexor2_19_run(uint ctx_index,Circom_CalcWit* ctx);
void BitElementMulAny_20_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void BitElementMulAny_20_run(uint ctx_index,Circom_CalcWit* ctx);
void Montgomery2Edwards_21_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void Montgomery2Edwards_21_run(uint ctx_index,Circom_CalcWit* ctx);
void SegmentMulAny_22_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void SegmentMulAny_22_run(uint ctx_index,Circom_CalcWit* ctx);
void SegmentMulAny_23_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void SegmentMulAny_23_run(uint ctx_index,Circom_CalcWit* ctx);
void EscalarMulAny_24_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void EscalarMulAny_24_run(uint ctx_index,Circom_CalcWit* ctx);
void MultiMux3_25_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void MultiMux3_25_run(uint ctx_index,Circom_CalcWit* ctx);
void WindowMulFix_26_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void WindowMulFix_26_run(uint ctx_index,Circom_CalcWit* ctx);
void SegmentMulFix_27_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void SegmentMulFix_27_run(uint ctx_index,Circom_CalcWit* ctx);
void SegmentMulFix_28_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void SegmentMulFix_28_run(uint ctx_index,Circom_CalcWit* ctx);
void EscalarMulFix_29_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void EscalarMulFix_29_run(uint ctx_index,Circom_CalcWit* ctx);
void ForceEqualIfEnabled_30_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void ForceEqualIfEnabled_30_run(uint ctx_index,Circom_CalcWit* ctx);
void EdDSAMiMCVerifier_31_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void EdDSAMiMCVerifier_31_run(uint ctx_index,Circom_CalcWit* ctx);
void VerifyEdDSAMiMC_32_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void VerifyEdDSAMiMC_32_run(uint ctx_index,Circom_CalcWit* ctx);
void ProcessTx_33_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather);
void ProcessTx_33_run(uint ctx_index,Circom_CalcWit* ctx);
Circom_TemplateFunction _functionTable[34] = { 
MiMC7_0_run,
MultiMiMC7_1_run,
MultiMiMC7_2_run,
GetMerkleRoot_3_run,
LeafExistence_4_run,
MultiMiMC7_5_run,
Num2Bits_6_run,
Num2Bits_7_run,
CompConstant_8_run,
CompConstant_9_run,
AliasCheck_10_run,
Num2Bits_11_run,
Num2Bits_strict_12_run,
BabyAdd_13_run,
BabyDbl_14_run,
IsZero_15_run,
Edwards2Montgomery_16_run,
MontgomeryDouble_17_run,
MontgomeryAdd_18_run,
Multiplexor2_19_run,
BitElementMulAny_20_run,
Montgomery2Edwards_21_run,
SegmentMulAny_22_run,
SegmentMulAny_23_run,
EscalarMulAny_24_run,
MultiMux3_25_run,
WindowMulFix_26_run,
SegmentMulFix_27_run,
SegmentMulFix_28_run,
EscalarMulFix_29_run,
ForceEqualIfEnabled_30_run,
EdDSAMiMCVerifier_31_run,
VerifyEdDSAMiMC_32_run,
ProcessTx_33_run };
Circom_TemplateFunction _functionTableParallel[34] = { 
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL,
NULL };
uint get_main_input_signal_start() {return 2;}

uint get_main_input_signal_no() {return 22;}

uint get_total_signal_no() {return 31024;}

uint get_number_of_components() {return 2042;}

uint get_size_of_input_hashmap() {return 256;}

uint get_size_of_witness() {return 14824;}

uint get_size_of_constants() {return 203;}

uint get_size_of_io_map() {return 4;}

void release_memory_component(Circom_CalcWit* ctx, uint pos) {{

if (pos != 0){{

delete ctx->componentMemory[pos].subcomponents;

delete ctx->componentMemory[pos].subcomponentsParallel;

delete ctx->componentMemory[pos].outputIsSet;

delete ctx->componentMemory[pos].mutexes;

delete ctx->componentMemory[pos].cvs;

delete ctx->componentMemory[pos].sbct;

}}


}}


// function declarations
// template declarations
void MiMC7_0_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 0;
ctx->componentMemory[coffset].templateName = "MiMC7";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MiMC7_0_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[94];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[3]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[5]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[7]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[9]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[11]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[13]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[15]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[17]);
}
{
PFrElement aux_dest = &lvar[10];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[19]);
}
{
PFrElement aux_dest = &lvar[11];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[21]);
}
{
PFrElement aux_dest = &lvar[12];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[23]);
}
{
PFrElement aux_dest = &lvar[13];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[25]);
}
{
PFrElement aux_dest = &lvar[14];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[27]);
}
{
PFrElement aux_dest = &lvar[15];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[29]);
}
{
PFrElement aux_dest = &lvar[16];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[31]);
}
{
PFrElement aux_dest = &lvar[17];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[33]);
}
{
PFrElement aux_dest = &lvar[18];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[35]);
}
{
PFrElement aux_dest = &lvar[19];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[37]);
}
{
PFrElement aux_dest = &lvar[20];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[39]);
}
{
PFrElement aux_dest = &lvar[21];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[41]);
}
{
PFrElement aux_dest = &lvar[22];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[43]);
}
{
PFrElement aux_dest = &lvar[23];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[45]);
}
{
PFrElement aux_dest = &lvar[24];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[47]);
}
{
PFrElement aux_dest = &lvar[25];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[49]);
}
{
PFrElement aux_dest = &lvar[26];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[51]);
}
{
PFrElement aux_dest = &lvar[27];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[53]);
}
{
PFrElement aux_dest = &lvar[28];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[55]);
}
{
PFrElement aux_dest = &lvar[29];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[57]);
}
{
PFrElement aux_dest = &lvar[30];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[59]);
}
{
PFrElement aux_dest = &lvar[31];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[61]);
}
{
PFrElement aux_dest = &lvar[32];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[63]);
}
{
PFrElement aux_dest = &lvar[33];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[65]);
}
{
PFrElement aux_dest = &lvar[34];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[67]);
}
{
PFrElement aux_dest = &lvar[35];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[69]);
}
{
PFrElement aux_dest = &lvar[36];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[71]);
}
{
PFrElement aux_dest = &lvar[37];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[73]);
}
{
PFrElement aux_dest = &lvar[38];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[75]);
}
{
PFrElement aux_dest = &lvar[39];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[77]);
}
{
PFrElement aux_dest = &lvar[40];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[79]);
}
{
PFrElement aux_dest = &lvar[41];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[81]);
}
{
PFrElement aux_dest = &lvar[42];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[83]);
}
{
PFrElement aux_dest = &lvar[43];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[85]);
}
{
PFrElement aux_dest = &lvar[44];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[87]);
}
{
PFrElement aux_dest = &lvar[45];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[89]);
}
{
PFrElement aux_dest = &lvar[46];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[91]);
}
{
PFrElement aux_dest = &lvar[47];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[93]);
}
{
PFrElement aux_dest = &lvar[48];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[95]);
}
{
PFrElement aux_dest = &lvar[49];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[97]);
}
{
PFrElement aux_dest = &lvar[50];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[99]);
}
{
PFrElement aux_dest = &lvar[51];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[101]);
}
{
PFrElement aux_dest = &lvar[52];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[103]);
}
{
PFrElement aux_dest = &lvar[53];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[105]);
}
{
PFrElement aux_dest = &lvar[54];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[107]);
}
{
PFrElement aux_dest = &lvar[55];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[109]);
}
{
PFrElement aux_dest = &lvar[56];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[111]);
}
{
PFrElement aux_dest = &lvar[57];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[113]);
}
{
PFrElement aux_dest = &lvar[58];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[115]);
}
{
PFrElement aux_dest = &lvar[59];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[117]);
}
{
PFrElement aux_dest = &lvar[60];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[119]);
}
{
PFrElement aux_dest = &lvar[61];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[121]);
}
{
PFrElement aux_dest = &lvar[62];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[123]);
}
{
PFrElement aux_dest = &lvar[63];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[125]);
}
{
PFrElement aux_dest = &lvar[64];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[127]);
}
{
PFrElement aux_dest = &lvar[65];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[129]);
}
{
PFrElement aux_dest = &lvar[66];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[131]);
}
{
PFrElement aux_dest = &lvar[67];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[133]);
}
{
PFrElement aux_dest = &lvar[68];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[135]);
}
{
PFrElement aux_dest = &lvar[69];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[137]);
}
{
PFrElement aux_dest = &lvar[70];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[139]);
}
{
PFrElement aux_dest = &lvar[71];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[141]);
}
{
PFrElement aux_dest = &lvar[72];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[143]);
}
{
PFrElement aux_dest = &lvar[73];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[145]);
}
{
PFrElement aux_dest = &lvar[74];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[147]);
}
{
PFrElement aux_dest = &lvar[75];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[149]);
}
{
PFrElement aux_dest = &lvar[76];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[151]);
}
{
PFrElement aux_dest = &lvar[77];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[153]);
}
{
PFrElement aux_dest = &lvar[78];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[155]);
}
{
PFrElement aux_dest = &lvar[79];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[157]);
}
{
PFrElement aux_dest = &lvar[80];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[159]);
}
{
PFrElement aux_dest = &lvar[81];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[161]);
}
{
PFrElement aux_dest = &lvar[82];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[163]);
}
{
PFrElement aux_dest = &lvar[83];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[165]);
}
{
PFrElement aux_dest = &lvar[84];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[167]);
}
{
PFrElement aux_dest = &lvar[85];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[169]);
}
{
PFrElement aux_dest = &lvar[86];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[171]);
}
{
PFrElement aux_dest = &lvar[87];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[173]);
}
{
PFrElement aux_dest = &lvar[88];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[175]);
}
{
PFrElement aux_dest = &lvar[89];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[177]);
}
{
PFrElement aux_dest = &lvar[90];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[179]);
}
{
PFrElement aux_dest = &lvar[91];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[181]);
}
{
PFrElement aux_dest = &lvar[92];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[93];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[93],&circuitConstants[0]); // line circom 126
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[93],&circuitConstants[1]); // line circom 127
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[92];
// load src
Fr_add(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 1]); // line circom 127
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &lvar[92];
// load src
Fr_sub(&expaux[3],&lvar[93],&circuitConstants[2]); // line circom 127
Fr_add(&expaux[1],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + ((1 * Fr_toInt(&expaux[3])) + 276)]); // line circom 127
Fr_add(&expaux[0],&expaux[1],&lvar[((1 * Fr_toInt(&lvar[93])) + 1)]); // line circom 127
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 3)];
// load src
Fr_mul(&expaux[0],&lvar[92],&lvar[92]); // line circom 128
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 94)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 3)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 3)]); // line circom 129
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 185)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 94)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 3)]); // line circom 130
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[93],&circuitConstants[180]); // line circom 131
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 276)];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[93])) + 185)],&lvar[92]); // line circom 132
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[1],&signalValues[mySignalStart + 275],&lvar[92]); // line circom 134
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 2]); // line circom 134
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
{
PFrElement aux_dest = &lvar[93];
// load src
Fr_add(&expaux[0],&lvar[93],&circuitConstants[2]); // line circom 126
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[93],&circuitConstants[0]); // line circom 126
}
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void MultiMiMC7_1_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 1;
ctx->componentMemory[coffset].templateName = "MultiMiMC7";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3]{0};
}

void MultiMiMC7_1_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[6]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+9;
uint aux_dimensions[1] = {3};
for (uint i = 0; i < 3; i++) {
std::string new_cmp_name = "mims"+ctx->generate_position_array(aux_dimensions, 1, i);
MiMC7_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 366 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 148
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 1)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MiMC7_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 5)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MiMC7_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[2]) + 1)) + 5)];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 5)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 1)]); // line circom 152
Fr_add(&expaux[0],&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[2])) + 0)]].signalStart + 0]); // line circom 152
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 148
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 148
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
for (uint i = 0; i < 3; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void MultiMiMC7_2_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 2;
ctx->componentMemory[coffset].templateName = "MultiMiMC7";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 3;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[2]{0};
}

void MultiMiMC7_2_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+7;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "mims"+ctx->generate_position_array(aux_dimensions, 1, i);
MiMC7_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 366 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 148
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 1)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MiMC7_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 4)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MiMC7_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[2]) + 1)) + 4)];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 4)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 1)]); // line circom 152
Fr_add(&expaux[0],&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[2])) + 0)]].signalStart + 0]); // line circom 152
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 148
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[4]); // line circom 148
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
for (uint i = 0; i < 2; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void GetMerkleRoot_3_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 3;
ctx->componentMemory[coffset].templateName = "GetMerkleRoot";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 3;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1]{0};
}

void GetMerkleRoot_3_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[2];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+4;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "merkle_root";
MultiMiMC7_2_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 739 ;
aux_cmp_num += 3;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
Fr_sub(&expaux[4],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 28
Fr_mul(&expaux[2],&signalValues[mySignalStart + 3],&expaux[4]); // line circom 28
Fr_sub(&expaux[0],&signalValues[mySignalStart + 1],&expaux[2]); // line circom 28
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MultiMiMC7_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[4],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 1]); // line circom 29
Fr_mul(&expaux[2],&signalValues[mySignalStart + 3],&expaux[4]); // line circom 29
Fr_sub(&expaux[0],&signalValues[mySignalStart + 2],&expaux[2]); // line circom 29
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MultiMiMC7_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MultiMiMC7_2_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
for (uint i = 0; i < 1; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void LeafExistence_4_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 4;
ctx->componentMemory[coffset].templateName = "LeafExistence";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 6;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[2]{0};
}

void LeafExistence_4_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[6]);
}
{
uint aux_create = 0;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+749;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "leaf";
MultiMiMC7_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1107 ;
aux_cmp_num += 4;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+6;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "computed_root";
GetMerkleRoot_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 743 ;
aux_cmp_num += 4;
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 16
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 0)]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 16
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 16
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MultiMiMC7_1_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
GetMerkleRoot_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 23
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
GetMerkleRoot_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 23
}
Fr_eq(&expaux[0],&signalValues[mySignalStart + 3],&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]); // line circom 29
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 29. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 2; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void MultiMiMC7_5_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 5;
ctx->componentMemory[coffset].templateName = "MultiMiMC7";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 6;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[5]{0};
}

void MultiMiMC7_5_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[0]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+13;
uint aux_dimensions[1] = {5};
for (uint i = 0; i < 5; i++) {
std::string new_cmp_name = "mims"+ctx->generate_position_array(aux_dimensions, 1, i);
MiMC7_0_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 366 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[10]); // line circom 148
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 1)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MiMC7_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[2])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 7)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MiMC7_0_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[2]) + 1)) + 7)];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 7)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[2])) + 1)]); // line circom 152
Fr_add(&expaux[0],&expaux[1],&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[2])) + 0)]].signalStart + 0]); // line circom 152
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 148
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[10]); // line circom 148
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 12]);
}
for (uint i = 0; i < 5; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void Num2Bits_6_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 6;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_6_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[182]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[182]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 253],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[182]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 253]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void Num2Bits_7_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 7;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_7_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[183]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[183]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 135],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[183]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 135]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void CompConstant_8_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 8;
ctx->componentMemory[coffset].templateName = "CompConstant";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 254;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1]{0};
}

void CompConstant_8_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[10];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[184]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+383;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "num2bits";
Num2Bits_7_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 136 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[185]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[186]); // line circom 44
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[3],&lvar[9],&circuitConstants[4]); // line circom 45
Fr_shr(&expaux[1],&circuitConstants[184],&expaux[3]); // line circom 45
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_mul(&expaux[4],&lvar[9],&circuitConstants[4]); // line circom 46
Fr_add(&expaux[3],&expaux[4],&circuitConstants[2]); // line circom 46
Fr_shr(&expaux[1],&circuitConstants[184],&expaux[3]); // line circom 46
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 46
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[9]) * 2)) + 1)]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[9]) * 2) + 1)) + 1)]);
}
Fr_eq(&expaux[1],&lvar[2],&circuitConstants[1]); // line circom 50
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[1]); // line circom 50
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 50
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_neg(&expaux[4],&lvar[6]); // line circom 51
Fr_mul(&expaux[3],&expaux[4],&lvar[4]); // line circom 51
Fr_mul(&expaux[2],&expaux[3],&lvar[3]); // line circom 51
Fr_mul(&expaux[3],&lvar[6],&lvar[4]); // line circom 51
Fr_add(&expaux[1],&expaux[2],&expaux[3]); // line circom 51
Fr_mul(&expaux[2],&lvar[6],&lvar[3]); // line circom 51
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
Fr_eq(&expaux[1],&lvar[2],&circuitConstants[1]); // line circom 52
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 52
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 52
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_mul(&expaux[5],&lvar[7],&lvar[4]); // line circom 53
Fr_mul(&expaux[4],&expaux[5],&lvar[3]); // line circom 53
Fr_mul(&expaux[5],&lvar[7],&lvar[3]); // line circom 53
Fr_sub(&expaux[3],&expaux[4],&expaux[5]); // line circom 53
Fr_mul(&expaux[4],&lvar[6],&lvar[4]); // line circom 53
Fr_add(&expaux[2],&expaux[3],&expaux[4]); // line circom 53
Fr_mul(&expaux[3],&lvar[7],&lvar[4]); // line circom 53
Fr_sub(&expaux[1],&expaux[2],&expaux[3]); // line circom 53
Fr_add(&expaux[0],&expaux[1],&lvar[7]); // line circom 53
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[1]); // line circom 54
Fr_land(&expaux[0],&circuitConstants[2],&expaux[2]); // line circom 54
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_mul(&expaux[3],&lvar[6],&lvar[4]); // line circom 55
Fr_mul(&expaux[2],&expaux[3],&lvar[3]); // line circom 55
Fr_mul(&expaux[3],&lvar[7],&lvar[4]); // line circom 55
Fr_sub(&expaux[1],&expaux[2],&expaux[3]); // line circom 55
Fr_add(&expaux[0],&expaux[1],&lvar[7]); // line circom 55
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_neg(&expaux[3],&lvar[7]); // line circom 57
Fr_mul(&expaux[2],&expaux[3],&lvar[4]); // line circom 57
Fr_mul(&expaux[1],&expaux[2],&lvar[3]); // line circom 57
Fr_add(&expaux[0],&expaux[1],&lvar[7]); // line circom 57
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
}
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)]); // line circom 60
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_sub(&expaux[0],&lvar[6],&lvar[8]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[8]); // line circom 63
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
Fr_mul(&expaux[0],&lvar[8],&circuitConstants[4]); // line circom 64
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[186]); // line circom 44
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 382];
// load src
// end load src
Fr_copy(aux_dest,&lvar[5]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 135];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 382]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Num2Bits_7_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 127]);
}
for (uint i = 0; i < 1; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void CompConstant_9_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 9;
ctx->componentMemory[coffset].templateName = "CompConstant";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 254;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1]{0};
}

void CompConstant_9_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[10];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[187]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+383;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "num2bits";
Num2Bits_7_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 136 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[185]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[186]); // line circom 44
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[3],&lvar[9],&circuitConstants[4]); // line circom 45
Fr_shr(&expaux[1],&circuitConstants[187],&expaux[3]); // line circom 45
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_mul(&expaux[4],&lvar[9],&circuitConstants[4]); // line circom 46
Fr_add(&expaux[3],&expaux[4],&circuitConstants[2]); // line circom 46
Fr_shr(&expaux[1],&circuitConstants[187],&expaux[3]); // line circom 46
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 46
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[9]) * 2)) + 1)]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[9]) * 2) + 1)) + 1)]);
}
Fr_eq(&expaux[1],&lvar[2],&circuitConstants[1]); // line circom 50
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[1]); // line circom 50
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 50
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_neg(&expaux[4],&lvar[6]); // line circom 51
Fr_mul(&expaux[3],&expaux[4],&lvar[4]); // line circom 51
Fr_mul(&expaux[2],&expaux[3],&lvar[3]); // line circom 51
Fr_mul(&expaux[3],&lvar[6],&lvar[4]); // line circom 51
Fr_add(&expaux[1],&expaux[2],&expaux[3]); // line circom 51
Fr_mul(&expaux[2],&lvar[6],&lvar[3]); // line circom 51
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 51
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
Fr_eq(&expaux[1],&lvar[2],&circuitConstants[1]); // line circom 52
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[2]); // line circom 52
Fr_land(&expaux[0],&expaux[1],&expaux[2]); // line circom 52
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_mul(&expaux[5],&lvar[7],&lvar[4]); // line circom 53
Fr_mul(&expaux[4],&expaux[5],&lvar[3]); // line circom 53
Fr_mul(&expaux[5],&lvar[7],&lvar[3]); // line circom 53
Fr_sub(&expaux[3],&expaux[4],&expaux[5]); // line circom 53
Fr_mul(&expaux[4],&lvar[6],&lvar[4]); // line circom 53
Fr_add(&expaux[2],&expaux[3],&expaux[4]); // line circom 53
Fr_mul(&expaux[3],&lvar[7],&lvar[4]); // line circom 53
Fr_sub(&expaux[1],&expaux[2],&expaux[3]); // line circom 53
Fr_add(&expaux[0],&expaux[1],&lvar[7]); // line circom 53
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
Fr_eq(&expaux[2],&lvar[1],&circuitConstants[1]); // line circom 54
Fr_land(&expaux[0],&circuitConstants[2],&expaux[2]); // line circom 54
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_mul(&expaux[3],&lvar[6],&lvar[4]); // line circom 55
Fr_mul(&expaux[2],&expaux[3],&lvar[3]); // line circom 55
Fr_mul(&expaux[3],&lvar[7],&lvar[4]); // line circom 55
Fr_sub(&expaux[1],&expaux[2],&expaux[3]); // line circom 55
Fr_add(&expaux[0],&expaux[1],&lvar[7]); // line circom 55
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)];
// load src
Fr_neg(&expaux[3],&lvar[7]); // line circom 57
Fr_mul(&expaux[2],&expaux[3],&lvar[4]); // line circom 57
Fr_mul(&expaux[1],&expaux[2],&lvar[3]); // line circom 57
Fr_add(&expaux[0],&expaux[1],&lvar[7]); // line circom 57
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}
}
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[9])) + 255)]); // line circom 60
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_sub(&expaux[0],&lvar[6],&lvar[8]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
Fr_add(&expaux[0],&lvar[7],&lvar[8]); // line circom 63
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
Fr_mul(&expaux[0],&lvar[8],&circuitConstants[4]); // line circom 64
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[9];
// load src
Fr_add(&expaux[0],&lvar[9],&circuitConstants[2]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[9],&circuitConstants[186]); // line circom 44
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 382];
// load src
// end load src
Fr_copy(aux_dest,&lvar[5]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 135];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 382]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Num2Bits_7_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 127]);
}
for (uint i = 0; i < 1; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void AliasCheck_10_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 10;
ctx->componentMemory[coffset].templateName = "AliasCheck";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 254;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1]{0};
}

void AliasCheck_10_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
uint index_multiple_eq;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+254;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "compConstant";
CompConstant_9_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 519 ;
aux_cmp_num += 2;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[188]); // line circom 30
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
CompConstant_9_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[188]); // line circom 30
}
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0],&circuitConstants[1]); // line circom 32
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 32. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 1; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void Num2Bits_11_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 11;
ctx->componentMemory[coffset].templateName = "Num2Bits";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Num2Bits_11_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[4];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[188]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[188]); // line circom 31
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)];
// load src
Fr_shr(&expaux[1],&signalValues[mySignalStart + 254],&lvar[3]); // line circom 32
Fr_band(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&circuitConstants[2]); // line circom 33
Fr_mul(&expaux[1],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&expaux[3]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_mul(&expaux[2],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[3])) + 0)],&lvar[2]); // line circom 34
Fr_add(&expaux[0],&lvar[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&lvar[2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[188]); // line circom 31
}
Fr_eq(&expaux[0],&lvar[1],&signalValues[mySignalStart + 254]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void Num2Bits_strict_12_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 12;
ctx->componentMemory[coffset].templateName = "Num2Bits_strict";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[2]{0};
}

void Num2Bits_strict_12_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[1];
uint sub_component_aux;
uint index_multiple_eq;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+255;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "aliasCheck";
AliasCheck_10_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 773 ;
aux_cmp_num += 3;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+1028;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "n2b";
Num2Bits_11_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 255 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 254];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 254]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Num2Bits_11_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[188]); // line circom 49
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
AliasCheck_10_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 49
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[188]); // line circom 49
}
for (uint i = 0; i < 2; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void BabyAdd_13_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 13;
ctx->componentMemory[coffset].templateName = "BabyAdd";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void BabyAdd_13_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[2];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[189]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[190]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 5]); // line circom 40
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 7];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 3],&signalValues[mySignalStart + 4]); // line circom 41
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 8];
// load src
Fr_mul(&expaux[2],&circuitConstants[191],&signalValues[mySignalStart + 2]); // line circom 42
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + 3]); // line circom 42
Fr_add(&expaux[2],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 5]); // line circom 42
Fr_mul(&expaux[0],&expaux[1],&expaux[2]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 9];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 45
Fr_mul(&expaux[4],&circuitConstants[190],&signalValues[mySignalStart + 9]); // line circom 45
Fr_add(&expaux[2],&circuitConstants[2],&expaux[4]); // line circom 45
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[4],&circuitConstants[190],&signalValues[mySignalStart + 9]); // line circom 46
Fr_add(&expaux[2],&circuitConstants[2],&expaux[4]); // line circom 46
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 0]); // line circom 46
Fr_add(&expaux[2],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 7]); // line circom 46
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 46
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 46. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_mul(&expaux[4],&circuitConstants[189],&signalValues[mySignalStart + 6]); // line circom 48
Fr_add(&expaux[2],&signalValues[mySignalStart + 8],&expaux[4]); // line circom 48
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + 7]); // line circom 48
Fr_mul(&expaux[4],&circuitConstants[190],&signalValues[mySignalStart + 9]); // line circom 48
Fr_sub(&expaux[2],&circuitConstants[2],&expaux[4]); // line circom 48
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[4],&circuitConstants[190],&signalValues[mySignalStart + 9]); // line circom 49
Fr_sub(&expaux[2],&circuitConstants[2],&expaux[4]); // line circom 49
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 1]); // line circom 49
Fr_mul(&expaux[5],&circuitConstants[189],&signalValues[mySignalStart + 6]); // line circom 49
Fr_add(&expaux[3],&signalValues[mySignalStart + 8],&expaux[5]); // line circom 49
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + 7]); // line circom 49
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 49
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 49. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void BabyDbl_14_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 14;
ctx->componentMemory[coffset].templateName = "BabyDbl";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1]{0};
}

void BabyDbl_14_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[2];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+4;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adder";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
for (uint i = 0; i < 1; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void IsZero_15_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 15;
ctx->componentMemory[coffset].templateName = "IsZero";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 1;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void IsZero_15_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
Fr_neq(&expaux[0],&signalValues[mySignalStart + 1],&circuitConstants[1]); // line circom 30
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
Fr_div(&expaux[0],&circuitConstants[2],&signalValues[mySignalStart + 1]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
}else{
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_neg(&expaux[2],&signalValues[mySignalStart + 1]); // line circom 32
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 2]); // line circom 32
Fr_add(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 32
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 0]); // line circom 33
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 33
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 33. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void Edwards2Montgomery_16_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 16;
ctx->componentMemory[coffset].templateName = "Edwards2Montgomery";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Edwards2Montgomery_16_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_add(&expaux[1],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 34
Fr_sub(&expaux[2],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 34
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 34
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_div(&expaux[0],&signalValues[mySignalStart + 0],&signalValues[mySignalStart + 2]); // line circom 35
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 38
Fr_mul(&expaux[1],&signalValues[mySignalStart + 0],&expaux[3]); // line circom 38
Fr_add(&expaux[2],&circuitConstants[2],&signalValues[mySignalStart + 3]); // line circom 38
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 38
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 38. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&signalValues[mySignalStart + 2]); // line circom 39
Fr_eq(&expaux[0],&expaux[1],&signalValues[mySignalStart + 0]); // line circom 39
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 39. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void MontgomeryDouble_17_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 17;
ctx->componentMemory[coffset].templateName = "MontgomeryDouble";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MontgomeryDouble_17_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[8];
FrElement lvar[4];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[189]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[190]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[192]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 5];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 2]); // line circom 135
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 4];
// load src
Fr_mul(&expaux[3],&circuitConstants[6],&signalValues[mySignalStart + 5]); // line circom 137
Fr_mul(&expaux[4],&circuitConstants[193],&signalValues[mySignalStart + 2]); // line circom 137
Fr_add(&expaux[2],&expaux[3],&expaux[4]); // line circom 137
Fr_add(&expaux[1],&expaux[2],&circuitConstants[2]); // line circom 137
Fr_mul(&expaux[2],&circuitConstants[4],&signalValues[mySignalStart + 3]); // line circom 137
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 137
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[3],&circuitConstants[4],&signalValues[mySignalStart + 3]); // line circom 138
Fr_mul(&expaux[1],&signalValues[mySignalStart + 4],&expaux[3]); // line circom 138
Fr_mul(&expaux[4],&circuitConstants[6],&signalValues[mySignalStart + 5]); // line circom 138
Fr_mul(&expaux[5],&circuitConstants[193],&signalValues[mySignalStart + 2]); // line circom 138
Fr_add(&expaux[3],&expaux[4],&expaux[5]); // line circom 138
Fr_add(&expaux[2],&expaux[3],&circuitConstants[2]); // line circom 138
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 138
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 138. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[3],&circuitConstants[2],&signalValues[mySignalStart + 4]); // line circom 140
Fr_mul(&expaux[2],&expaux[3],&signalValues[mySignalStart + 4]); // line circom 140
Fr_sub(&expaux[1],&expaux[2],&circuitConstants[192]); // line circom 140
Fr_mul(&expaux[2],&circuitConstants[4],&signalValues[mySignalStart + 2]); // line circom 140
Fr_sub(&expaux[0],&expaux[1],&expaux[2]); // line circom 140
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 0]); // line circom 141
Fr_mul(&expaux[1],&signalValues[mySignalStart + 4],&expaux[3]); // line circom 141
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 141
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void MontgomeryAdd_18_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 18;
ctx->componentMemory[coffset].templateName = "MontgomeryAdd";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 4;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MontgomeryAdd_18_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[4];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[189]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[190]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[192]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 6];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 3]); // line circom 102
Fr_sub(&expaux[2],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 2]); // line circom 102
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 102
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_sub(&expaux[3],&signalValues[mySignalStart + 4],&signalValues[mySignalStart + 2]); // line circom 103
Fr_mul(&expaux[1],&signalValues[mySignalStart + 6],&expaux[3]); // line circom 103
Fr_sub(&expaux[2],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 3]); // line circom 103
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 103
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 103. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_mul(&expaux[4],&circuitConstants[2],&signalValues[mySignalStart + 6]); // line circom 105
Fr_mul(&expaux[3],&expaux[4],&signalValues[mySignalStart + 6]); // line circom 105
Fr_sub(&expaux[2],&expaux[3],&circuitConstants[192]); // line circom 105
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + 2]); // line circom 105
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 4]); // line circom 105
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 0]); // line circom 106
Fr_mul(&expaux[1],&signalValues[mySignalStart + 6],&expaux[3]); // line circom 106
Fr_sub(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 106
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void Multiplexor2_19_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 19;
ctx->componentMemory[coffset].templateName = "Multiplexor2";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 5;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Multiplexor2_19_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_sub(&expaux[2],&signalValues[mySignalStart + 5],&signalValues[mySignalStart + 3]); // line circom 30
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 2]); // line circom 30
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 3]); // line circom 30
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[2],&signalValues[mySignalStart + 6],&signalValues[mySignalStart + 4]); // line circom 31
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 2]); // line circom 31
Fr_add(&expaux[0],&expaux[1],&signalValues[mySignalStart + 4]); // line circom 31
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void BitElementMulAny_20_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 20;
ctx->componentMemory[coffset].templateName = "BitElementMulAny";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 5;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[3]{0};
}

void BitElementMulAny_20_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[2];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
{
uint aux_create = 0;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+16;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "doubler";
MontgomeryDouble_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+9;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adder";
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+22;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "selector";
Multiplexor2_19_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Multiplexor2_19_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
for (uint i = 0; i < 3; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void Montgomery2Edwards_21_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 21;
ctx->componentMemory[coffset].templateName = "Montgomery2Edwards";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 2;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void Montgomery2Edwards_21_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_div(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 3]); // line circom 53
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + 2],&circuitConstants[2]); // line circom 54
Fr_add(&expaux[2],&signalValues[mySignalStart + 2],&circuitConstants[2]); // line circom 54
Fr_div(&expaux[0],&expaux[1],&expaux[2]); // line circom 54
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[1],&signalValues[mySignalStart + 0],&signalValues[mySignalStart + 3]); // line circom 56
Fr_eq(&expaux[0],&expaux[1],&signalValues[mySignalStart + 2]); // line circom 56
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 56. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
Fr_add(&expaux[3],&signalValues[mySignalStart + 2],&circuitConstants[2]); // line circom 57
Fr_mul(&expaux[1],&signalValues[mySignalStart + 1],&expaux[3]); // line circom 57
Fr_sub(&expaux[2],&signalValues[mySignalStart + 2],&circuitConstants[2]); // line circom 57
Fr_eq(&expaux[0],&expaux[1],&expaux[2]); // line circom 57
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 57. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void SegmentMulAny_22_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 22;
ctx->componentMemory[coffset].templateName = "SegmentMulAny";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 150;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[151]{0};
}

void SegmentMulAny_22_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[2];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[194]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+154;
uint aux_dimensions[1] = {147};
for (uint i = 0; i < 147; i++) {
std::string new_cmp_name = "bits"+ctx->generate_position_array(aux_dimensions, 1, i);
BitElementMulAny_20_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 29 ;
aux_cmp_num += 4;
}
}
{
uint aux_create = 147;
int aux_cmp_num = 588+ctx_index+1;
uint csoffset = mySignalStart+4417;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
Edwards2Montgomery_16_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 148;
int aux_cmp_num = 591+ctx_index+1;
uint csoffset = mySignalStart+4438;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 149;
int aux_cmp_num = 589+ctx_index+1;
uint csoffset = mySignalStart+4421;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "eadder";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 150;
int aux_cmp_num = 590+ctx_index+1;
uint csoffset = mySignalStart+4431;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "lastSel";
Multiplexor2_19_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 147;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 152]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 147;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 153]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Edwards2Montgomery_16_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[147]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[147]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[147]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[147]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[195]); // line circom 92
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 95
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 96
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 97
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 98
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[1]) + 1)) + 4)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 92
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[195]); // line circom 92
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[146]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[146]].signalStart + 1]);
}
{
uint cmp_index_ref = 148;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[146]].signalStart + 2]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 148;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[146]].signalStart + 3]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[148]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[148]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
Fr_neg(&expaux[0],&signalValues[mySignalStart + 152]); // line circom 114
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 149;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 153]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 150;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 150;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[149]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 150;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[149]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 150;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[148]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 150;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[148]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Multiplexor2_19_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[150]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[150]].signalStart + 1]);
}
for (uint i = 0; i < 151; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void SegmentMulAny_23_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 23;
ctx->componentMemory[coffset].templateName = "SegmentMulAny";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 108;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[109]{0};
}

void SegmentMulAny_23_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[2];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[197]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+112;
uint aux_dimensions[1] = {105};
for (uint i = 0; i < 105; i++) {
std::string new_cmp_name = "bits"+ctx->generate_position_array(aux_dimensions, 1, i);
BitElementMulAny_20_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 29 ;
aux_cmp_num += 4;
}
}
{
uint aux_create = 105;
int aux_cmp_num = 420+ctx_index+1;
uint csoffset = mySignalStart+3157;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
Edwards2Montgomery_16_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 106;
int aux_cmp_num = 423+ctx_index+1;
uint csoffset = mySignalStart+3178;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 107;
int aux_cmp_num = 421+ctx_index+1;
uint csoffset = mySignalStart+3161;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "eadder";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 108;
int aux_cmp_num = 422+ctx_index+1;
uint csoffset = mySignalStart+3171;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "lastSel";
Multiplexor2_19_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 105;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 110]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 105;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 111]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Edwards2Montgomery_16_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[105]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[105]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[105]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[105]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[198]); // line circom 92
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 95
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 96
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 97
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 98
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 0)]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 0);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * (Fr_toInt(&lvar[1]) + 1)) + 4)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BitElementMulAny_20_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 92
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[198]); // line circom 92
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[104]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[104]].signalStart + 1]);
}
{
uint cmp_index_ref = 106;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[104]].signalStart + 2]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 106;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[104]].signalStart + 3]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 107;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[106]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 107;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[106]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 107;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
Fr_neg(&expaux[0],&signalValues[mySignalStart + 110]); // line circom 114
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 107;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 111]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 108;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 108;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[107]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 108;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[107]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 108;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[106]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 108;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[106]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Multiplexor2_19_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[108]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[108]].signalStart + 1]);
}
for (uint i = 0; i < 109; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void EscalarMulAny_24_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 24;
ctx->componentMemory[coffset].templateName = "EscalarMulAny";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 256;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[6]{0};
}

void EscalarMulAny_24_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[7];
FrElement lvar[6];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[188]);
}
{
uint aux_create = 0;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+278;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[0]";
SegmentMulAny_22_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 596+ctx_index+1;
uint csoffset = mySignalStart+4720;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[1]";
SegmentMulAny_23_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+268;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "doublers";
MontgomeryDouble_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+274;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+258;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adders";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 1021+ctx_index+1;
uint csoffset = mySignalStart+7902;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "zeropoint";
IsZero_15_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 3 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[197]);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 256]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
IsZero_15_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[4]); // line circom 150
while(Fr_isTrue(&expaux[0])){
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 152
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[194]);
}
}else{
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[197]);
}
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[4],&lvar[5]); // line circom 156
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[3])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=Fr_toInt(&lvar[4]);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[3]) * 148) + Fr_toInt(&lvar[4]))) + 2)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[4];
// load src
Fr_add(&expaux[0],&lvar[4],&circuitConstants[2]); // line circom 156
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[4],&lvar[5]); // line circom 156
}
Fr_eq(&expaux[0],&lvar[3],&circuitConstants[1]); // line circom 160
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
Fr_sub(&expaux[3],&circuitConstants[200],&signalValues[mySignalStart + 256]); // line circom 162
Fr_mul(&expaux[2],&expaux[3],&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]); // line circom 162
Fr_add(&expaux[0],&signalValues[mySignalStart + 256],&expaux[2]); // line circom 162
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = 0;
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
Fr_sub(&expaux[3],&circuitConstants[201],&signalValues[mySignalStart + 257]); // line circom 163
Fr_mul(&expaux[2],&expaux[3],&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]); // line circom 163
Fr_add(&expaux[0],&signalValues[mySignalStart + 257],&expaux[2]); // line circom 163
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
}else{
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[1].offset+0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[1].offset+1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = 1;
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
Fr_add(&expaux[0],&lvar[3],&circuitConstants[2]); // line circom 150
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[3],&circuitConstants[4]); // line circom 150
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
Fr_sub(&expaux[2],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]); // line circom 194
Fr_mul(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0],&expaux[2]); // line circom 194
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
Fr_sub(&expaux[3],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]); // line circom 195
Fr_mul(&expaux[2],&expaux[3],&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]); // line circom 195
Fr_add(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1],&expaux[2]); // line circom 195
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
for (uint i = 0; i < 6; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void MultiMux3_25_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 25;
ctx->componentMemory[coffset].templateName = "MultiMux3";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 19;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[0];
}

void MultiMux3_25_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[10];
FrElement lvar[2];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 37];
// load src
Fr_mul(&expaux[0],&signalValues[mySignalStart + 19],&signalValues[mySignalStart + 18]); // line circom 38
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 40
while(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 21)];
// load src
Fr_sub(&expaux[7],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 7) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 6) + 2)]); // line circom 42
Fr_sub(&expaux[6],&expaux[7],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 5) + 2)]); // line circom 42
Fr_add(&expaux[5],&expaux[6],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 42
Fr_sub(&expaux[4],&expaux[5],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 3) + 2)]); // line circom 42
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 42
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 42
Fr_sub(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 42
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 37]); // line circom 42
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 23)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 6) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 43
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 43
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 43
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 19]); // line circom 43
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 25)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 5) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)]); // line circom 44
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 44
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 44
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 18]); // line circom 44
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 27)];
// load src
Fr_sub(&expaux[0],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 4) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 45
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 29)];
// load src
Fr_sub(&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 3) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)]); // line circom 47
Fr_sub(&expaux[2],&expaux[3],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)]); // line circom 47
Fr_add(&expaux[1],&expaux[2],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 47
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 37]); // line circom 47
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 31)];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 2) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 48
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 19]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 33)];
// load src
Fr_sub(&expaux[1],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 1) + 2)],&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]); // line circom 49
Fr_mul(&expaux[0],&expaux[1],&signalValues[mySignalStart + 18]); // line circom 49
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 35)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + (((8 * Fr_toInt(&lvar[1])) + 0) + 2)]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 0)];
// load src
Fr_add(&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 21)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 23)]); // line circom 52
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 25)]); // line circom 52
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 27)]); // line circom 52
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 20]); // line circom 52
Fr_add(&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 29)],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 31)]); // line circom 53
Fr_add(&expaux[3],&expaux[4],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 33)]); // line circom 53
Fr_add(&expaux[2],&expaux[3],&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 35)]); // line circom 53
Fr_add(&expaux[0],&expaux[1],&expaux[2]); // line circom 52
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 40
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 40
}
for (uint i = 0; i < 0; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void WindowMulFix_26_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 26;
ctx->componentMemory[coffset].templateName = "WindowMulFix";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 5;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[8]{0};
}

void WindowMulFix_26_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[2];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
{
uint aux_create = 0;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+57;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mux";
MultiMux3_25_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 38 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+51;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dbl2";
MontgomeryDouble_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+9;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr3";
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+16;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr4";
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+23;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr5";
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+30;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr6";
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 6;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+37;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr7";
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 7;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+44;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adr8";
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 18];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 19];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 20];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 10];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 11];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 12];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 13];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 14];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 15];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 16];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 7]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 8]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 17];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MultiMux3_25_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
for (uint i = 0; i < 8; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void SegmentMulFix_27_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 27;
ctx->componentMemory[coffset].templateName = "SegmentMulFix";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 251;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[254]{0};
}

void SegmentMulFix_27_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[4];
FrElement lvar[3];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[166]);
}
{
uint aux_create = 0;
int aux_cmp_num = 169+ctx_index+1;
uint csoffset = mySignalStart+1437;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
Edwards2Montgomery_16_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 171+ctx_index+1;
uint csoffset = mySignalStart+1445;
uint aux_dimensions[1] = {83};
for (uint i = 0; i < 83; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
WindowMulFix_26_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 95 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 84;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+255;
uint aux_dimensions[1] = {83};
for (uint i = 0; i < 83; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 167;
int aux_cmp_num = 84+ctx_index+1;
uint csoffset = mySignalStart+846;
uint aux_dimensions[1] = {83};
for (uint i = 0; i < 83; i++) {
std::string new_cmp_name = "cadders"+ctx->generate_position_array(aux_dimensions, 1, i);
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 250;
int aux_cmp_num = 168+ctx_index+1;
uint csoffset = mySignalStart+1431;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dblLast";
MontgomeryDouble_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 251;
int aux_cmp_num = 170+ctx_index+1;
uint csoffset = mySignalStart+1441;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 252;
int aux_cmp_num = 167+ctx_index+1;
uint csoffset = mySignalStart+1427;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "cm2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 253;
int aux_cmp_num = 83+ctx_index+1;
uint csoffset = mySignalStart+836;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "cAdd";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 253]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 254]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Edwards2Montgomery_16_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[166]); // line circom 166
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 169
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 167;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 167;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 175
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 176
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 167);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 177
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 167)]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 167);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 178
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 167)]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 180
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((3 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 4)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 180
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 180
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[164]); // line circom 183
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 167);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 167);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 250;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[83]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 250;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[83]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 249;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[250]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 249;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[250]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 166
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[166]); // line circom 166
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[166]); // line circom 194
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 196
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 84;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[250]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 84;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[250]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 84);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 200
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 84)]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 84);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 201
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&expaux[0])) + 84)]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 84);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 84);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 194
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[166]); // line circom 194
}
{
uint cmp_index_ref = 251;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[166]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 251;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[166]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 252;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[249]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 252;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[249]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 253;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[251]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 253;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[251]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 253;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
Fr_neg(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[252]].signalStart + 0]); // line circom 218
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 253;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[252]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[253]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[253]].signalStart + 1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[83]].signalStart + 2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[83]].signalStart + 3]);
}
for (uint i = 0; i < 254; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void SegmentMulFix_28_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 28;
ctx->componentMemory[coffset].templateName = "SegmentMulFix";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 8;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[11]{0};
}

void SegmentMulFix_28_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[3];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
uint aux_create = 0;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+60;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "e2m";
Edwards2Montgomery_16_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 9+ctx_index+1;
uint csoffset = mySignalStart+68;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "windows"+ctx->generate_position_array(aux_dimensions, 1, i);
WindowMulFix_26_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 95 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+12;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "adders"+ctx->generate_position_array(aux_dimensions, 1, i);
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+36;
uint aux_dimensions[1] = {2};
for (uint i = 0; i < 2; i++) {
std::string new_cmp_name = "cadders"+ctx->generate_position_array(aux_dimensions, 1, i);
MontgomeryAdd_18_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 7;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+54;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dblLast";
MontgomeryDouble_17_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 6 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 8;
int aux_cmp_num = 8+ctx_index+1;
uint csoffset = mySignalStart+64;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 9;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+50;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "cm2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 10;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+26;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "cAdd";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 10]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 11]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Edwards2Montgomery_16_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 166
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 169
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 180
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 1);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[2])) + 4)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((3 * Fr_toInt(&lvar[1])) + Fr_toInt(&lvar[2]))) + 4)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
WindowMulFix_26_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[2];
// load src
Fr_add(&expaux[0],&lvar[2],&circuitConstants[2]); // line circom 180
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[2],&circuitConstants[6]); // line circom 180
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 183
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 3]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryDouble_17_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 166
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 166
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 194
while(Fr_isTrue(&expaux[0])){
Fr_eq(&expaux[0],&lvar[1],&circuitConstants[1]); // line circom 196
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}else{
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 3);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[1])) + 3);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[((1 * Fr_toInt(&lvar[1])) + 1)]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
MontgomeryAdd_18_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 194
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[4]); // line circom 194
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 10;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 10;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 10;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
Fr_neg(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[9]].signalStart + 0]); // line circom 218
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 10;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[9]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[10]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[10]].signalStart + 1]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 2]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 3]);
}
for (uint i = 0; i < 11; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void EscalarMulFix_29_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 29;
ctx->componentMemory[coffset].templateName = "EscalarMulFix";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 253;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[4]{0};
}

void EscalarMulFix_29_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[5];
FrElement lvar[9];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[200]);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[201]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[182]);
}
{
uint aux_create = 0;
int aux_cmp_num = 2+ctx_index+1;
uint csoffset = mySignalStart+269;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[0]";
SegmentMulFix_27_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 921+ctx_index+1;
uint csoffset = mySignalStart+9599;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "segments[1]";
SegmentMulFix_28_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 0 ;
aux_cmp_num += 0;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+265;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "m2e";
Montgomery2Edwards_21_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 4 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+255;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "adders";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
PFrElement aux_dest = &lvar[3];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[4]);
}
{
PFrElement aux_dest = &lvar[4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[8];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
PFrElement aux_dest = &lvar[5];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[4]); // line circom 252
while(Fr_isTrue(&expaux[0])){
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 254
if(Fr_isTrue(&expaux[0])){
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[202]);
}
}else{
{
PFrElement aux_dest = &lvar[7];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[8]);
}
}
{
PFrElement aux_dest = &lvar[8];
// load src
Fr_sub(&expaux[2],&lvar[7],&circuitConstants[2]); // line circom 255
Fr_idiv(&expaux[1],&expaux[2],&circuitConstants[6]); // line circom 255
Fr_add(&expaux[0],&expaux[1],&circuitConstants[2]); // line circom 255
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[6],&lvar[7]); // line circom 259
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = ((1 * Fr_toInt(&lvar[5])) + 0);
{
uint map_index_aux[1];
map_index_aux[0]=Fr_toInt(&lvar[6]);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * ((Fr_toInt(&lvar[5]) * 249) + Fr_toInt(&lvar[6]))) + 2)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_add(&expaux[0],&lvar[6],&circuitConstants[2]); // line circom 259
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[6],&lvar[7]); // line circom 259
}
{
PFrElement aux_dest = &lvar[6];
// load src
// end load src
Fr_copy(aux_dest,&lvar[7]);
}
Fr_mul(&expaux[2],&lvar[8],&circuitConstants[6]); // line circom 263
Fr_lt(&expaux[0],&lvar[6],&expaux[2]); // line circom 263
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
uint map_index_aux[1];
map_index_aux[0]=Fr_toInt(&lvar[6]);
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[2].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[6];
// load src
Fr_add(&expaux[0],&lvar[6],&circuitConstants[2]); // line circom 263
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_mul(&expaux[2],&lvar[8],&circuitConstants[6]); // line circom 263
Fr_lt(&expaux[0],&lvar[6],&expaux[2]); // line circom 263
}
Fr_eq(&expaux[0],&lvar[5],&circuitConstants[1]); // line circom 267
if(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[200]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = 0;
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[201]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
}else{
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[1].offset+0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[1].offset+1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
Montgomery2Edwards_21_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 1;
{
uint map_index_aux[1];
map_index_aux[0]=0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = 1;
{
uint map_index_aux[1];
map_index_aux[0]=1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId].defs[3].offset+map_index_aux[0]];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
(*_functionTable[ctx->componentMemory[mySubcomponents[cmp_index_ref]].templateId])(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[0]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + ctx->templateInsId2IOSignalInfo[ctx->componentMemory[mySubcomponents[1]].templateId].defs[0].offset+1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);

}
}
}
{
PFrElement aux_dest = &lvar[5];
// load src
Fr_add(&expaux[0],&lvar[5],&circuitConstants[2]); // line circom 252
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[5],&circuitConstants[4]); // line circom 252
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0]);
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 1]);
}
for (uint i = 0; i < 4; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void ForceEqualIfEnabled_30_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 30;
ctx->componentMemory[coffset].templateName = "ForceEqualIfEnabled";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 3;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[1]{0};
}

void ForceEqualIfEnabled_30_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[6];
FrElement lvar[0];
uint sub_component_aux;
uint index_multiple_eq;
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+3;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "isz";
IsZero_15_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 3 ;
aux_cmp_num += 1;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
Fr_sub(&expaux[0],&signalValues[mySignalStart + 2],&signalValues[mySignalStart + 1]); // line circom 54
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
IsZero_15_run(mySubcomponents[cmp_index_ref],ctx);
}
Fr_sub(&expaux[2],&circuitConstants[2],&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]); // line circom 56
Fr_mul(&expaux[1],&expaux[2],&signalValues[mySignalStart + 0]); // line circom 56
Fr_eq(&expaux[0],&expaux[1],&circuitConstants[1]); // line circom 56
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 56. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
for (uint i = 0; i < 1; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void EdDSAMiMCVerifier_31_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 31;
ctx->componentMemory[coffset].templateName = "EdDSAMiMCVerifier";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 7;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[13]{0};
}

void EdDSAMiMCVerifier_31_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[3];
uint sub_component_aux;
uint index_multiple_eq;
{
uint aux_create = 0;
int aux_cmp_num = 1998+ctx_index+1;
uint csoffset = mySignalStart+21481;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "snum2bits";
Num2Bits_6_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 254 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 1+ctx_index+1;
uint csoffset = mySignalStart+17;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "compConstant";
CompConstant_8_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 519 ;
aux_cmp_num += 2;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 18+ctx_index+1;
uint csoffset = mySignalStart+1873;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "hash";
MultiMiMC7_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1843 ;
aux_cmp_num += 6;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 13+ctx_index+1;
uint csoffset = mySignalStart+590;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "h2bits";
Num2Bits_strict_12_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1283 ;
aux_cmp_num += 5;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 3+ctx_index+1;
uint csoffset = mySignalStart+536;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dbl1";
BabyDbl_14_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 14 ;
aux_cmp_num += 2;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 5+ctx_index+1;
uint csoffset = mySignalStart+550;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dbl2";
BabyDbl_14_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 14 ;
aux_cmp_num += 2;
}
}
{
uint aux_create = 6;
int aux_cmp_num = 7+ctx_index+1;
uint csoffset = mySignalStart+564;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "dbl3";
BabyDbl_14_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 14 ;
aux_cmp_num += 2;
}
}
{
uint aux_create = 7;
int aux_cmp_num = 24+ctx_index+1;
uint csoffset = mySignalStart+3716;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "isZero";
IsZero_15_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 3 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 8;
int aux_cmp_num = 25+ctx_index+1;
uint csoffset = mySignalStart+3719;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mulAny";
EscalarMulAny_24_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 7905 ;
aux_cmp_num += 1023;
}
}
{
uint aux_create = 9;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+7;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "addRight";
BabyAdd_13_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 10 ;
aux_cmp_num += 1;
}
}
{
uint aux_create = 10;
int aux_cmp_num = 1048+ctx_index+1;
uint csoffset = mySignalStart+11624;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "mulFix";
EscalarMulFix_29_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 9857 ;
aux_cmp_num += 950;
}
}
{
uint aux_create = 11;
int aux_cmp_num = 9+ctx_index+1;
uint csoffset = mySignalStart+578;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "eqCheckX";
ForceEqualIfEnabled_30_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 6 ;
aux_cmp_num += 2;
}
}
{
uint aux_create = 12;
int aux_cmp_num = 11+ctx_index+1;
uint csoffset = mySignalStart+584;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "eqCheckY";
ForceEqualIfEnabled_30_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 6 ;
aux_cmp_num += 2;
}
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 253];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Num2Bits_6_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[182]); // line circom 48
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 48
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[182]); // line circom 48
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 254];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
CompConstant_8_run(mySubcomponents[cmp_index_ref],ctx);
}
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[1]].signalStart + 0],&circuitConstants[1]); // line circom 52
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 52. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 6]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MultiMiMC7_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 254];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
Num2Bits_strict_12_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyDbl_14_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[4]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyDbl_14_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyDbl_14_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 7;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 2]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
IsZero_15_run(mySubcomponents[cmp_index_ref],ctx);
}
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[7]].signalStart + 0],&circuitConstants[1]); // line circom 84
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 84. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[188]); // line circom 87
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 87
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[188]); // line circom 87
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 256];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 8;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 257];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
EscalarMulAny_24_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 5]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 9;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[8]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
BabyAdd_13_run(mySubcomponents[cmp_index_ref],ctx);
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[200]);
}
{
PFrElement aux_dest = &lvar[2];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[201]);
}
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[182]); // line circom 109
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 10;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 2)];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + ((1 * Fr_toInt(&lvar[0])) + 0)]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
EscalarMulFix_29_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[0];
// load src
Fr_add(&expaux[0],&lvar[0],&circuitConstants[2]); // line circom 109
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[0],&circuitConstants[182]); // line circom 109
}
{
uint cmp_index_ref = 11;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 11;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[10]].signalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 11;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[9]].signalStart + 0]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
ForceEqualIfEnabled_30_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 12;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 12;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[10]].signalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 12;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[9]].signalStart + 1]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
ForceEqualIfEnabled_30_run(mySubcomponents[cmp_index_ref],ctx);
}
for (uint i = 0; i < 13; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void VerifyEdDSAMiMC_32_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 32;
ctx->componentMemory[coffset].templateName = "VerifyEdDSAMiMC";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 10;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[2]{0};
}

void VerifyEdDSAMiMC_32_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[2];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
{
uint aux_create = 0;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+10;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "M";
MultiMiMC7_5_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1843 ;
aux_cmp_num += 6;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 6+ctx_index+1;
uint csoffset = mySignalStart+1853;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "verifier";
EdDSAMiMCVerifier_31_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 21735 ;
aux_cmp_num += 2000;
}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[10]); // line circom 13
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + ((1 * Fr_toInt(&lvar[1])) + 1)];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + ((1 * Fr_toInt(&lvar[1])) + 5)]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
PFrElement aux_dest = &lvar[1];
// load src
Fr_add(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 13
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[10]); // line circom 13
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[10]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MultiMiMC7_5_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 3]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 4]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[0]].signalStart + 0]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
EdDSAMiMCVerifier_31_run(mySubcomponents[cmp_index_ref],ctx);
}
for (uint i = 0; i < 2; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void ProcessTx_33_create(uint soffset,uint coffset,Circom_CalcWit* ctx,std::string componentName,uint componentFather){
ctx->componentMemory[coffset].templateId = 33;
ctx->componentMemory[coffset].templateName = "ProcessTx";
ctx->componentMemory[coffset].signalStart = soffset;
ctx->componentMemory[coffset].inputCounter = 22;
ctx->componentMemory[coffset].componentName = componentName;
ctx->componentMemory[coffset].idFather = componentFather;
ctx->componentMemory[coffset].subcomponents = new uint[7]{0};
}

void ProcessTx_33_run(uint ctx_index,Circom_CalcWit* ctx){
FrElement* signalValues = ctx->signalValues;
u64 mySignalStart = ctx->componentMemory[ctx_index].signalStart;
std::string myTemplateName = ctx->componentMemory[ctx_index].templateName;
std::string myComponentName = ctx->componentMemory[ctx_index].componentName;
u64 myFather = ctx->componentMemory[ctx_index].idFather;
u64 myId = ctx_index;
u32* mySubcomponents = ctx->componentMemory[ctx_index].subcomponents;
bool* mySubcomponentsParallel = ctx->componentMemory[ctx_index].subcomponentsParallel;
FrElement* circuitConstants = ctx->circuitConstants;
std::string* listOfTemplateMessages = ctx->listOfTemplateMessages;
FrElement expaux[3];
FrElement lvar[2];
uint sub_component_aux;
uint index_multiple_eq;
{
PFrElement aux_dest = &lvar[0];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
{
uint aux_create = 0;
int aux_cmp_num = 25+ctx_index+1;
uint csoffset = mySignalStart+5579;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "senderExistence";
LeafExistence_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1856 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 1;
int aux_cmp_num = 34+ctx_index+1;
uint csoffset = mySignalStart+7435;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "signatureCheck";
VerifyEdDSAMiMC_32_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 23588 ;
aux_cmp_num += 2007;
}
}
{
uint aux_create = 2;
int aux_cmp_num = 12+ctx_index+1;
uint csoffset = mySignalStart+2616;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "newSenderLeaf";
MultiMiMC7_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1107 ;
aux_cmp_num += 4;
}
}
{
uint aux_create = 3;
int aux_cmp_num = 4+ctx_index+1;
uint csoffset = mySignalStart+766;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "computed_intermediate_root";
GetMerkleRoot_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 743 ;
aux_cmp_num += 4;
}
}
{
uint aux_create = 4;
int aux_cmp_num = 16+ctx_index+1;
uint csoffset = mySignalStart+3723;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "receiverExistence";
LeafExistence_4_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1856 ;
aux_cmp_num += 9;
}
}
{
uint aux_create = 5;
int aux_cmp_num = 8+ctx_index+1;
uint csoffset = mySignalStart+1509;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "newReceiverLeaf";
MultiMiMC7_1_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 1107 ;
aux_cmp_num += 4;
}
}
{
uint aux_create = 6;
int aux_cmp_num = 0+ctx_index+1;
uint csoffset = mySignalStart+23;
for (uint i = 0; i < 1; i++) {
std::string new_cmp_name = "computed_final_root";
GetMerkleRoot_3_create(csoffset,aux_cmp_num,ctx,new_cmp_name,myId);
mySubcomponents[aux_create+i] = aux_cmp_num;
csoffset += 743 ;
aux_cmp_num += 4;
}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 10]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 11]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 1]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 40
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 20]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 0;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 19]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 40
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 10]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 16]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 17]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 18]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 6];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 10]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 7];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 12]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 8];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 13]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 1;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 9];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 15]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
VerifyEdDSAMiMC_32_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 9]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 10]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_sub(&expaux[0],&signalValues[mySignalStart + 11],&signalValues[mySignalStart + 15]); // line circom 62
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 2;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MultiMiMC7_1_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[2]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
GetMerkleRoot_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 69
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 20]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 3;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 19]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
GetMerkleRoot_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 69
}
Fr_eq(&expaux[0],&ctx->signalValues[ctx->componentMemory[mySubcomponents[3]].signalStart + 0],&signalValues[mySignalStart + 2]); // line circom 75
if (!Fr_isTrue(&expaux[0])) std::cout << "Failed assert in template/function " << myTemplateName << " line 75. " <<  "Followed trace of components: " << ctx->getTrace(myId) << std::endl;
assert(Fr_isTrue(&expaux[0]));
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 12]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 13]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 14]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 2]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 83
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 22]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 4;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 5];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 21]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
LeafExistence_4_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 83
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 12]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 13]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
Fr_add(&expaux[0],&signalValues[mySignalStart + 14],&signalValues[mySignalStart + 15]); // line circom 92
// end load src
Fr_copy(aux_dest,&expaux[0]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 5;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 4];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
// need to run sub component
assert(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1));
MultiMiMC7_1_run(mySubcomponents[cmp_index_ref],ctx);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 1];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[5]].signalStart + 0]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
GetMerkleRoot_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[1]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 98
while(Fr_isTrue(&expaux[0])){
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 3];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 22]);
}
// no need to run sub component
assert(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1);
}
{
uint cmp_index_ref = 6;
{
PFrElement aux_dest = &ctx->signalValues[ctx->componentMemory[mySubcomponents[cmp_index_ref]].signalStart + 2];
// load src
// end load src
Fr_copy(aux_dest,&signalValues[mySignalStart + 21]);
}
// run sub component if needed
if(!(ctx->componentMemory[mySubcomponents[cmp_index_ref]].inputCounter -= 1)){
GetMerkleRoot_3_run(mySubcomponents[cmp_index_ref],ctx);

}
}
{
PFrElement aux_dest = &lvar[1];
// load src
// end load src
Fr_copy(aux_dest,&circuitConstants[2]);
}
Fr_lt(&expaux[0],&lvar[1],&circuitConstants[2]); // line circom 98
}
{
PFrElement aux_dest = &signalValues[mySignalStart + 0];
// load src
// end load src
Fr_copy(aux_dest,&ctx->signalValues[ctx->componentMemory[mySubcomponents[6]].signalStart + 0]);
}
for (uint i = 0; i < 7; i++){
uint index_subc = ctx->componentMemory[ctx_index].subcomponents[i];
if (index_subc != 0)release_memory_component(ctx,index_subc);
}
}

void run(Circom_CalcWit* ctx){
ProcessTx_33_create(1,0,ctx,"main",0);
ProcessTx_33_run(0,ctx);
}

