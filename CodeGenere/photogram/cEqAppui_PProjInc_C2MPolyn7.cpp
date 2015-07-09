// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"
#include "cEqAppui_PProjInc_C2MPolyn7.h"


cEqAppui_PProjInc_C2MPolyn7::cEqAppui_PProjInc_C2MPolyn7():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,69));
   AddIntRef (cIncIntervale("Orient",69,75));
   AddIntRef (cIncIntervale("Tmp_PTer",75,78));
   Close(false);
}



void cEqAppui_PProjInc_C2MPolyn7::ComputeVal()
{
   double tmp0_ = mCompCoord[69];
   double tmp1_ = mCompCoord[70];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[75];
   double tmp4_ = mCompCoord[76];
   double tmp5_ = mCompCoord[77];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[71];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x/tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[72];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y/tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[73];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z/tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[74];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = mLocXIm/mLocPolyn7_State_0_0;
   double tmp39_ = mLocYIm/mLocPolyn7_State_0_0;
   double tmp40_ = (tmp38_)*(tmp38_);
   double tmp41_ = (tmp39_)*(tmp39_);
   double tmp42_ = tmp40_*(tmp38_);
   double tmp43_ = (tmp39_)*(tmp38_);
   double tmp44_ = tmp43_*(tmp38_);
   double tmp45_ = tmp41_*(tmp38_);
   double tmp46_ = (tmp39_)*tmp41_;
   double tmp47_ = tmp42_*(tmp38_);
   double tmp48_ = tmp44_*(tmp38_);
   double tmp49_ = tmp45_*(tmp38_);
   double tmp50_ = tmp46_*(tmp38_);
   double tmp51_ = (tmp39_)*tmp46_;
   double tmp52_ = tmp47_*(tmp38_);
   double tmp53_ = tmp48_*(tmp38_);
   double tmp54_ = tmp49_*(tmp38_);
   double tmp55_ = tmp50_*(tmp38_);
   double tmp56_ = tmp51_*(tmp38_);
   double tmp57_ = (tmp39_)*tmp51_;
   double tmp58_ = tmp52_*(tmp38_);
   double tmp59_ = tmp53_*(tmp38_);
   double tmp60_ = tmp54_*(tmp38_);
   double tmp61_ = tmp55_*(tmp38_);
   double tmp62_ = tmp56_*(tmp38_);
   double tmp63_ = tmp57_*(tmp38_);
   double tmp64_ = (tmp39_)*tmp57_;
   double tmp65_ = mCompCoord[0];
   double tmp66_ = -(tmp6_);
   double tmp67_ = tmp7_*tmp20_;
   double tmp68_ = tmp6_*tmp20_;
   double tmp69_ = tmp66_*tmp19_;
   double tmp70_ = tmp67_*tmp21_;
   double tmp71_ = tmp69_+tmp70_;
   double tmp72_ = (tmp71_)*(tmp17_);
   double tmp73_ = tmp7_*tmp19_;
   double tmp74_ = tmp68_*tmp21_;
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = (tmp75_)*(tmp29_);
   double tmp77_ = tmp72_+tmp76_;
   double tmp78_ = tmp2_*tmp21_;
   double tmp79_ = tmp78_*(tmp37_);
   double tmp80_ = tmp77_+tmp79_;
   double tmp81_ = mCompCoord[3];
   double tmp82_ = mCompCoord[4];
   double tmp83_ = mCompCoord[5];
   double tmp84_ = (tmp38_)*(tmp39_);
   double tmp85_ = mCompCoord[6];
   double tmp86_ = tmp58_*(tmp38_);
   double tmp87_ = tmp59_*(tmp38_);
   double tmp88_ = tmp60_*(tmp38_);
   double tmp89_ = tmp61_*(tmp38_);
   double tmp90_ = tmp62_*(tmp38_);
   double tmp91_ = tmp63_*(tmp38_);
   double tmp92_ = tmp64_*(tmp38_);
   double tmp93_ = (tmp39_)*tmp64_;

  mVal[0] = (mCompCoord[1]+tmp65_*((tmp7_*tmp2_*(tmp17_)+tmp6_*tmp2_*(tmp29_)+tmp8_*(tmp37_))/(tmp80_)))-((((1+tmp81_)*(tmp38_)+tmp82_*(tmp39_))-tmp83_*2*tmp40_+tmp85_*tmp84_+mCompCoord[7]*tmp41_)*mLocPolyn7_State_0_0+(mCompCoord[9]*tmp42_+mCompCoord[10]*tmp44_+mCompCoord[11]*tmp45_+mCompCoord[12]*tmp46_+mCompCoord[17]*tmp47_+mCompCoord[18]*tmp48_+mCompCoord[19]*tmp49_+mCompCoord[20]*tmp50_+mCompCoord[21]*tmp51_+mCompCoord[27]*tmp52_+mCompCoord[28]*tmp53_+mCompCoord[29]*tmp54_+mCompCoord[30]*tmp55_+mCompCoord[31]*tmp56_+mCompCoord[32]*tmp57_+mCompCoord[39]*tmp58_+mCompCoord[40]*tmp59_+mCompCoord[41]*tmp60_+mCompCoord[42]*tmp61_+mCompCoord[43]*tmp62_+mCompCoord[44]*tmp63_+mCompCoord[45]*tmp64_+mCompCoord[53]*tmp86_+mCompCoord[54]*tmp87_+mCompCoord[55]*tmp88_+mCompCoord[56]*tmp89_+mCompCoord[57]*tmp90_+mCompCoord[58]*tmp91_+mCompCoord[59]*tmp92_+mCompCoord[60]*tmp93_)*mLocPolyn7_State_0_0);

  mVal[1] = (mCompCoord[2]+tmp65_*(((tmp66_*tmp21_+tmp67_*tmp18_)*(tmp17_)+(tmp7_*tmp21_+tmp68_*tmp18_)*(tmp29_)+tmp2_*tmp18_*(tmp37_))/(tmp80_)))-((((1-tmp81_)*(tmp39_)+tmp82_*(tmp38_)+tmp83_*tmp84_)-tmp85_*2*tmp41_+mCompCoord[8]*tmp40_)*mLocPolyn7_State_0_0+(mCompCoord[13]*tmp42_+mCompCoord[14]*tmp44_+mCompCoord[15]*tmp45_+mCompCoord[16]*tmp46_+mCompCoord[22]*tmp47_+mCompCoord[23]*tmp48_+mCompCoord[24]*tmp49_+mCompCoord[25]*tmp50_+mCompCoord[26]*tmp51_+mCompCoord[33]*tmp52_+mCompCoord[34]*tmp53_+mCompCoord[35]*tmp54_+mCompCoord[36]*tmp55_+mCompCoord[37]*tmp56_+mCompCoord[38]*tmp57_+mCompCoord[46]*tmp58_+mCompCoord[47]*tmp59_+mCompCoord[48]*tmp60_+mCompCoord[49]*tmp61_+mCompCoord[50]*tmp62_+mCompCoord[51]*tmp63_+mCompCoord[52]*tmp64_+mCompCoord[61]*tmp86_+mCompCoord[62]*tmp87_+mCompCoord[63]*tmp88_+mCompCoord[64]*tmp89_+mCompCoord[65]*tmp90_+mCompCoord[66]*tmp91_+mCompCoord[67]*tmp92_+mCompCoord[68]*tmp93_)*mLocPolyn7_State_0_0);

}


