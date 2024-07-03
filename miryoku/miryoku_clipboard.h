// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#if defined (MIRYOKU_CLIPBOARD_FUN)
  #define U_RDO &kp K_AGAIN
  #define U_PST &kp K_PASTE
  #define U_CPY &kp K_COPY
  #define U_CUT &kp K_CUT
  #define U_UND &kp K_UNDO
#elif defined (MIRYOKU_CLIPBOARD_MAC)
  #define U_RDO &kp C_AC_REDO
  #define U_PST &kp C_AC_PASTE
  #define U_CPY &kp C_AC_COPY
  #define U_CUT &kp C_AC_CUT
  #define U_UND &kp C_AC_UNDO
#elif defined (MIRYOKU_CLIPBOARD_WIN)
  #define U_RDO &kp LC(Y)
  #define U_PST &kp LC(LS(V))
  #define U_CPY &kp LC(C)
  #define U_CUT &kp LC(X)
  #define U_UND &kp LC(Z)
#else
  #define U_RDO &kp K_AGAIN
  #define U_PST &kp LS(INS)
  #define U_CPY &kp LC(INS)
  #define U_CUT &kp LS(DEL)
  #define U_UND &kp K_UNDO
#endif
