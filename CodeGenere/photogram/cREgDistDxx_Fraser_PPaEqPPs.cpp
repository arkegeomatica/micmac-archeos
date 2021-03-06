// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cREgDistDxx_Fraser_PPaEqPPs.h"


cREgDistDxx_Fraser_PPaEqPPs::cREgDistDxx_Fraser_PPaEqPPs():
    cElCompiledFonc(2)
{
   AddIntRef (cIncIntervale("Intr",0,12));
   Close(false);
}



void cREgDistDxx_Fraser_PPaEqPPs::ComputeVal()
{
   double tmp0_ = mCompCoord[1];
   double tmp1_ = mLocRegDistuu1_x - tmp0_;
   double tmp2_ = mCompCoord[2];
   double tmp3_ = mLocRegDistuu1_y - tmp2_;
   double tmp4_ = (tmp1_) * (tmp1_);
   double tmp5_ = (tmp3_) * (tmp3_);
   double tmp6_ = tmp4_ + tmp5_;
   double tmp7_ = (tmp6_) * (tmp6_);
   double tmp8_ = tmp7_ * (tmp6_);
   double tmp9_ = tmp8_ * (tmp6_);
   double tmp10_ = mCompCoord[3];
   double tmp11_ = mLocRegDistuu2_x - tmp0_;
   double tmp12_ = mLocRegDistuu2_y - tmp2_;
   double tmp13_ = mCompCoord[4];
   double tmp14_ = (tmp11_) * (tmp11_);
   double tmp15_ = (tmp12_) * (tmp12_);
   double tmp16_ = tmp14_ + tmp15_;
   double tmp17_ = mCompCoord[5];
   double tmp18_ = (tmp16_) * (tmp16_);
   double tmp19_ = mCompCoord[6];
   double tmp20_ = tmp18_ * (tmp16_);
   double tmp21_ = mCompCoord[7];
   double tmp22_ = tmp20_ * (tmp16_);
   double tmp23_ = mCompCoord[8];
   double tmp24_ = mCompCoord[9];
   double tmp25_ = mCompCoord[10];
   double tmp26_ = mCompCoord[11];
   double tmp27_ = mLocRegDistuu3_x - tmp0_;
   double tmp28_ = mLocRegDistuu3_y - tmp2_;
   double tmp29_ = (tmp27_) * (tmp27_);
   double tmp30_ = (tmp28_) * (tmp28_);
   double tmp31_ = tmp29_ + tmp30_;
   double tmp32_ = (tmp31_) * (tmp31_);
   double tmp33_ = tmp32_ * (tmp31_);
   double tmp34_ = tmp33_ * (tmp31_);
   double tmp35_ = tmp10_ * (tmp6_);
   double tmp36_ = tmp13_ * tmp7_;
   double tmp37_ = tmp35_ + tmp36_;
   double tmp38_ = tmp17_ * tmp8_;
   double tmp39_ = tmp37_ + tmp38_;
   double tmp40_ = tmp19_ * tmp9_;
   double tmp41_ = tmp39_ + tmp40_;
   double tmp42_ = tmp9_ * (tmp6_);
   double tmp43_ = tmp21_ * tmp42_;
   double tmp44_ = tmp41_ + tmp43_;
   double tmp45_ = (tmp1_) * (tmp3_);
   double tmp46_ = 2 * tmp45_;
   double tmp47_ = tmp10_ * (tmp16_);
   double tmp48_ = tmp13_ * tmp18_;
   double tmp49_ = tmp47_ + tmp48_;
   double tmp50_ = tmp17_ * tmp20_;
   double tmp51_ = tmp49_ + tmp50_;
   double tmp52_ = tmp19_ * tmp22_;
   double tmp53_ = tmp51_ + tmp52_;
   double tmp54_ = tmp22_ * (tmp16_);
   double tmp55_ = tmp21_ * tmp54_;
   double tmp56_ = tmp53_ + tmp55_;
   double tmp57_ = (tmp11_) * (tmp12_);
   double tmp58_ = 2 * tmp57_;
   double tmp59_ = tmp10_ * (tmp31_);
   double tmp60_ = tmp13_ * tmp32_;
   double tmp61_ = tmp59_ + tmp60_;
   double tmp62_ = tmp17_ * tmp33_;
   double tmp63_ = tmp61_ + tmp62_;
   double tmp64_ = tmp19_ * tmp34_;
   double tmp65_ = tmp63_ + tmp64_;
   double tmp66_ = tmp34_ * (tmp31_);
   double tmp67_ = tmp21_ * tmp66_;
   double tmp68_ = tmp65_ + tmp67_;
   double tmp69_ = (tmp27_) * (tmp28_);
   double tmp70_ = 2 * tmp69_;

  mVal[0] = (mLocRegDistuu1_x + (tmp1_) * (tmp44_) + (2 * tmp4_ + tmp6_) * tmp23_ + tmp46_ * tmp24_ + tmp25_ * (tmp1_) + tmp26_ * (tmp3_) + mLocRegDistuu2_x + (tmp11_) * (tmp56_) + (2 * tmp14_ + tmp16_) * tmp23_ + tmp58_ * tmp24_ + tmp25_ * (tmp11_) + tmp26_ * (tmp12_)) - (mLocRegDistuu3_x + (tmp27_) * (tmp68_) + (2 * tmp29_ + tmp31_) * tmp23_ + tmp70_ * tmp24_ + tmp25_ * (tmp27_) + tmp26_ * (tmp28_)) * 2.000000;

  mVal[1] = (mLocRegDistuu1_y + (tmp3_) * (tmp44_) + (2 * tmp5_ + tmp6_) * tmp24_ + tmp46_ * tmp23_ + mLocRegDistuu2_y + (tmp12_) * (tmp56_) + (2 * tmp15_ + tmp16_) * tmp24_ + tmp58_ * tmp23_) - (mLocRegDistuu3_y + (tmp28_) * (tmp68_) + (2 * tmp30_ + tmp31_) * tmp24_ + tmp70_ * tmp23_) * 2.000000;

}