void cEqAppui_PProjInc_C2MPolyn7::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[69];
   double tmp1_ = mCompCoord[70];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[75];
   double tmp4_ = mCompCoord[76];
   double tmp5_ = mCompCoord[77];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[71];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x/tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[72];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y/tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[73];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z/tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[74];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = mLocXIm/mLocPolyn7_State_0_0;
   double tmp39_ = mLocYIm/mLocPolyn7_State_0_0;
   double tmp40_ = (tmp38_)*(tmp38_);
   double tmp41_ = (tmp39_)*(tmp39_);
   double tmp42_ = tmp40_*(tmp38_);
   double tmp43_ = (tmp39_)*(tmp38_);
   double tmp44_ = tmp43_*(tmp38_);
   double tmp45_ = tmp41_*(tmp38_);
   double tmp46_ = (tmp39_)*tmp41_;
   double tmp47_ = tmp42_*(tmp38_);
   double tmp48_ = tmp44_*(tmp38_);
   double tmp49_ = tmp45_*(tmp38_);
   double tmp50_ = tmp46_*(tmp38_);
   double tmp51_ = (tmp39_)*tmp46_;
   double tmp52_ = tmp47_*(tmp38_);
   double tmp53_ = tmp48_*(tmp38_);
   double tmp54_ = tmp49_*(tmp38_);
   double tmp55_ = tmp50_*(tmp38_);
   double tmp56_ = tmp51_*(tmp38_);
   double tmp57_ = (tmp39_)*tmp51_;
   double tmp58_ = tmp52_*(tmp38_);
   double tmp59_ = tmp53_*(tmp38_);
   double tmp60_ = tmp54_*(tmp38_);
   double tmp61_ = tmp55_*(tmp38_);
   double tmp62_ = tmp56_*(tmp38_);
   double tmp63_ = tmp57_*(tmp38_);
   double tmp64_ = (tmp39_)*tmp57_;
   double tmp65_ = tmp7_*tmp2_;
   double tmp66_ = tmp65_*(tmp17_);
   double tmp67_ = tmp6_*tmp2_;
   double tmp68_ = tmp67_*(tmp29_);
   double tmp69_ = tmp66_+tmp68_;
   double tmp70_ = tmp8_*(tmp37_);
   double tmp71_ = tmp69_+tmp70_;
   double tmp72_ = -(tmp6_);
   double tmp73_ = tmp72_*tmp19_;
   double tmp74_ = tmp7_*tmp20_;
   double tmp75_ = tmp74_*tmp21_;
   double tmp76_ = tmp73_+tmp75_;
   double tmp77_ = (tmp76_)*(tmp17_);
   double tmp78_ = tmp7_*tmp19_;
   double tmp79_ = tmp6_*tmp20_;
   double tmp80_ = tmp79_*tmp21_;
   double tmp81_ = tmp78_+tmp80_;
   double tmp82_ = (tmp81_)*(tmp29_);
   double tmp83_ = tmp77_+tmp82_;
   double tmp84_ = tmp2_*tmp21_;
   double tmp85_ = tmp84_*(tmp37_);
   double tmp86_ = tmp83_+tmp85_;
   double tmp87_ = (tmp71_)/(tmp86_);
   double tmp88_ = (tmp38_)*(tmp39_);
   double tmp89_ = tmp58_*(tmp38_);
   double tmp90_ = tmp59_*(tmp38_);
   double tmp91_ = tmp60_*(tmp38_);
   double tmp92_ = tmp61_*(tmp38_);
   double tmp93_ = tmp62_*(tmp38_);
   double tmp94_ = tmp63_*(tmp38_);
   double tmp95_ = tmp64_*(tmp38_);
   double tmp96_ = (tmp39_)*tmp64_;
   double tmp97_ = -(1);
   double tmp98_ = tmp97_*tmp6_;
   double tmp99_ = mCompCoord[0];
   double tmp100_ = tmp97_*tmp8_;
   double tmp101_ = -(tmp2_);
   double tmp102_ = ElSquare(tmp86_);
   double tmp103_ = -(tmp21_);
   double tmp104_ = tmp97_*tmp18_;
   double tmp105_ = ElSquare(tmp5_);
   double tmp106_ = -(mLocProjK_x);
   double tmp107_ = tmp106_/tmp105_;
   double tmp108_ = -(mLocProjK_y);
   double tmp109_ = tmp108_/tmp105_;
   double tmp110_ = -(mLocProjK_z);
   double tmp111_ = tmp110_/tmp105_;
   double tmp112_ = mCompCoord[3];
   double tmp113_ = mCompCoord[4];
   double tmp114_ = mCompCoord[5];
   double tmp115_ = mCompCoord[6];
   double tmp116_ = tmp72_*tmp21_;
   double tmp117_ = tmp74_*tmp18_;
   double tmp118_ = tmp116_+tmp117_;
   double tmp119_ = (tmp118_)*(tmp17_);
   double tmp120_ = tmp7_*tmp21_;
   double tmp121_ = tmp79_*tmp18_;
   double tmp122_ = tmp120_+tmp121_;
   double tmp123_ = (tmp122_)*(tmp29_);
   double tmp124_ = tmp119_+tmp123_;
   double tmp125_ = tmp2_*tmp18_;
   double tmp126_ = tmp125_*(tmp37_);
   double tmp127_ = tmp124_+tmp126_;
   double tmp128_ = (tmp127_)/(tmp86_);
   double tmp129_ = (tmp38_)*mLocPolyn7_State_0_0;
   double tmp130_ = -(tmp129_);
   double tmp131_ = tmp88_*mLocPolyn7_State_0_0;
   double tmp132_ = -(tmp131_);
   double tmp133_ = tmp42_*mLocPolyn7_State_0_0;
   double tmp134_ = -(tmp133_);
   double tmp135_ = tmp44_*mLocPolyn7_State_0_0;
   double tmp136_ = -(tmp135_);
   double tmp137_ = tmp45_*mLocPolyn7_State_0_0;
   double tmp138_ = -(tmp137_);
   double tmp139_ = tmp46_*mLocPolyn7_State_0_0;
   double tmp140_ = -(tmp139_);
   double tmp141_ = tmp47_*mLocPolyn7_State_0_0;
   double tmp142_ = -(tmp141_);
   double tmp143_ = tmp48_*mLocPolyn7_State_0_0;
   double tmp144_ = -(tmp143_);
   double tmp145_ = tmp49_*mLocPolyn7_State_0_0;
   double tmp146_ = -(tmp145_);
   double tmp147_ = tmp50_*mLocPolyn7_State_0_0;
   double tmp148_ = -(tmp147_);
   double tmp149_ = tmp51_*mLocPolyn7_State_0_0;
   double tmp150_ = -(tmp149_);
   double tmp151_ = tmp52_*mLocPolyn7_State_0_0;
   double tmp152_ = -(tmp151_);
   double tmp153_ = tmp53_*mLocPolyn7_State_0_0;
   double tmp154_ = -(tmp153_);
   double tmp155_ = tmp54_*mLocPolyn7_State_0_0;
   double tmp156_ = -(tmp155_);
   double tmp157_ = tmp55_*mLocPolyn7_State_0_0;
   double tmp158_ = -(tmp157_);
   double tmp159_ = tmp56_*mLocPolyn7_State_0_0;
   double tmp160_ = -(tmp159_);
   double tmp161_ = tmp57_*mLocPolyn7_State_0_0;
   double tmp162_ = -(tmp161_);
   double tmp163_ = tmp58_*mLocPolyn7_State_0_0;
   double tmp164_ = -(tmp163_);
   double tmp165_ = tmp59_*mLocPolyn7_State_0_0;
   double tmp166_ = -(tmp165_);
   double tmp167_ = tmp60_*mLocPolyn7_State_0_0;
   double tmp168_ = -(tmp167_);
   double tmp169_ = tmp61_*mLocPolyn7_State_0_0;
   double tmp170_ = -(tmp169_);
   double tmp171_ = tmp62_*mLocPolyn7_State_0_0;
   double tmp172_ = -(tmp171_);
   double tmp173_ = tmp63_*mLocPolyn7_State_0_0;
   double tmp174_ = -(tmp173_);
   double tmp175_ = tmp64_*mLocPolyn7_State_0_0;
   double tmp176_ = -(tmp175_);
   double tmp177_ = tmp89_*mLocPolyn7_State_0_0;
   double tmp178_ = -(tmp177_);
   double tmp179_ = tmp90_*mLocPolyn7_State_0_0;
   double tmp180_ = -(tmp179_);
   double tmp181_ = tmp91_*mLocPolyn7_State_0_0;
   double tmp182_ = -(tmp181_);
   double tmp183_ = tmp92_*mLocPolyn7_State_0_0;
   double tmp184_ = -(tmp183_);
   double tmp185_ = tmp93_*mLocPolyn7_State_0_0;
   double tmp186_ = -(tmp185_);
   double tmp187_ = tmp94_*mLocPolyn7_State_0_0;
   double tmp188_ = -(tmp187_);
   double tmp189_ = tmp95_*mLocPolyn7_State_0_0;
   double tmp190_ = -(tmp189_);
   double tmp191_ = tmp96_*mLocPolyn7_State_0_0;
   double tmp192_ = -(tmp191_);
   double tmp193_ = -(tmp7_);
   double tmp194_ = tmp98_*tmp20_;
   double tmp195_ = tmp193_*tmp19_;
   double tmp196_ = tmp194_*tmp21_;
   double tmp197_ = tmp195_+tmp196_;
   double tmp198_ = (tmp197_)*(tmp17_);
   double tmp199_ = tmp98_*tmp19_;
   double tmp200_ = tmp199_+tmp75_;
   double tmp201_ = (tmp200_)*(tmp29_);
   double tmp202_ = tmp198_+tmp201_;
   double tmp203_ = tmp101_*tmp7_;
   double tmp204_ = tmp101_*tmp6_;
   double tmp205_ = tmp203_*tmp21_;
   double tmp206_ = tmp205_*(tmp17_);
   double tmp207_ = tmp204_*tmp21_;
   double tmp208_ = tmp207_*(tmp29_);
   double tmp209_ = tmp206_+tmp208_;
   double tmp210_ = tmp100_*tmp21_;
   double tmp211_ = tmp210_*(tmp37_);
   double tmp212_ = tmp209_+tmp211_;
   double tmp213_ = tmp103_*tmp72_;
   double tmp214_ = tmp104_*tmp74_;
   double tmp215_ = tmp213_+tmp214_;
   double tmp216_ = (tmp215_)*(tmp17_);
   double tmp217_ = tmp103_*tmp7_;
   double tmp218_ = tmp104_*tmp79_;
   double tmp219_ = tmp217_+tmp218_;
   double tmp220_ = (tmp219_)*(tmp29_);
   double tmp221_ = tmp216_+tmp220_;
   double tmp222_ = tmp104_*tmp2_;
   double tmp223_ = tmp222_*(tmp37_);
   double tmp224_ = tmp221_+tmp223_;
   double tmp225_ = tmp97_*(tmp76_);
   double tmp226_ = tmp97_*(tmp81_);
   double tmp227_ = tmp97_*tmp84_;
   double tmp228_ = mLocProjI_x*(tmp76_);
   double tmp229_ = mLocProjI_y*(tmp81_);
   double tmp230_ = tmp228_+tmp229_;
   double tmp231_ = mLocProjI_z*tmp84_;
   double tmp232_ = tmp230_+tmp231_;
   double tmp233_ = mLocProjJ_x*(tmp76_);
   double tmp234_ = mLocProjJ_y*(tmp81_);
   double tmp235_ = tmp233_+tmp234_;
   double tmp236_ = mLocProjJ_z*tmp84_;
   double tmp237_ = tmp235_+tmp236_;
   double tmp238_ = (tmp107_)*(tmp76_);
   double tmp239_ = (tmp109_)*(tmp81_);
   double tmp240_ = tmp238_+tmp239_;
   double tmp241_ = (tmp111_)*tmp84_;
   double tmp242_ = tmp240_+tmp241_;

  mVal[0] = (mCompCoord[1]+tmp99_*(tmp87_))-((((1+tmp112_)*(tmp38_)+tmp113_*(tmp39_))-tmp114_*2*tmp40_+tmp115_*tmp88_+mCompCoord[7]*tmp41_)*mLocPolyn7_State_0_0+(mCompCoord[9]*tmp42_+mCompCoord[10]*tmp44_+mCompCoord[11]*tmp45_+mCompCoord[12]*tmp46_+mCompCoord[17]*tmp47_+mCompCoord[18]*tmp48_+mCompCoord[19]*tmp49_+mCompCoord[20]*tmp50_+mCompCoord[21]*tmp51_+mCompCoord[27]*tmp52_+mCompCoord[28]*tmp53_+mCompCoord[29]*tmp54_+mCompCoord[30]*tmp55_+mCompCoord[31]*tmp56_+mCompCoord[32]*tmp57_+mCompCoord[39]*tmp58_+mCompCoord[40]*tmp59_+mCompCoord[41]*tmp60_+mCompCoord[42]*tmp61_+mCompCoord[43]*tmp62_+mCompCoord[44]*tmp63_+mCompCoord[45]*tmp64_+mCompCoord[53]*tmp89_+mCompCoord[54]*tmp90_+mCompCoord[55]*tmp91_+mCompCoord[56]*tmp92_+mCompCoord[57]*tmp93_+mCompCoord[58]*tmp94_+mCompCoord[59]*tmp95_+mCompCoord[60]*tmp96_)*mLocPolyn7_State_0_0);

  mCompDer[0][0] = tmp87_;
  mCompDer[0][1] = 1;
  mCompDer[0][2] = 0;
  mCompDer[0][3] = tmp130_;
  mCompDer[0][4] = -((tmp39_)*mLocPolyn7_State_0_0);
  mCompDer[0][5] = -(-(2*tmp40_)*mLocPolyn7_State_0_0);
  mCompDer[0][6] = tmp132_;
  mCompDer[0][7] = -(tmp41_*mLocPolyn7_State_0_0);
  mCompDer[0][8] = 0;
  mCompDer[0][9] = tmp134_;
  mCompDer[0][10] = tmp136_;
  mCompDer[0][11] = tmp138_;
  mCompDer[0][12] = tmp140_;
  mCompDer[0][13] = 0;
  mCompDer[0][14] = 0;
  mCompDer[0][15] = 0;
  mCompDer[0][16] = 0;
  mCompDer[0][17] = tmp142_;
  mCompDer[0][18] = tmp144_;
  mCompDer[0][19] = tmp146_;
  mCompDer[0][20] = tmp148_;
  mCompDer[0][21] = tmp150_;
  mCompDer[0][22] = 0;
  mCompDer[0][23] = 0;
  mCompDer[0][24] = 0;
  mCompDer[0][25] = 0;
  mCompDer[0][26] = 0;
  mCompDer[0][27] = tmp152_;
  mCompDer[0][28] = tmp154_;
  mCompDer[0][29] = tmp156_;
  mCompDer[0][30] = tmp158_;
  mCompDer[0][31] = tmp160_;
  mCompDer[0][32] = tmp162_;
  mCompDer[0][33] = 0;
  mCompDer[0][34] = 0;
  mCompDer[0][35] = 0;
  mCompDer[0][36] = 0;
  mCompDer[0][37] = 0;
  mCompDer[0][38] = 0;
  mCompDer[0][39] = tmp164_;
  mCompDer[0][40] = tmp166_;
  mCompDer[0][41] = tmp168_;
  mCompDer[0][42] = tmp170_;
  mCompDer[0][43] = tmp172_;
  mCompDer[0][44] = tmp174_;
  mCompDer[0][45] = tmp176_;
  mCompDer[0][46] = 0;
  mCompDer[0][47] = 0;
  mCompDer[0][48] = 0;
  mCompDer[0][49] = 0;
  mCompDer[0][50] = 0;
  mCompDer[0][51] = 0;
  mCompDer[0][52] = 0;
  mCompDer[0][53] = tmp178_;
  mCompDer[0][54] = tmp180_;
  mCompDer[0][55] = tmp182_;
  mCompDer[0][56] = tmp184_;
  mCompDer[0][57] = tmp186_;
  mCompDer[0][58] = tmp188_;
  mCompDer[0][59] = tmp190_;
  mCompDer[0][60] = tmp192_;
  mCompDer[0][61] = 0;
  mCompDer[0][62] = 0;
  mCompDer[0][63] = 0;
  mCompDer[0][64] = 0;
  mCompDer[0][65] = 0;
  mCompDer[0][66] = 0;
  mCompDer[0][67] = 0;
  mCompDer[0][68] = 0;
  mCompDer[0][69] = (((tmp98_*tmp2_*(tmp17_)+tmp65_*(tmp29_))*(tmp86_)-(tmp71_)*(tmp202_))/tmp102_)*tmp99_;
  mCompDer[0][70] = (((tmp100_*tmp7_*(tmp17_)+tmp100_*tmp6_*(tmp29_)+tmp2_*(tmp37_))*(tmp86_)-(tmp71_)*(tmp212_))/tmp102_)*tmp99_;
  mCompDer[0][71] = (-((tmp71_)*(tmp224_))/tmp102_)*tmp99_;
  mCompDer[0][72] = ((tmp97_*tmp65_*(tmp86_)-(tmp71_)*tmp225_)/tmp102_)*tmp99_;
  mCompDer[0][73] = ((tmp97_*tmp67_*(tmp86_)-(tmp71_)*tmp226_)/tmp102_)*tmp99_;
  mCompDer[0][74] = ((tmp100_*(tmp86_)-(tmp71_)*tmp227_)/tmp102_)*tmp99_;
  mCompDer[0][75] = (((mLocProjI_x*tmp65_+mLocProjI_y*tmp67_+mLocProjI_z*tmp8_)*(tmp86_)-(tmp71_)*(tmp232_))/tmp102_)*tmp99_;
  mCompDer[0][76] = (((mLocProjJ_x*tmp65_+mLocProjJ_y*tmp67_+mLocProjJ_z*tmp8_)*(tmp86_)-(tmp71_)*(tmp237_))/tmp102_)*tmp99_;
  mCompDer[0][77] = ((((tmp107_)*tmp65_+(tmp109_)*tmp67_+(tmp111_)*tmp8_)*(tmp86_)-(tmp71_)*(tmp242_))/tmp102_)*tmp99_;
  mVal[1] = (mCompCoord[2]+tmp99_*(tmp128_))-((((1-tmp112_)*(tmp39_)+tmp113_*(tmp38_)+tmp114_*tmp88_)-tmp115_*2*tmp41_+mCompCoord[8]*tmp40_)*mLocPolyn7_State_0_0+(mCompCoord[13]*tmp42_+mCompCoord[14]*tmp44_+mCompCoord[15]*tmp45_+mCompCoord[16]*tmp46_+mCompCoord[22]*tmp47_+mCompCoord[23]*tmp48_+mCompCoord[24]*tmp49_+mCompCoord[25]*tmp50_+mCompCoord[26]*tmp51_+mCompCoord[33]*tmp52_+mCompCoord[34]*tmp53_+mCompCoord[35]*tmp54_+mCompCoord[36]*tmp55_+mCompCoord[37]*tmp56_+mCompCoord[38]*tmp57_+mCompCoord[46]*tmp58_+mCompCoord[47]*tmp59_+mCompCoord[48]*tmp60_+mCompCoord[49]*tmp61_+mCompCoord[50]*tmp62_+mCompCoord[51]*tmp63_+mCompCoord[52]*tmp64_+mCompCoord[61]*tmp89_+mCompCoord[62]*tmp90_+mCompCoord[63]*tmp91_+mCompCoord[64]*tmp92_+mCompCoord[65]*tmp93_+mCompCoord[66]*tmp94_+mCompCoord[67]*tmp95_+mCompCoord[68]*tmp96_)*mLocPolyn7_State_0_0);

  mCompDer[1][0] = tmp128_;
  mCompDer[1][1] = 0;
  mCompDer[1][2] = 1;
  mCompDer[1][3] = -(tmp97_*(tmp39_)*mLocPolyn7_State_0_0);
  mCompDer[1][4] = tmp130_;
  mCompDer[1][5] = tmp132_;
  mCompDer[1][6] = -(-(2*tmp41_)*mLocPolyn7_State_0_0);
  mCompDer[1][7] = 0;
  mCompDer[1][8] = -(tmp40_*mLocPolyn7_State_0_0);
  mCompDer[1][9] = 0;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
  mCompDer[1][12] = 0;
  mCompDer[1][13] = tmp134_;
  mCompDer[1][14] = tmp136_;
  mCompDer[1][15] = tmp138_;
  mCompDer[1][16] = tmp140_;
  mCompDer[1][17] = 0;
  mCompDer[1][18] = 0;
  mCompDer[1][19] = 0;
  mCompDer[1][20] = 0;
  mCompDer[1][21] = 0;
  mCompDer[1][22] = tmp142_;
  mCompDer[1][23] = tmp144_;
  mCompDer[1][24] = tmp146_;
  mCompDer[1][25] = tmp148_;
  mCompDer[1][26] = tmp150_;
  mCompDer[1][27] = 0;
  mCompDer[1][28] = 0;
  mCompDer[1][29] = 0;
  mCompDer[1][30] = 0;
  mCompDer[1][31] = 0;
  mCompDer[1][32] = 0;
  mCompDer[1][33] = tmp152_;
  mCompDer[1][34] = tmp154_;
  mCompDer[1][35] = tmp156_;
  mCompDer[1][36] = tmp158_;
  mCompDer[1][37] = tmp160_;
  mCompDer[1][38] = tmp162_;
  mCompDer[1][39] = 0;
  mCompDer[1][40] = 0;
  mCompDer[1][41] = 0;
  mCompDer[1][42] = 0;
  mCompDer[1][43] = 0;
  mCompDer[1][44] = 0;
  mCompDer[1][45] = 0;
  mCompDer[1][46] = tmp164_;
  mCompDer[1][47] = tmp166_;
  mCompDer[1][48] = tmp168_;
  mCompDer[1][49] = tmp170_;
  mCompDer[1][50] = tmp172_;
  mCompDer[1][51] = tmp174_;
  mCompDer[1][52] = tmp176_;
  mCompDer[1][53] = 0;
  mCompDer[1][54] = 0;
  mCompDer[1][55] = 0;
  mCompDer[1][56] = 0;
  mCompDer[1][57] = 0;
  mCompDer[1][58] = 0;
  mCompDer[1][59] = 0;
  mCompDer[1][60] = 0;
  mCompDer[1][61] = tmp178_;
  mCompDer[1][62] = tmp180_;
  mCompDer[1][63] = tmp182_;
  mCompDer[1][64] = tmp184_;
  mCompDer[1][65] = tmp186_;
  mCompDer[1][66] = tmp188_;
  mCompDer[1][67] = tmp190_;
  mCompDer[1][68] = tmp192_;
  mCompDer[1][69] = ((((tmp193_*tmp21_+tmp194_*tmp18_)*(tmp17_)+(tmp98_*tmp21_+tmp117_)*(tmp29_))*(tmp86_)-(tmp127_)*(tmp202_))/tmp102_)*tmp99_;
  mCompDer[1][70] = (((tmp203_*tmp18_*(tmp17_)+tmp204_*tmp18_*(tmp29_)+tmp100_*tmp18_*(tmp37_))*(tmp86_)-(tmp127_)*(tmp212_))/tmp102_)*tmp99_;
  mCompDer[1][71] = ((((tmp104_*tmp72_+tmp21_*tmp74_)*(tmp17_)+(tmp104_*tmp7_+tmp21_*tmp79_)*(tmp29_)+tmp21_*tmp2_*(tmp37_))*(tmp86_)-(tmp127_)*(tmp224_))/tmp102_)*tmp99_;
  mCompDer[1][72] = ((tmp97_*(tmp118_)*(tmp86_)-(tmp127_)*tmp225_)/tmp102_)*tmp99_;
  mCompDer[1][73] = ((tmp97_*(tmp122_)*(tmp86_)-(tmp127_)*tmp226_)/tmp102_)*tmp99_;
  mCompDer[1][74] = ((tmp97_*tmp125_*(tmp86_)-(tmp127_)*tmp227_)/tmp102_)*tmp99_;
  mCompDer[1][75] = (((mLocProjI_x*(tmp118_)+mLocProjI_y*(tmp122_)+mLocProjI_z*tmp125_)*(tmp86_)-(tmp127_)*(tmp232_))/tmp102_)*tmp99_;
  mCompDer[1][76] = (((mLocProjJ_x*(tmp118_)+mLocProjJ_y*(tmp122_)+mLocProjJ_z*tmp125_)*(tmp86_)-(tmp127_)*(tmp237_))/tmp102_)*tmp99_;
  mCompDer[1][77] = ((((tmp107_)*(tmp118_)+(tmp109_)*(tmp122_)+(tmp111_)*tmp125_)*(tmp86_)-(tmp127_)*(tmp242_))/tmp102_)*tmp99_;
}


