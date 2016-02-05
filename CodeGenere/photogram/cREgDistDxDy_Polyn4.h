// File Automatically generated by eLiSe
#include "StdAfx.h"


class cREgDistDxDy_Polyn4: public cElCompiledFonc
{
   public :

      cREgDistDxDy_Polyn4();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetPolyn4_State_0_0(double);
      void SetPolyn4_State_1_0(double);
      void SetPolyn4_State_2_0(double);
      void SetRegDistxy1_x(double);
      void SetRegDistxy1_y(double);
      void SetRegDistxy2_x(double);
      void SetRegDistxy2_y(double);
      void SetRegDistxy3_x(double);
      void SetRegDistxy3_y(double);
      void SetRegDistxy4_x(double);
      void SetRegDistxy4_y(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocPolyn4_State_0_0;
      double mLocPolyn4_State_1_0;
      double mLocPolyn4_State_2_0;
      double mLocRegDistxy1_x;
      double mLocRegDistxy1_y;
      double mLocRegDistxy2_x;
      double mLocRegDistxy2_y;
      double mLocRegDistxy3_x;
      double mLocRegDistxy3_y;
      double mLocRegDistxy4_x;
      double mLocRegDistxy4_y;
};