void cREgDistDxx_Fraser_PPaEqPPs::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[1];
   double tmp1_ = mLocRegDistuu1_x - tmp0_;
   double tmp2_ = mCompCoord[2];
   double tmp3_ = mLocRegDistuu1_y - tmp2_;
   double tmp4_ = (tmp1_) * (tmp1_);
   double tmp5_ = (tmp3_) * (tmp3_);
   double tmp6_ = tmp4_ + tmp5_;
   double tmp7_ = (tmp6_) * (tmp6_);
   double tmp8_ = tmp7_ * (tmp6_);
   double tmp9_ = tmp8_ * (tmp6_);
   double tmp10_ = mCompCoord[3];
   double tmp11_ = mLocRegDistuu2_x - tmp0_;
   double tmp12_ = mLocRegDistuu2_y - tmp2_;
   double tmp13_ = mCompCoord[4];
   double tmp14_ = (tmp11_) * (tmp11_);
   double tmp15_ = (tmp12_) * (tmp12_);
   double tmp16_ = tmp14_ + tmp15_;
   double tmp17_ = mCompCoord[5];
   double tmp18_ = (tmp16_) * (tmp16_);
   double tmp19_ = mCompCoord[6];
   double tmp20_ = tmp18_ * (tmp16_);
   double tmp21_ = mCompCoord[7];
   double tmp22_ = tmp20_ * (tmp16_);
   double tmp23_ = mCompCoord[8];
   double tmp24_ = mCompCoord[9];
   double tmp25_ = mCompCoord[10];
   double tmp26_ = mCompCoord[11];
   double tmp27_ = mLocRegDistuu3_x - tmp0_;
   double tmp28_ = mLocRegDistuu3_y - tmp2_;
   double tmp29_ = (tmp27_) * (tmp27_);
   double tmp30_ = (tmp28_) * (tmp28_);
   double tmp31_ = tmp29_ + tmp30_;
   double tmp32_ = (tmp31_) * (tmp31_);
   double tmp33_ = tmp32_ * (tmp31_);
   double tmp34_ = tmp33_ * (tmp31_);
   double tmp35_ = tmp10_ * (tmp6_);
   double tmp36_ = tmp13_ * tmp7_;
   double tmp37_ = tmp35_ + tmp36_;
   double tmp38_ = tmp17_ * tmp8_;
   double tmp39_ = tmp37_ + tmp38_;
   double tmp40_ = tmp19_ * tmp9_;
   double tmp41_ = tmp39_ + tmp40_;
   double tmp42_ = tmp9_ * (tmp6_);
   double tmp43_ = tmp21_ * tmp42_;
   double tmp44_ = tmp41_ + tmp43_;
   double tmp45_ = -(1);
   double tmp46_ = tmp45_ * (tmp1_);
   double tmp47_ = tmp46_ + tmp46_;
   double tmp48_ = (tmp47_) * (tmp6_);
   double tmp49_ = tmp48_ + tmp48_;
   double tmp50_ = (tmp49_) * (tmp6_);
   double tmp51_ = (tmp47_) * tmp7_;
   double tmp52_ = tmp50_ + tmp51_;
   double tmp53_ = (tmp52_) * (tmp6_);
   double tmp54_ = (tmp47_) * tmp8_;
   double tmp55_ = tmp53_ + tmp54_;
   double tmp56_ = tmp10_ * (tmp16_);
   double tmp57_ = tmp13_ * tmp18_;
   double tmp58_ = tmp56_ + tmp57_;
   double tmp59_ = tmp17_ * tmp20_;
   double tmp60_ = tmp58_ + tmp59_;
   double tmp61_ = tmp19_ * tmp22_;
   double tmp62_ = tmp60_ + tmp61_;
   double tmp63_ = tmp22_ * (tmp16_);
   double tmp64_ = tmp21_ * tmp63_;
   double tmp65_ = tmp62_ + tmp64_;
   double tmp66_ = tmp45_ * (tmp11_);
   double tmp67_ = tmp66_ + tmp66_;
   double tmp68_ = (tmp67_) * (tmp16_);
   double tmp69_ = tmp68_ + tmp68_;
   double tmp70_ = (tmp69_) * (tmp16_);
   double tmp71_ = (tmp67_) * tmp18_;
   double tmp72_ = tmp70_ + tmp71_;
   double tmp73_ = (tmp72_) * (tmp16_);
   double tmp74_ = (tmp67_) * tmp20_;
   double tmp75_ = tmp73_ + tmp74_;
   double tmp76_ = tmp45_ * tmp25_;
   double tmp77_ = tmp10_ * (tmp31_);
   double tmp78_ = tmp13_ * tmp32_;
   double tmp79_ = tmp77_ + tmp78_;
   double tmp80_ = tmp17_ * tmp33_;
   double tmp81_ = tmp79_ + tmp80_;
   double tmp82_ = tmp19_ * tmp34_;
   double tmp83_ = tmp81_ + tmp82_;
   double tmp84_ = tmp34_ * (tmp31_);
   double tmp85_ = tmp21_ * tmp84_;
   double tmp86_ = tmp83_ + tmp85_;
   double tmp87_ = tmp45_ * (tmp27_);
   double tmp88_ = tmp87_ + tmp87_;
   double tmp89_ = (tmp88_) * (tmp31_);
   double tmp90_ = tmp89_ + tmp89_;
   double tmp91_ = (tmp90_) * (tmp31_);
   double tmp92_ = (tmp88_) * tmp32_;
   double tmp93_ = tmp91_ + tmp92_;
   double tmp94_ = (tmp93_) * (tmp31_);
   double tmp95_ = (tmp88_) * tmp33_;
   double tmp96_ = tmp94_ + tmp95_;
   double tmp97_ = tmp45_ * (tmp3_);
   double tmp98_ = tmp97_ + tmp97_;
   double tmp99_ = (tmp98_) * (tmp6_);
   double tmp100_ = tmp99_ + tmp99_;
   double tmp101_ = (tmp100_) * (tmp6_);
   double tmp102_ = (tmp98_) * tmp7_;
   double tmp103_ = tmp101_ + tmp102_;
   double tmp104_ = (tmp103_) * (tmp6_);
   double tmp105_ = (tmp98_) * tmp8_;
   double tmp106_ = tmp104_ + tmp105_;
   double tmp107_ = tmp45_ * (tmp12_);
   double tmp108_ = tmp107_ + tmp107_;
   double tmp109_ = (tmp108_) * (tmp16_);
   double tmp110_ = tmp109_ + tmp109_;
   double tmp111_ = (tmp110_) * (tmp16_);
   double tmp112_ = (tmp108_) * tmp18_;
   double tmp113_ = tmp111_ + tmp112_;
   double tmp114_ = (tmp113_) * (tmp16_);
   double tmp115_ = (tmp108_) * tmp20_;
   double tmp116_ = tmp114_ + tmp115_;
   double tmp117_ = tmp45_ * tmp26_;
   double tmp118_ = tmp45_ * (tmp28_);
   double tmp119_ = tmp118_ + tmp118_;
   double tmp120_ = (tmp119_) * (tmp31_);
   double tmp121_ = tmp120_ + tmp120_;
   double tmp122_ = (tmp121_) * (tmp31_);
   double tmp123_ = (tmp119_) * tmp32_;
   double tmp124_ = tmp122_ + tmp123_;
   double tmp125_ = (tmp124_) * (tmp31_);
   double tmp126_ = (tmp119_) * tmp33_;
   double tmp127_ = tmp125_ + tmp126_;
   double tmp128_ = 2 * tmp4_;
   double tmp129_ = tmp128_ + tmp6_;
   double tmp130_ = 2 * tmp14_;
   double tmp131_ = tmp130_ + tmp16_;
   double tmp132_ = 2 * tmp29_;
   double tmp133_ = tmp132_ + tmp31_;
   double tmp134_ = (tmp1_) * (tmp3_);
   double tmp135_ = 2 * tmp134_;
   double tmp136_ = (tmp11_) * (tmp12_);
   double tmp137_ = 2 * tmp136_;
   double tmp138_ = (tmp27_) * (tmp28_);
   double tmp139_ = 2 * tmp138_;
   double tmp140_ = (tmp47_) * tmp10_;
   double tmp141_ = (tmp49_) * tmp13_;
   double tmp142_ = tmp140_ + tmp141_;
   double tmp143_ = (tmp52_) * tmp17_;
   double tmp144_ = tmp142_ + tmp143_;
   double tmp145_ = (tmp55_) * tmp19_;
   double tmp146_ = tmp144_ + tmp145_;
   double tmp147_ = (tmp55_) * (tmp6_);
   double tmp148_ = (tmp47_) * tmp9_;
   double tmp149_ = tmp147_ + tmp148_;
   double tmp150_ = (tmp149_) * tmp21_;
   double tmp151_ = tmp146_ + tmp150_;
   double tmp152_ = tmp97_ * 2;
   double tmp153_ = (tmp67_) * tmp10_;
   double tmp154_ = (tmp69_) * tmp13_;
   double tmp155_ = tmp153_ + tmp154_;
   double tmp156_ = (tmp72_) * tmp17_;
   double tmp157_ = tmp155_ + tmp156_;
   double tmp158_ = (tmp75_) * tmp19_;
   double tmp159_ = tmp157_ + tmp158_;
   double tmp160_ = (tmp75_) * (tmp16_);
   double tmp161_ = (tmp67_) * tmp22_;
   double tmp162_ = tmp160_ + tmp161_;
   double tmp163_ = (tmp162_) * tmp21_;
   double tmp164_ = tmp159_ + tmp163_;
   double tmp165_ = tmp107_ * 2;
   double tmp166_ = (tmp88_) * tmp10_;
   double tmp167_ = (tmp90_) * tmp13_;
   double tmp168_ = tmp166_ + tmp167_;
   double tmp169_ = (tmp93_) * tmp17_;
   double tmp170_ = tmp168_ + tmp169_;
   double tmp171_ = (tmp96_) * tmp19_;
   double tmp172_ = tmp170_ + tmp171_;
   double tmp173_ = (tmp96_) * (tmp31_);
   double tmp174_ = (tmp88_) * tmp34_;
   double tmp175_ = tmp173_ + tmp174_;
   double tmp176_ = (tmp175_) * tmp21_;
   double tmp177_ = tmp172_ + tmp176_;
   double tmp178_ = tmp118_ * 2;
   double tmp179_ = tmp45_ * (tmp44_);
   double tmp180_ = (tmp98_) * tmp10_;
   double tmp181_ = (tmp100_) * tmp13_;
   double tmp182_ = tmp180_ + tmp181_;
   double tmp183_ = (tmp103_) * tmp17_;
   double tmp184_ = tmp182_ + tmp183_;
   double tmp185_ = (tmp106_) * tmp19_;
   double tmp186_ = tmp184_ + tmp185_;
   double tmp187_ = (tmp106_) * (tmp6_);
   double tmp188_ = (tmp98_) * tmp9_;
   double tmp189_ = tmp187_ + tmp188_;
   double tmp190_ = (tmp189_) * tmp21_;
   double tmp191_ = tmp186_ + tmp190_;
   double tmp192_ = tmp46_ * 2;
   double tmp193_ = tmp45_ * (tmp65_);
   double tmp194_ = (tmp108_) * tmp10_;
   double tmp195_ = (tmp110_) * tmp13_;
   double tmp196_ = tmp194_ + tmp195_;
   double tmp197_ = (tmp113_) * tmp17_;
   double tmp198_ = tmp196_ + tmp197_;
   double tmp199_ = (tmp116_) * tmp19_;
   double tmp200_ = tmp198_ + tmp199_;
   double tmp201_ = (tmp116_) * (tmp16_);
   double tmp202_ = (tmp108_) * tmp22_;
   double tmp203_ = tmp201_ + tmp202_;
   double tmp204_ = (tmp203_) * tmp21_;
   double tmp205_ = tmp200_ + tmp204_;
   double tmp206_ = tmp66_ * 2;
   double tmp207_ = tmp45_ * (tmp86_);
   double tmp208_ = (tmp119_) * tmp10_;
   double tmp209_ = (tmp121_) * tmp13_;
   double tmp210_ = tmp208_ + tmp209_;
   double tmp211_ = (tmp124_) * tmp17_;
   double tmp212_ = tmp210_ + tmp211_;
   double tmp213_ = (tmp127_) * tmp19_;
   double tmp214_ = tmp212_ + tmp213_;
   double tmp215_ = (tmp127_) * (tmp31_);
   double tmp216_ = (tmp119_) * tmp34_;
   double tmp217_ = tmp215_ + tmp216_;
   double tmp218_ = (tmp217_) * tmp21_;
   double tmp219_ = tmp214_ + tmp218_;
   double tmp220_ = tmp87_ * 2;
   double tmp221_ = tmp135_ + tmp137_;
   double tmp222_ = tmp139_ * 2.000000;
   double tmp223_ = (tmp221_) - tmp222_;
   double tmp224_ = 2 * tmp5_;
   double tmp225_ = tmp224_ + tmp6_;
   double tmp226_ = 2 * tmp15_;
   double tmp227_ = tmp226_ + tmp16_;
   double tmp228_ = 2 * tmp30_;
   double tmp229_ = tmp228_ + tmp31_;

  mVal[0] = (mLocRegDistuu1_x + (tmp1_) * (tmp44_) + (tmp129_) * tmp23_ + tmp135_ * tmp24_ + tmp25_ * (tmp1_) + tmp26_ * (tmp3_) + mLocRegDistuu2_x + (tmp11_) * (tmp65_) + (tmp131_) * tmp23_ + tmp137_ * tmp24_ + tmp25_ * (tmp11_) + tmp26_ * (tmp12_)) - (mLocRegDistuu3_x + (tmp27_) * (tmp86_) + (tmp133_) * tmp23_ + tmp139_ * tmp24_ + tmp25_ * (tmp27_) + tmp26_ * (tmp28_)) * 2.000000;

  mCompDer[0][0] = 0;
  mCompDer[0][1] = (tmp179_ + (tmp151_) * (tmp1_) + ((tmp47_) * 2 + tmp47_) * tmp23_ + tmp152_ * tmp24_ + tmp76_ + tmp193_ + (tmp164_) * (tmp11_) + ((tmp67_) * 2 + tmp67_) * tmp23_ + tmp165_ * tmp24_ + tmp76_) - (tmp207_ + (tmp177_) * (tmp27_) + ((tmp88_) * 2 + tmp88_) * tmp23_ + tmp178_ * tmp24_ + tmp76_) * 2.000000;
  mCompDer[0][2] = ((tmp191_) * (tmp1_) + (tmp98_) * tmp23_ + tmp192_ * tmp24_ + tmp117_ + (tmp205_) * (tmp11_) + (tmp108_) * tmp23_ + tmp206_ * tmp24_ + tmp117_) - ((tmp219_) * (tmp27_) + (tmp119_) * tmp23_ + tmp220_ * tmp24_ + tmp117_) * 2.000000;
  mCompDer[0][3] = ((tmp6_) * (tmp1_) + (tmp16_) * (tmp11_)) - (tmp31_) * (tmp27_) * 2.000000;
  mCompDer[0][4] = (tmp7_ * (tmp1_) + tmp18_ * (tmp11_)) - tmp32_ * (tmp27_) * 2.000000;
  mCompDer[0][5] = (tmp8_ * (tmp1_) + tmp20_ * (tmp11_)) - tmp33_ * (tmp27_) * 2.000000;
  mCompDer[0][6] = (tmp9_ * (tmp1_) + tmp22_ * (tmp11_)) - tmp34_ * (tmp27_) * 2.000000;
  mCompDer[0][7] = (tmp42_ * (tmp1_) + tmp63_ * (tmp11_)) - tmp84_ * (tmp27_) * 2.000000;
  mCompDer[0][8] = (tmp129_ + tmp131_) - (tmp133_) * 2.000000;
  mCompDer[0][9] = tmp223_;
  mCompDer[0][10] = (tmp1_ + tmp11_) - (tmp27_) * 2.000000;
  mCompDer[0][11] = (tmp3_ + tmp12_) - (tmp28_) * 2.000000;
  mVal[1] = (mLocRegDistuu1_y + (tmp3_) * (tmp44_) + (tmp225_) * tmp24_ + tmp135_ * tmp23_ + mLocRegDistuu2_y + (tmp12_) * (tmp65_) + (tmp227_) * tmp24_ + tmp137_ * tmp23_) - (mLocRegDistuu3_y + (tmp28_) * (tmp86_) + (tmp229_) * tmp24_ + tmp139_ * tmp23_) * 2.000000;

  mCompDer[1][0] = 0;
  mCompDer[1][1] = ((tmp151_) * (tmp3_) + (tmp47_) * tmp24_ + tmp152_ * tmp23_ + (tmp164_) * (tmp12_) + (tmp67_) * tmp24_ + tmp165_ * tmp23_) - ((tmp177_) * (tmp28_) + (tmp88_) * tmp24_ + tmp178_ * tmp23_) * 2.000000;
  mCompDer[1][2] = (tmp179_ + (tmp191_) * (tmp3_) + ((tmp98_) * 2 + tmp98_) * tmp24_ + tmp192_ * tmp23_ + tmp193_ + (tmp205_) * (tmp12_) + ((tmp108_) * 2 + tmp108_) * tmp24_ + tmp206_ * tmp23_) - (tmp207_ + (tmp219_) * (tmp28_) + ((tmp119_) * 2 + tmp119_) * tmp24_ + tmp220_ * tmp23_) * 2.000000;
  mCompDer[1][3] = ((tmp6_) * (tmp3_) + (tmp16_) * (tmp12_)) - (tmp31_) * (tmp28_) * 2.000000;
  mCompDer[1][4] = (tmp7_ * (tmp3_) + tmp18_ * (tmp12_)) - tmp32_ * (tmp28_) * 2.000000;
  mCompDer[1][5] = (tmp8_ * (tmp3_) + tmp20_ * (tmp12_)) - tmp33_ * (tmp28_) * 2.000000;
  mCompDer[1][6] = (tmp9_ * (tmp3_) + tmp22_ * (tmp12_)) - tmp34_ * (tmp28_) * 2.000000;
  mCompDer[1][7] = (tmp42_ * (tmp3_) + tmp63_ * (tmp12_)) - tmp84_ * (tmp28_) * 2.000000;
  mCompDer[1][8] = tmp223_;
  mCompDer[1][9] = (tmp225_ + tmp227_) - (tmp229_) * 2.000000;
  mCompDer[1][10] = 0;
  mCompDer[1][11] = 0;
}