void cEqAppui_PProjInc_C2MPolyn7::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_PProjInc_C2MPolyn7 Has no Der Sec");
}

void cEqAppui_PProjInc_C2MPolyn7::SetPolyn7_State_0_0(double aVal){ mLocPolyn7_State_0_0 = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjI_x(double aVal){ mLocProjI_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjI_y(double aVal){ mLocProjI_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjI_z(double aVal){ mLocProjI_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjJ_x(double aVal){ mLocProjJ_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjJ_y(double aVal){ mLocProjJ_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjJ_z(double aVal){ mLocProjJ_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjK_x(double aVal){ mLocProjK_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjK_y(double aVal){ mLocProjK_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjK_z(double aVal){ mLocProjK_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjP0_x(double aVal){ mLocProjP0_x = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjP0_y(double aVal){ mLocProjP0_y = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetProjP0_z(double aVal){ mLocProjP0_z = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_PProjInc_C2MPolyn7::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_PProjInc_C2MPolyn7::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "Polyn7_State_0_0") return & mLocPolyn7_State_0_0;
   if (aName == "ProjI_x") return & mLocProjI_x;
   if (aName == "ProjI_y") return & mLocProjI_y;
   if (aName == "ProjI_z") return & mLocProjI_z;
   if (aName == "ProjJ_x") return & mLocProjJ_x;
   if (aName == "ProjJ_y") return & mLocProjJ_y;
   if (aName == "ProjJ_z") return & mLocProjJ_z;
   if (aName == "ProjK_x") return & mLocProjK_x;
   if (aName == "ProjK_y") return & mLocProjK_y;
   if (aName == "ProjK_z") return & mLocProjK_z;
   if (aName == "ProjP0_x") return & mLocProjP0_x;
   if (aName == "ProjP0_y") return & mLocProjP0_y;
   if (aName == "ProjP0_z") return & mLocProjP0_z;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_PProjInc_C2MPolyn7::mTheAuto("cEqAppui_PProjInc_C2MPolyn7",cEqAppui_PProjInc_C2MPolyn7::Alloc);


cElCompiledFonc *  cEqAppui_PProjInc_C2MPolyn7::Alloc()
{  return new cEqAppui_PProjInc_C2MPolyn7();
}

