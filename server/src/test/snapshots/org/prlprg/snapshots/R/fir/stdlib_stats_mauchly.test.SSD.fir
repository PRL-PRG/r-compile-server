fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner281323703;
    st `mauchly.test.SSD` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner281323703(object, Sigma, T, M, X, idata, `...`) {
  (reg object:*, reg Sigma:*, reg T:*, reg M:*, reg X:*, reg idata:*, reg ddd:dots) -+> V { var object:*, var Sigma:*, reg Sigma_isMissing:L, reg Sigma_orDefault:*, reg diag:cls, reg p:*, reg p1:V, reg p2:p(V +), reg r1:V, reg p3:p(V +), var T:*, reg T_isMissing:L, reg T_orDefault:*, reg Thin_row:cls, reg Proj:cls, reg M1:*, reg M2:V, reg p4:p(V +), reg r4:V, reg Proj1:cls, reg X1:*, reg X2:V, reg p5:p(V +), reg r6:V, reg r7:V, reg p6:p(V +), reg r9:V, reg p7:p(V +), var M:*, reg M_isMissing:L, reg M_orDefault:*, reg diag1:cls, reg p8:*, reg p9:V, reg p10:p(V +), reg r12:V, reg p11:p(V +), var X:*, reg X_isMissing:L, reg X_orDefault:*, reg __:cls, reg r14:V, reg p12:p(V +), var idata:*, reg idata_isMissing:L, reg idata_orDefault:*, reg data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg p13:*, reg p14:V, reg r18:I, reg p15:p(V +), reg r20:V, reg p16:p(V +), var `...`:dots?, reg ncol:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg p17:p(V +), reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg missing1:cls, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg missing2:cls, reg r33:V, reg c1:L, reg X3:*, reg X4:V, reg M3:*, reg M4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg M5:*, reg M6:V, reg inherits:cls, reg r36:V, reg c2:L, reg model_matrix:cls, reg M7:*, reg M8:V, reg p18:p(V +), reg idata1:*, reg idata2:V, reg p19:p(V +), reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg X5:*, reg X6:V, reg inherits1:cls, reg r43:V, reg c3:L, reg model_matrix1:cls, reg X7:*, reg X8:V, reg p20:p(V +), reg idata3:*, reg idata4:V, reg p21:p(V +), reg r46:V, reg Rank:cls, reg cbind:cls, reg M9:*, reg M10:V, reg p22:p(V +), reg X9:*, reg X10:V, reg p23:p(V +), reg r50:V, reg p24:p(V +), reg r52:V, reg Rank1:cls, reg M11:*, reg M12:V, reg p25:p(V +), reg r54:V, reg r55:V, reg c4:L, reg stop:cls, reg r56:V, reg r57:V, reg T1:*, reg T2:V, reg Sigma1:*, reg Sigma2:V, reg ___:cls, reg r59:V, reg t:cls, reg T3:*, reg T4:V, reg p26:p(V +), reg r61:V, reg ___1:cls, reg r62:V, reg T5:*, reg T6:V, reg object5:*, reg object6:V, reg c5:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r63:V, reg ___2:cls, reg r64:V, reg t1:cls, reg T7:*, reg T8:V, reg p27:p(V +), reg r66:V, reg ___3:cls, reg r67:V, reg nrow:cls, reg T9:*, reg T10:V, reg p28:p(V +), reg r69:V, reg solve:cls, reg Psi:*, reg Psi1:V, reg p29:p(V +), reg B:*, reg B1:V, reg p30:p(V +), reg r72:V, reg object9:*, reg object10:V, reg c6:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r73:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r74:V, reg r75:V, reg det:cls, reg U:*, reg U1:V, reg p31:p(V +), reg r77:V, reg r78:V, reg pp:*, reg pp1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r81:V, reg r82:V, reg pp4:V, reg r83:V, reg Tr:cls, reg U2:*, reg U3:V, reg pp5:*, reg pp6:V, reg r84:V, reg p32:p(V +), reg r86:V, reg r87:V, reg r88:V, reg r89:V, reg pp7:*, reg pp8:V, reg r90:V, reg r91:V, reg pp9:*, reg pp10:V, reg r92:V, reg r93:V, reg pp11:*, reg pp12:V, reg r94:V, reg n:*, reg n1:V, reg r95:V, reg r96:V, reg r97:V, reg pp13:*, reg pp14:V, reg r98:V, reg pp15:*, reg pp16:V, reg r99:V, reg r100:V, reg pp17:*, reg pp18:V, reg r101:V, reg r102:V, reg pp19:*, reg pp20:V, reg r103:V, reg r104:V, reg pp21:*, reg pp22:V, reg r105:V, reg r106:V, reg r107:V, reg p33:*, reg p34:V, reg r108:V, reg r109:V, reg r110:V, reg r111:V, reg n2:*, reg n3:V, reg pp23:*, reg pp24:V, reg r112:V, reg rho:*, reg rho1:V, reg r113:V, reg r114:V, reg r115:V, reg r116:V, reg n4:*, reg n5:V, reg r117:V, reg rho2:*, reg rho3:V, reg r118:V, reg logW:*, reg logW1:V, reg r119:V, reg pp25:*, reg pp26:V, reg pp27:*, reg pp28:V, reg r120:V, reg r121:V, reg r122:V, reg r123:V, reg pchisq:cls, reg z:*, reg z1:V, reg p35:p(V +), reg f:*, reg f1:V, reg p36:p(V +), reg r126:V, reg pchisq1:cls, reg z2:*, reg z3:V, reg p37:p(V +), reg f2:*, reg f3:V, reg r128:V, reg p38:p(V +), reg r130:V, reg Pr1:*, reg Pr2:V, reg w2:*, reg w3:V, reg Pr3:*, reg Pr4:V, reg Pr5:*, reg Pr6:V, reg r131:V, reg r132:V, reg r133:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r134:V, reg r135:V, reg missing3:cls, reg r136:V, reg r137:V, reg c7:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r138:V, reg r139:V, reg apply:cls, reg format:cls, reg T11:*, reg T12:V, reg p39:p(V +), reg r141:V, reg p40:p(V +), reg paste:*, reg paste1:V, reg p41:p(V +), reg r144:V, reg c8:cls, reg r145:V, reg r146:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r147:V, reg Xmis:*, reg Xmis1:V, reg r148:V, reg c9:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r149:V, reg r150:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r151:V, reg r152:V, reg orig_X:*, reg orig_X1:V, reg is_matrix:cls, reg r153:V, reg c10:L, reg apply1:cls, reg format1:cls, reg X11:*, reg X12:V, reg p42:p(V +), reg r155:V, reg p43:p(V +), reg paste2:*, reg paste3:V, reg p44:p(V +), reg r158:V, reg r159:V, reg deparse:cls, reg formula:cls, reg orig_X2:*, reg orig_X3:V, reg p45:p(V +), reg r161:V, reg p46:p(V +), reg r163:V, reg Mmis:*, reg Mmis1:V, reg r164:V, reg c11:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r165:V, reg r166:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r167:V, reg r168:V, reg orig_M:*, reg orig_M1:V, reg is_matrix1:cls, reg r169:V, reg c12:L, reg apply2:cls, reg format2:cls, reg M13:*, reg M14:V, reg p47:p(V +), reg r171:V, reg p48:p(V +), reg paste4:*, reg paste5:V, reg p49:p(V +), reg r174:V, reg r175:V, reg deparse1:cls, reg formula1:cls, reg orig_M2:*, reg orig_M3:V, reg p50:p(V +), reg r177:V, reg p51:p(V +), reg r179:V, reg c13:cls, reg r180:V, reg r181:V, reg c14:cls, reg r182:V, reg r183:V, reg c15:cls, reg r184:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r185:V, reg r186:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r187:V, reg r188:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r189:V, reg r190:V, reg logW2:*, reg logW3:V, reg r191:V, reg c16:cls, reg r192:V, reg pval:*, reg pval1:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r193:V, reg r194:V, reg transformnote:*, reg transformnote1:V, reg c17:cls, reg r195:V, reg paste6:cls, reg deparse2:cls, reg object13:*, reg object14:V, reg c18:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r196:V, reg p52:p(V +), reg r198:V, reg p53:p(V +), reg r200:V, reg list:cls, reg r201:V, reg l:*, reg class__:cls, reg r202:V, reg retval:*, reg retval1:V |
    mkenv;
    st object = object;
    Sigma_isMissing = missing.0(Sigma);
    if Sigma_isMissing then L0() else L1(Sigma);
  L0():
    p3 = prom<V +>{
      diag = ldf diag;
      p2 = prom<V +>{
        p = ld p;
        p1 = force? p;
        checkMissing(p1);
        return p1;
      };
      r1 = dyn diag[nrow](p2);
      return r1;
    };
    goto L1(p3);
  L1(Sigma_orDefault):
    st Sigma = Sigma_orDefault;
    T_isMissing = missing.0(T);
    if T_isMissing then L2() else L3(T);
  L2():
    p7 = prom<V +>{
      Thin_row = ldf `Thin.row`;
      p6 = prom<V +>{
        Proj = ldf Proj;
        p4 = prom<V +>{
          M1 = ld M;
          M2 = force? M1;
          checkMissing(M2);
          return M2;
        };
        r4 = dyn Proj(p4);
        Proj1 = ldf Proj;
        p5 = prom<V +>{
          X1 = ld X;
          X2 = force? X1;
          checkMissing(X2);
          return X2;
        };
        r6 = dyn Proj1(p5);
        r7 = `-`(r4, r6);
        return r7;
      };
      r9 = dyn Thin_row(p6);
      return r9;
    };
    goto L3(p7);
  L3(T_orDefault):
    st T = T_orDefault;
    M_isMissing = missing.0(M);
    if M_isMissing then L4() else L5(M);
  L4():
    p11 = prom<V +>{
      diag1 = ldf diag;
      p10 = prom<V +>{
        p8 = ld p;
        p9 = force? p8;
        checkMissing(p9);
        return p9;
      };
      r12 = dyn diag1[nrow](p10);
      return r12;
    };
    goto L5(p11);
  L5(M_orDefault):
    st M = M_orDefault;
    X_isMissing = missing.0(X);
    if X_isMissing then L6() else L7(X);
  L6():
    p12 = prom<V +>{
      __ = ldf `~` in base;
      r14 = dyn __(0.0);
      return r14;
    };
    goto L7(p12);
  L7(X_orDefault):
    st X = X_orDefault;
    idata_isMissing = missing.0(idata);
    if idata_isMissing then L8() else L9(idata);
  L8():
    p16 = prom<V +>{
      data_frame = ldf `data.frame`;
      p15 = prom<V +>{
        sym = ldf seq_len;
        base = ldf seq_len in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r17):
        return r17;
      L1():
        p13 = ld p;
        p14 = force? p13;
        checkMissing(p14);
        r18 = seq_len(p14);
        goto L0(r18);
      L2():
        r16 = dyn base(<sym p>);
        goto L0(r16);
      };
      r20 = dyn data_frame[index](p15);
      return r20;
    };
    goto L9(p16);
  L9(idata_orDefault):
    st idata = idata_orDefault;
    st `...` = ddd;
    ncol = ldf ncol;
    check L45() else D0();
  D0():
    deopt 1 [];
  L45():
    p17 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r22 = `$`(object4, <sym SSD>);
      goto L0(r22);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r24 = dyn ncol(p17);
    check L46() else D1();
  D1():
    deopt 3 [r24];
  L46():
    st p = r24;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L10(r26):
    st Xmis = r26;
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L49() else L50();
  L47():
    missing = ldf missing in base;
    r27 = dyn missing(<sym X>);
    goto L10(r27);
  L48():
    r25 = dyn base1(<sym X>);
    goto L10(r25);
  L11(r29):
    st Mmis = r29;
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L49():
    missing1 = ldf missing in base;
    r30 = dyn missing1(<sym M>);
    goto L11(r30);
  L50():
    r28 = dyn base2(<sym M>);
    goto L11(r28);
  L12(r32):
    c1 = `as.logical`(r32);
    if c1 then L53() else L13();
  L51():
    missing2 = ldf missing in base;
    r33 = dyn missing2(<sym T>);
    goto L12(r33);
  L52():
    r31 = dyn base3(<sym T>);
    goto L12(r31);
  L13():
    goto L22();
  L22():
    T1 = ld T;
    check L81() else D18();
  L53():
    X3 = ld X;
    check L54() else D2();
  D2():
    deopt 16 [X3];
  D18():
    deopt 72 [T1];
  L54():
    X4 = force? X3;
    checkMissing(X4);
    st `orig.X` = X4;
    M3 = ld M;
    check L55() else D3();
  L81():
    T2 = force? T1;
    checkMissing(T2);
    Sigma1 = ld Sigma;
    check L82() else D19();
  D3():
    deopt 19 [M3];
  D19():
    deopt 74 [Sigma1];
  L55():
    M4 = force? M3;
    checkMissing(M4);
    st `orig.M` = M4;
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L82():
    Sigma2 = force? Sigma1;
    checkMissing(Sigma2);
    ___ = ldf `%*%` in base;
    r59 = dyn ___(T2, Sigma2);
    check L83() else D20();
  D20():
    deopt 77 [r59];
  L14(r35):
    c2 = `as.logical`(r35);
    if c2 then L60() else L15();
  L56():
    M5 = ld M;
    check L58() else D4();
  L57():
    r34 = dyn base4(<sym M>, "formula");
    goto L14(r34);
  L83():
    t = ldf t;
    check L84() else D21();
  D4():
    deopt 24 [M5];
  D21():
    deopt 79 [];
  L15():
    goto L16();
  L16():
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L58():
    M6 = force? M5;
    checkMissing(M6);
    inherits = ldf inherits in base;
    r36 = dyn inherits(M6, "formula", FALSE);
    check L59() else D5();
  L60():
    model_matrix = ldf `model.matrix`;
    check L61() else D6();
  L84():
    p26 = prom<V +>{
      T3 = ld T;
      T4 = force? T3;
      checkMissing(T4);
      return T4;
    };
    r61 = dyn t(p26);
    check L85() else D22();
  D5():
    deopt 29 [r36];
  D6():
    deopt 31 [];
  D22():
    deopt 81 [r61];
  L17(r42):
    c3 = `as.logical`(r42);
    if c3 then L68() else L18();
  L59():
    goto L14(r36);
  L61():
    p18 = prom<V +>{
      M7 = ld M;
      M8 = force? M7;
      checkMissing(M8);
      return M8;
    };
    p19 = prom<V +>{
      idata1 = ld idata;
      idata2 = force? idata1;
      checkMissing(idata2);
      return idata2;
    };
    r39 = dyn model_matrix(p18, p19);
    check L62() else D7();
  L64():
    X5 = ld X;
    check L66() else D8();
  L65():
    r41 = dyn base5(<sym X>, "formula");
    goto L17(r41);
  L85():
    ___1 = ldf `%*%` in base;
    r62 = dyn ___1(r59, r61);
    check L86() else D23();
  D7():
    deopt 34 [r39];
  D8():
    deopt 40 [X5];
  D23():
    deopt 83 [r62];
  L18():
    goto L19();
  L19():
    Rank = ldf Rank;
    check L72() else D12();
  L62():
    st M = r39;
    goto L16();
  L66():
    X6 = force? X5;
    checkMissing(X6);
    inherits1 = ldf inherits in base;
    r43 = dyn inherits1(X6, "formula", FALSE);
    check L67() else D9();
  L68():
    model_matrix1 = ldf `model.matrix`;
    check L69() else D10();
  L86():
    st Psi = r62;
    T5 = ld T;
    check L87() else D24();
  D9():
    deopt 45 [r43];
  D10():
    deopt 47 [];
  D12():
    deopt 55 [];
  D24():
    deopt 87 [T5];
  L67():
    goto L17(r43);
  L69():
    p20 = prom<V +>{
      X7 = ld X;
      X8 = force? X7;
      checkMissing(X8);
      return X8;
    };
    p21 = prom<V +>{
      idata3 = ld idata;
      idata4 = force? idata3;
      checkMissing(idata4);
      return idata4;
    };
    r46 = dyn model_matrix1(p20, p21);
    check L70() else D11();
  L72():
    p24 = prom<V +>{
      cbind = ldf cbind;
      p22 = prom<V +>{
        M9 = ld M;
        M10 = force? M9;
        checkMissing(M10);
        return M10;
      };
      p23 = prom<V +>{
        X9 = ld X;
        X10 = force? X9;
        checkMissing(X10);
        return X10;
      };
      r50 = dyn cbind(p22, p23);
      return r50;
    };
    r52 = dyn Rank(p24);
    check L73() else D13();
  L87():
    T6 = force? T5;
    checkMissing(T6);
    object5 = ld object;
    check L88() else D25();
  D11():
    deopt 50 [r46];
  D13():
    deopt 57 [r52];
  D25():
    deopt 89 [object5];
  L70():
    st X = r46;
    goto L19();
  L73():
    Rank1 = ldf Rank;
    check L74() else D14();
  L88():
    object6 = force? object5;
    checkMissing(object6);
    c5 = `is.object`(object6);
    if c5 then L90() else L91(object6);
  D14():
    deopt 58 [r52];
  L74():
    p25 = prom<V +>{
      M11 = ld M;
      M12 = force? M11;
      checkMissing(M12);
      return M12;
    };
    r54 = dyn Rank1(p25);
    check L75() else D15();
  L89(dx3):
    ___2 = ldf `%*%` in base;
    r64 = dyn ___2(T6, dx3);
    check L93() else D26();
  L90():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L92() else L91(dr2);
  L91(object8):
    r63 = `$`(object8, <sym SSD>);
    goto L89(r63);
  D15():
    deopt 60 [r52, r54];
  D26():
    deopt 93 [r64];
  L75():
    r55 = `!=`(r52, r54);
    c4 = `as.logical`(r55);
    if c4 then L76() else L20();
  L92():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L89(dx2);
  L93():
    t1 = ldf t;
    check L94() else D27();
  D27():
    deopt 95 [];
  L20():
    goto L21(NULL);
  L21(r57):
    goto L22();
  L76():
    stop = ldf stop;
    check L77() else D16();
  L94():
    p27 = prom<V +>{
      T7 = ld T;
      T8 = force? T7;
      checkMissing(T8);
      return T8;
    };
    r66 = dyn t1(p27);
    check L95() else D28();
  D16():
    deopt 63 [];
  D28():
    deopt 97 [r66];
  L77():
    r56 = dyn stop("X does not define a subspace of M");
    check L78() else D17();
  L95():
    ___3 = ldf `%*%` in base;
    r67 = dyn ___3(r64, r66);
    check L96() else D29();
  D17():
    deopt 65 [r56];
  D29():
    deopt 99 [r67];
  L78():
    goto L21(r56);
  L96():
    st B = r67;
    nrow = ldf nrow;
    check L97() else D30();
  D30():
    deopt 102 [];
  L97():
    p28 = prom<V +>{
      T9 = ld T;
      T10 = force? T9;
      checkMissing(T10);
      return T10;
    };
    r69 = dyn nrow(p28);
    check L98() else D31();
  D31():
    deopt 104 [r69];
  L98():
    st pp = r69;
    solve = ldf solve;
    check L99() else D32();
  D32():
    deopt 107 [];
  L99():
    p29 = prom<V +>{
      Psi = ld Psi;
      Psi1 = force? Psi;
      checkMissing(Psi1);
      return Psi1;
    };
    p30 = prom<V +>{
      B = ld B;
      B1 = force? B;
      checkMissing(B1);
      return B1;
    };
    r72 = dyn solve(p29, p30);
    check L100() else D33();
  D33():
    deopt 110 [r72];
  L100():
    st U = r72;
    object9 = ld object;
    check L101() else D34();
  D34():
    deopt 112 [object9];
  L101():
    object10 = force? object9;
    checkMissing(object10);
    c6 = `is.object`(object10);
    if c6 then L103() else L104(object10);
  L102(dx5):
    st n = dx5;
    sym6 = ldf log;
    base6 = ldf log in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L106() else L107();
  L103():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L105() else L104(dr4);
  L104(object12):
    r73 = `$`(object12, <sym df>);
    goto L102(r73);
  L23(r75):
    pp = ld pp;
    check L110() else D37();
  L105():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L102(dx4);
  L106():
    det = ldf det;
    check L108() else D35();
  L107():
    r74 = dyn base6(<lang det(U)>);
    goto L23(r74);
  D35():
    deopt 118 [];
  D37():
    deopt 121 [r75, pp];
  L108():
    p31 = prom<V +>{
      U = ld U;
      U1 = force? U;
      checkMissing(U1);
      return U1;
    };
    r77 = dyn det(p31);
    check L109() else D36();
  L110():
    pp1 = force? pp;
    checkMissing(pp1);
    sym7 = ldf log;
    base7 = ldf log in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L111() else L112();
  D36():
    deopt 120 [r77];
  L24(r82, pp4, r83):
    r88 = `*`(pp4, r83);
    r89 = `-`(r82, r88);
    st logW = r89;
    pp7 = ld pp;
    check L115() else D40();
  L109():
    r78 = log(r77, 2.718281828459045);
    goto L23(r78);
  L111():
    Tr = ldf Tr;
    check L113() else D38();
  L112():
    r81 = dyn base7(<lang Tr(`/`(U, pp))>);
    goto L24(r75, pp1, r81);
  D38():
    deopt 124 [r75, pp1];
  D40():
    deopt 133 [1.0, 2.0, pp7];
  L113():
    p32 = prom<V +>{
      U2 = ld U;
      U3 = force? U2;
      checkMissing(U3);
      pp5 = ld pp;
      pp6 = force? pp5;
      checkMissing(pp6);
      r84 = `/`(U3, pp6);
      return r84;
    };
    r86 = dyn Tr(p32);
    check L114() else D39();
  L115():
    pp8 = force? pp7;
    checkMissing(pp8);
    r90 = `^`(pp8, 2.0);
    r91 = `*`(2.0, r90);
    pp9 = ld pp;
    check L116() else D41();
  D39():
    deopt 126 [r75, pp1, r86];
  D41():
    deopt 137 [1.0, r91, pp9];
  L114():
    r87 = log(r86, 2.718281828459045);
    goto L24(r75, pp1, r87);
  L116():
    pp10 = force? pp9;
    checkMissing(pp10);
    r92 = `+`(r91, pp10);
    r93 = `+`(r92, 2.0);
    pp11 = ld pp;
    check L117() else D42();
  D42():
    deopt 142 [1.0, r93, 6.0, pp11];
  L117():
    pp12 = force? pp11;
    checkMissing(pp12);
    r94 = `*`(6.0, pp12);
    n = ld n;
    check L118() else D43();
  D43():
    deopt 144 [1.0, r93, r94, n];
  L118():
    n1 = force? n;
    checkMissing(n1);
    r95 = `*`(r94, n1);
    r96 = `/`(r93, r95);
    r97 = `-`(1.0, r96);
    st rho = r97;
    pp13 = ld pp;
    check L119() else D44();
  D44():
    deopt 150 [pp13];
  L119():
    pp14 = force? pp13;
    checkMissing(pp14);
    r98 = `+`(pp14, 2.0);
    pp15 = ld pp;
    check L120() else D45();
  D45():
    deopt 153 [r98, pp15];
  L120():
    pp16 = force? pp15;
    checkMissing(pp16);
    r99 = `-`(pp16, 1.0);
    r100 = `*`(r98, r99);
    pp17 = ld pp;
    check L121() else D46();
  D46():
    deopt 157 [r100, pp17];
  L121():
    pp18 = force? pp17;
    checkMissing(pp18);
    r101 = `-`(pp18, 2.0);
    r102 = `*`(r100, r101);
    pp19 = ld pp;
    check L122() else D47();
  D47():
    deopt 162 [r102, 2.0, pp19];
  L122():
    pp20 = force? pp19;
    checkMissing(pp20);
    r103 = `^`(pp20, 3.0);
    r104 = `*`(2.0, r103);
    pp21 = ld pp;
    check L123() else D48();
  D48():
    deopt 167 [r102, r104, 6.0, pp21];
  L123():
    pp22 = force? pp21;
    checkMissing(pp22);
    r105 = `^`(pp22, 2.0);
    r106 = `*`(6.0, r105);
    r107 = `+`(r104, r106);
    p33 = ld p;
    check L124() else D49();
  D49():
    deopt 173 [r102, r107, 3.0, p33];
  L124():
    p34 = force? p33;
    checkMissing(p34);
    r108 = `*`(3.0, p34);
    r109 = `+`(r107, r108);
    r110 = `+`(r109, 2.0);
    r111 = `*`(r102, r110);
    n2 = ld n;
    check L125() else D50();
  D50():
    deopt 180 [r111, 288.0, n2];
  L125():
    n3 = force? n2;
    checkMissing(n3);
    pp23 = ld pp;
    check L126() else D51();
  D51():
    deopt 181 [r111, 288.0, n3, pp23];
  L126():
    pp24 = force? pp23;
    checkMissing(pp24);
    r112 = `*`(n3, pp24);
    rho = ld rho;
    check L127() else D52();
  D52():
    deopt 183 [r111, 288.0, r112, rho];
  L127():
    rho1 = force? rho;
    checkMissing(rho1);
    r113 = `*`(r112, rho1);
    r114 = `^`(r113, 2.0);
    r115 = `*`(288.0, r114);
    r116 = `/`(r111, r115);
    st w2 = r116;
    n4 = ld n;
    check L128() else D53();
  D53():
    deopt 191 [n4];
  L128():
    n5 = force? n4;
    checkMissing(n5);
    r117 = `-`(<missing>, n5);
    rho2 = ld rho;
    check L129() else D54();
  D54():
    deopt 193 [r117, rho2];
  L129():
    rho3 = force? rho2;
    checkMissing(rho3);
    r118 = `*`(r117, rho3);
    logW = ld logW;
    check L130() else D55();
  D55():
    deopt 195 [r118, logW];
  L130():
    logW1 = force? logW;
    checkMissing(logW1);
    r119 = `*`(r118, logW1);
    st z = r119;
    pp25 = ld pp;
    check L131() else D56();
  D56():
    deopt 199 [pp25];
  L131():
    pp26 = force? pp25;
    checkMissing(pp26);
    pp27 = ld pp;
    check L132() else D57();
  D57():
    deopt 200 [pp26, pp27];
  L132():
    pp28 = force? pp27;
    checkMissing(pp28);
    r120 = `+`(pp28, 1.0);
    r121 = `*`(pp26, r120);
    r122 = `/`(r121, 2.0);
    r123 = `-`(r122, 1.0);
    st f = r123;
    pchisq = ldf pchisq;
    check L133() else D58();
  D58():
    deopt 211 [];
  L133():
    p35 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p36 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r126 = dyn pchisq[, , `lower.tail`](p35, p36, FALSE);
    check L134() else D59();
  D59():
    deopt 216 [r126];
  L134():
    st Pr1 = r126;
    pchisq1 = ldf pchisq;
    check L135() else D60();
  D60():
    deopt 219 [];
  L135():
    p37 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    p38 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      r128 = `+`(f3, 4.0);
      return r128;
    };
    r130 = dyn pchisq1[, , `lower.tail`](p37, p38, FALSE);
    check L136() else D61();
  D61():
    deopt 224 [r130];
  L136():
    st Pr2 = r130;
    Pr1 = ld Pr1;
    check L137() else D62();
  D62():
    deopt 226 [Pr1];
  L137():
    Pr2 = force? Pr1;
    checkMissing(Pr2);
    w2 = ld w2;
    check L138() else D63();
  D63():
    deopt 227 [Pr2, w2];
  L138():
    w3 = force? w2;
    checkMissing(w3);
    Pr3 = ld Pr2;
    check L139() else D64();
  D64():
    deopt 228 [Pr2, w3, Pr3];
  L139():
    Pr4 = force? Pr3;
    checkMissing(Pr4);
    Pr5 = ld Pr1;
    check L140() else D65();
  D65():
    deopt 229 [Pr2, w3, Pr4, Pr5];
  L140():
    Pr6 = force? Pr5;
    checkMissing(Pr6);
    r131 = `-`(Pr4, Pr6);
    r132 = `*`(w3, r131);
    r133 = `+`(Pr2, r132);
    st pval = r133;
    sym8 = ldf missing;
    base8 = ldf missing in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L141() else L142();
  L25(r135):
    r137 = `!`(r135);
    c7 = `as.logical`(r137);
    if c7 then L143() else L26();
  L141():
    missing3 = ldf missing in base;
    r136 = dyn missing3(<sym T>);
    goto L25(r136);
  L142():
    r134 = dyn base8(<sym T>);
    goto L25(r134);
  L26():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L150() else L151();
  L28(r146):
    st transformnote = r146;
    sym15 = ldf list;
    base15 = ldf list in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L185() else L186();
  L143():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L144() else L145();
  L27(r139):
    goto L28(r139);
  L41(r186):
    st retval = r186;
    l = ld retval;
    class__ = ldf `class<-`;
    check L201() else D94();
  L144():
    apply = ldf apply;
    check L146() else D66();
  L145():
    r138 = dyn base9("\nContrast matrix", <lang apply(format(T), 1, paste, collapse=" ")>);
    goto L27(r138);
  L150():
    Xmis = ld Xmis;
    check L152() else D69();
  L151():
    r147 = dyn base10(<lang if(`!`(Xmis), c("\nContrasts orthogonal to", if(is.matrix(orig.X), apply(format(X), 2, paste, collapse=" "), deparse(formula(orig.X))), "", if(`!`(Mmis), c("\nContrasts spanned by", if(is.matrix(orig.M), apply(format(M), 2, paste, collapse=" "), deparse(formula(orig.M))), ""))))>);
    goto L28(r147);
  L185():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L187() else L188();
  L186():
    r185 = dyn base15[statistic, `p.value`, method, `data.name`](<lang c(W=exp(logW))>, <sym pval>, <lang c("Mauchly's test of sphericity", transformnote)>, <lang paste("SSD matrix from", deparse(`$`(object, call)), collapse=" ")>);
    goto L41(r185);
  D66():
    deopt 243 [];
  D69():
    deopt 254 [Xmis];
  D94():
    deopt 352 ["htest", l, "htest"];
  L42(r188):
    pval = ld pval;
    check L193() else D88();
  L146():
    p40 = prom<V +>{
      format = ldf format;
      p39 = prom<V +>{
        T11 = ld T;
        T12 = force? T11;
        checkMissing(T12);
        return T12;
      };
      r141 = dyn format(p39);
      return r141;
    };
    p41 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r144 = dyn apply[, , , collapse](p40, 1, p41, " ");
    check L147() else D67();
  L152():
    Xmis1 = force? Xmis;
    checkMissing(Xmis1);
    r148 = `!`(Xmis1);
    c9 = `as.logical`(r148);
    if c9 then L153() else L29();
  L187():
    sym17 = ldf exp;
    base17 = ldf exp in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L189() else L190();
  L188():
    r187 = dyn base16[W](<lang exp(logW)>);
    goto L42(r187);
  L201():
    r202 = dyn class__(l, NULL, "htest");
    check L202() else D95();
  D67():
    deopt 249 [r144];
  D88():
    deopt 327 [pval];
  D95():
    deopt 354 ["htest", r202];
  L29():
    goto L40(NULL);
  L40(r183):
    c15 = ldf c in base;
    r184 = dyn c15(r183);
    check L184() else D85();
  L43(r190):
    c16 = ldf c in base;
    r192 = dyn c16(r190);
    check L192() else D87();
  L147():
    c8 = ldf c in base;
    r145 = dyn c8("\nContrast matrix", r144);
    check L148() else D68();
  L153():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L154() else L155();
  L189():
    logW2 = ld logW;
    check L191() else D86();
  L190():
    r189 = dyn base17(<sym logW>);
    goto L43(r189);
  L193():
    pval1 = force? pval;
    checkMissing(pval1);
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L194() else L195();
  L202():
    st retval = r202;
    retval = ld retval;
    check L203() else D96();
  D68():
    deopt 251 [r145];
  D85():
    deopt 313 [r184];
  D86():
    deopt 320 [logW2];
  D87():
    deopt 325 [r192];
  D96():
    deopt 356 [retval];
  L30(r150):
    goto L40(r150);
  L44(r194):
    paste6 = ldf paste;
    check L198() else D91();
  L148():
    goto L27(r145);
  L154():
    sym12 = ldf `is.matrix`;
    base12 = ldf `is.matrix` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L156() else L157();
  L155():
    r149 = dyn base11("\nContrasts orthogonal to", <lang if(is.matrix(orig.X), apply(format(X), 2, paste, collapse=" "), deparse(formula(orig.X)))>, "", <lang if(`!`(Mmis), c("\nContrasts spanned by", if(is.matrix(orig.M), apply(format(M), 2, paste, collapse=" "), deparse(formula(orig.M))), ""))>);
    goto L30(r149);
  L184():
    goto L28(r184);
  L191():
    logW3 = force? logW2;
    checkMissing(logW3);
    r191 = exp(logW3);
    goto L43(r191);
  L192():
    goto L42(r192);
  L194():
    transformnote = ld transformnote;
    check L196() else D89();
  L195():
    r193 = dyn base18("Mauchly's test of sphericity", <sym transformnote>);
    goto L44(r193);
  L203():
    retval1 = force? retval;
    checkMissing(retval1);
    popenv;
    return retval1;
  D89():
    deopt 333 [transformnote];
  D91():
    deopt 339 [];
  L31(r152):
    c10 = `as.logical`(r152);
    if c10 then L160() else L32();
  L156():
    orig_X = ld `orig.X`;
    check L158() else D70();
  L157():
    r151 = dyn base12(<sym orig.X>);
    goto L31(r151);
  L196():
    transformnote1 = force? transformnote;
    checkMissing(transformnote1);
    c17 = ldf c in base;
    r195 = dyn c17("Mauchly's test of sphericity", transformnote1);
    check L197() else D90();
  L198():
    p53 = prom<V +>{
      deparse2 = ldf deparse;
      p52 = prom<V +>{
        object13 = ld object;
        object14 = force? object13;
        checkMissing(object14);
        c18 = `is.object`(object14);
        if c18 then L1() else L2(object14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", object14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(object16):
        r196 = `$`(object16, <sym call>);
        goto L0(r196);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r198 = dyn deparse2(p52);
      return r198;
    };
    r200 = dyn paste6[, , collapse]("SSD matrix from", p53, " ");
    check L199() else D92();
  D70():
    deopt 262 [orig_X];
  D90():
    deopt 336 [r195];
  D92():
    deopt 344 [r200];
  L32():
    deparse = ldf deparse;
    check L164() else D74();
  L33(r159):
    Mmis = ld Mmis;
    check L166() else D76();
  L158():
    orig_X1 = force? orig_X;
    checkMissing(orig_X1);
    is_matrix = ldf `is.matrix` in base;
    r153 = dyn is_matrix(orig_X1);
    check L159() else D71();
  L160():
    apply1 = ldf apply;
    check L161() else D72();
  L197():
    goto L44(r195);
  L199():
    list = ldf list in base;
    r201 = dyn list(r188, pval1, r194, r200);
    check L200() else D93();
  D71():
    deopt 265 [r153];
  D72():
    deopt 267 [];
  D74():
    deopt 275 [];
  D76():
    deopt 279 [Mmis];
  D93():
    deopt 347 [r201];
  L159():
    goto L31(r153);
  L161():
    p43 = prom<V +>{
      format1 = ldf format;
      p42 = prom<V +>{
        X11 = ld X;
        X12 = force? X11;
        checkMissing(X12);
        return X12;
      };
      r155 = dyn format1(p42);
      return r155;
    };
    p44 = prom<V +>{
      paste2 = ld paste;
      paste3 = force? paste2;
      checkMissing(paste3);
      return paste3;
    };
    r158 = dyn apply1[, , , collapse](p43, 2, p44, " ");
    check L162() else D73();
  L164():
    p46 = prom<V +>{
      formula = ldf formula;
      p45 = prom<V +>{
        orig_X2 = ld `orig.X`;
        orig_X3 = force? orig_X2;
        checkMissing(orig_X3);
        return orig_X3;
      };
      r161 = dyn formula(p45);
      return r161;
    };
    r163 = dyn deparse(p46);
    check L165() else D75();
  L166():
    Mmis1 = force? Mmis;
    checkMissing(Mmis1);
    r164 = `!`(Mmis1);
    c11 = `as.logical`(r164);
    if c11 then L167() else L34();
  L200():
    goto L41(r201);
  D73():
    deopt 273 [r158];
  D75():
    deopt 277 [r163];
  L34():
    goto L39(NULL);
  L39(r181):
    c14 = ldf c in base;
    r182 = dyn c14("\nContrasts orthogonal to", r159, "", r181);
    check L182() else D84();
  L162():
    goto L33(r158);
  L165():
    goto L33(r163);
  L167():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L168() else L169();
  D84():
    deopt 309 [r182];
  L35(r166):
    goto L39(r166);
  L168():
    sym14 = ldf `is.matrix`;
    base14 = ldf `is.matrix` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L170() else L171();
  L169():
    r165 = dyn base13("\nContrasts spanned by", <lang if(is.matrix(orig.M), apply(format(M), 2, paste, collapse=" "), deparse(formula(orig.M)))>, "");
    goto L35(r165);
  L182():
    goto L30(r182);
  L36(r168):
    c12 = `as.logical`(r168);
    if c12 then L174() else L37();
  L170():
    orig_M = ld `orig.M`;
    check L172() else D77();
  L171():
    r167 = dyn base14(<sym orig.M>);
    goto L36(r167);
  D77():
    deopt 287 [orig_M];
  L37():
    deparse1 = ldf deparse;
    check L178() else D81();
  L38(r175):
    c13 = ldf c in base;
    r180 = dyn c13("\nContrasts spanned by", r175, "");
    check L180() else D83();
  L172():
    orig_M1 = force? orig_M;
    checkMissing(orig_M1);
    is_matrix1 = ldf `is.matrix` in base;
    r169 = dyn is_matrix1(orig_M1);
    check L173() else D78();
  L174():
    apply2 = ldf apply;
    check L175() else D79();
  D78():
    deopt 290 [r169];
  D79():
    deopt 292 [];
  D81():
    deopt 300 [];
  D83():
    deopt 305 [r180];
  L173():
    goto L36(r169);
  L175():
    p48 = prom<V +>{
      format2 = ldf format;
      p47 = prom<V +>{
        M13 = ld M;
        M14 = force? M13;
        checkMissing(M14);
        return M14;
      };
      r171 = dyn format2(p47);
      return r171;
    };
    p49 = prom<V +>{
      paste4 = ld paste;
      paste5 = force? paste4;
      checkMissing(paste5);
      return paste5;
    };
    r174 = dyn apply2[, , , collapse](p48, 2, p49, " ");
    check L176() else D80();
  L178():
    p51 = prom<V +>{
      formula1 = ldf formula;
      p50 = prom<V +>{
        orig_M2 = ld `orig.M`;
        orig_M3 = force? orig_M2;
        checkMissing(orig_M3);
        return orig_M3;
      };
      r177 = dyn formula1(p50);
      return r177;
    };
    r179 = dyn deparse1(p51);
    check L179() else D82();
  L180():
    goto L35(r180);
  D80():
    deopt 298 [r174];
  D82():
    deopt 302 [r179];
  L176():
    goto L38(r174);
  L179():
    goto L38(r179);
  }
}