void cREgDistDxx_Fraser_PPaEqPPs::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cREgDistDxx_Fraser_PPaEqPPs Has no Der Sec");
}

void cREgDistDxx_Fraser_PPaEqPPs::SetRegDistuu1_x(double aVal){ mLocRegDistuu1_x = aVal;}
void cREgDistDxx_Fraser_PPaEqPPs::SetRegDistuu1_y(double aVal){ mLocRegDistuu1_y = aVal;}
void cREgDistDxx_Fraser_PPaEqPPs::SetRegDistuu2_x(double aVal){ mLocRegDistuu2_x = aVal;}
void cREgDistDxx_Fraser_PPaEqPPs::SetRegDistuu2_y(double aVal){ mLocRegDistuu2_y = aVal;}
void cREgDistDxx_Fraser_PPaEqPPs::SetRegDistuu3_x(double aVal){ mLocRegDistuu3_x = aVal;}
void cREgDistDxx_Fraser_PPaEqPPs::SetRegDistuu3_y(double aVal){ mLocRegDistuu3_y = aVal;}



double * cREgDistDxx_Fraser_PPaEqPPs::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "RegDistuu1_x") return & mLocRegDistuu1_x;
   if (aName == "RegDistuu1_y") return & mLocRegDistuu1_y;
   if (aName == "RegDistuu2_x") return & mLocRegDistuu2_x;
   if (aName == "RegDistuu2_y") return & mLocRegDistuu2_y;
   if (aName == "RegDistuu3_x") return & mLocRegDistuu3_x;
   if (aName == "RegDistuu3_y") return & mLocRegDistuu3_y;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cREgDistDxx_Fraser_PPaEqPPs::mTheAuto("cREgDistDxx_Fraser_PPaEqPPs",cREgDistDxx_Fraser_PPaEqPPs::Alloc);


cElCompiledFonc *  cREgDistDxx_Fraser_PPaEqPPs::Alloc()
{  return new cREgDistDxx_Fraser_PPaEqPPs();
}


