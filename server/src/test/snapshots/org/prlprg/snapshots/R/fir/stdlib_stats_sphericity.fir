fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner155448383;
    st sphericity = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner155448383(object, Sigma, T, M, X, idata) {
  (reg object:*, reg Sigma:*, reg T:*, reg M:*, reg X:*, reg idata:*) -+> V { var object:*, var Sigma:*, reg Sigma_isMissing:L, reg Sigma_orDefault:*, reg diag:cls, reg p:*, reg p1:V, reg p2:p(V +), reg r1:V, reg p3:p(V +), var T:*, reg T_isMissing:L, reg T_orDefault:*, reg Thin_row:cls, reg Proj:cls, reg M1:*, reg M2:V, reg p4:p(V +), reg r4:V, reg Proj1:cls, reg X1:*, reg X2:V, reg p5:p(V +), reg r6:V, reg r7:V, reg p6:p(V +), reg r9:V, reg p7:p(V +), var M:*, reg M_isMissing:L, reg M_orDefault:*, reg diag1:cls, reg p8:*, reg p9:V, reg p10:p(V +), reg r12:V, reg p11:p(V +), var X:*, reg X_isMissing:L, reg X_orDefault:*, reg __:cls, reg r14:V, reg p12:p(V +), var idata:*, reg idata_isMissing:L, reg idata_orDefault:*, reg data_frame:cls, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg p13:*, reg p14:V, reg r18:I, reg p15:p(V +), reg r20:V, reg p16:p(V +), reg ncol:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V, reg p17:p(V +), reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg missing:cls, reg r27:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg M3:*, reg M4:V, reg inherits:cls, reg r30:V, reg c2:L, reg model_matrix:cls, reg M5:*, reg M6:V, reg p18:p(V +), reg idata1:*, reg idata2:V, reg p19:p(V +), reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg X3:*, reg X4:V, reg inherits1:cls, reg r37:V, reg c3:L, reg model_matrix1:cls, reg X5:*, reg X6:V, reg p20:p(V +), reg idata3:*, reg idata4:V, reg p21:p(V +), reg r40:V, reg Rank:cls, reg cbind:cls, reg M7:*, reg M8:V, reg p22:p(V +), reg X7:*, reg X8:V, reg p23:p(V +), reg r44:V, reg p24:p(V +), reg r46:V, reg Rank1:cls, reg M9:*, reg M10:V, reg p25:p(V +), reg r48:V, reg r49:V, reg c4:L, reg stop:cls, reg r50:V, reg r51:V, reg T1:*, reg T2:V, reg Sigma1:*, reg Sigma2:V, reg ___:cls, reg r53:V, reg t:cls, reg T3:*, reg T4:V, reg p26:p(V +), reg r55:V, reg ___1:cls, reg r56:V, reg T5:*, reg T6:V, reg object5:*, reg object6:V, reg c5:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r57:V, reg ___2:cls, reg r58:V, reg t1:cls, reg T7:*, reg T8:V, reg p27:p(V +), reg r60:V, reg ___3:cls, reg r61:V, reg nrow:cls, reg T9:*, reg T10:V, reg p28:p(V +), reg r63:V, reg solve:cls, reg Psi:*, reg Psi1:V, reg p29:p(V +), reg B:*, reg B1:V, reg p30:p(V +), reg r66:V, reg Tr:cls, reg U:*, reg U1:V, reg p31:p(V +), reg r68:V, reg pp:*, reg pp1:V, reg r69:V, reg object9:*, reg object10:V, reg c6:L, reg r71:V, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r73:V, reg dx5:V, reg r74:V, reg r75:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r76:V, reg r77:V, reg eigen:cls, reg U2:*, reg U3:V, reg p32:p(V +), reg r79:V, reg c7:L, reg r81:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r82:V, reg Re:cls, reg r83:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r84:V, reg r85:V, reg lambda:*, reg lambda1:V, reg sum:cls, reg r86:V, reg r87:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r90:V, reg r91:V, reg r92:V, reg lambda2:*, reg lambda3:V, reg r93:V, reg sum1:cls, reg r94:V, reg r95:V, reg pp2:*, reg pp3:V, reg r96:V, reg object13:*, reg object14:V, reg c8:L, reg object16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r97:V, reg n:*, reg n1:V, reg r98:V, reg pp4:*, reg pp5:V, reg r99:V, reg GG_eps:*, reg GG_eps1:V, reg r100:V, reg r101:V, reg pp6:*, reg pp7:V, reg n2:*, reg n3:V, reg pp8:*, reg pp9:V, reg GG_eps2:*, reg GG_eps3:V, reg r102:V, reg r103:V, reg r104:V, reg r105:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r106:V, reg r107:V, reg GG_eps4:*, reg GG_eps5:V, reg HF_eps:*, reg HF_eps1:V, reg sigma:*, reg sigma1:V, reg list:cls, reg r108:V |
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
    ncol = ldf ncol;
    check L25() else D0();
  D0():
    deopt 1 [];
  L25():
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
    check L26() else D1();
  D1():
    deopt 3 [r24];
  L26():
    st p = r24;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L10(r26):
    c1 = `as.logical`(r26);
    if c1 then L29() else L11();
  L27():
    missing = ldf missing in base;
    r27 = dyn missing(<sym T>);
    goto L10(r27);
  L28():
    r25 = dyn base1(<sym T>);
    goto L10(r25);
  L11():
    goto L20();
  L20():
    T1 = ld T;
    check L55() else D16();
  L29():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  D16():
    deopt 58 [T1];
  L12(r29):
    c2 = `as.logical`(r29);
    if c2 then L34() else L13();
  L30():
    M3 = ld M;
    check L32() else D2();
  L31():
    r28 = dyn base2(<sym M>, "formula");
    goto L12(r28);
  L55():
    T2 = force? T1;
    checkMissing(T2);
    Sigma1 = ld Sigma;
    check L56() else D17();
  D2():
    deopt 10 [M3];
  D17():
    deopt 60 [Sigma1];
  L13():
    goto L14();
  L14():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L32():
    M4 = force? M3;
    checkMissing(M4);
    inherits = ldf inherits in base;
    r30 = dyn inherits(M4, "formula", FALSE);
    check L33() else D3();
  L34():
    model_matrix = ldf `model.matrix`;
    check L35() else D4();
  L56():
    Sigma2 = force? Sigma1;
    checkMissing(Sigma2);
    ___ = ldf `%*%` in base;
    r53 = dyn ___(T2, Sigma2);
    check L57() else D18();
  D3():
    deopt 15 [r30];
  D4():
    deopt 17 [];
  D18():
    deopt 63 [r53];
  L15(r36):
    c3 = `as.logical`(r36);
    if c3 then L42() else L16();
  L33():
    goto L12(r30);
  L35():
    p18 = prom<V +>{
      M5 = ld M;
      M6 = force? M5;
      checkMissing(M6);
      return M6;
    };
    p19 = prom<V +>{
      idata1 = ld idata;
      idata2 = force? idata1;
      checkMissing(idata2);
      return idata2;
    };
    r33 = dyn model_matrix(p18, p19);
    check L36() else D5();
  L38():
    X3 = ld X;
    check L40() else D6();
  L39():
    r35 = dyn base3(<sym X>, "formula");
    goto L15(r35);
  L57():
    t = ldf t;
    check L58() else D19();
  D5():
    deopt 20 [r33];
  D6():
    deopt 26 [X3];
  D19():
    deopt 65 [];
  L16():
    goto L17();
  L17():
    Rank = ldf Rank;
    check L46() else D10();
  L36():
    st M = r33;
    goto L14();
  L40():
    X4 = force? X3;
    checkMissing(X4);
    inherits1 = ldf inherits in base;
    r37 = dyn inherits1(X4, "formula", FALSE);
    check L41() else D7();
  L42():
    model_matrix1 = ldf `model.matrix`;
    check L43() else D8();
  L58():
    p26 = prom<V +>{
      T3 = ld T;
      T4 = force? T3;
      checkMissing(T4);
      return T4;
    };
    r55 = dyn t(p26);
    check L59() else D20();
  D7():
    deopt 31 [r37];
  D8():
    deopt 33 [];
  D10():
    deopt 41 [];
  D20():
    deopt 67 [r55];
  L41():
    goto L15(r37);
  L43():
    p20 = prom<V +>{
      X5 = ld X;
      X6 = force? X5;
      checkMissing(X6);
      return X6;
    };
    p21 = prom<V +>{
      idata3 = ld idata;
      idata4 = force? idata3;
      checkMissing(idata4);
      return idata4;
    };
    r40 = dyn model_matrix1(p20, p21);
    check L44() else D9();
  L46():
    p24 = prom<V +>{
      cbind = ldf cbind;
      p22 = prom<V +>{
        M7 = ld M;
        M8 = force? M7;
        checkMissing(M8);
        return M8;
      };
      p23 = prom<V +>{
        X7 = ld X;
        X8 = force? X7;
        checkMissing(X8);
        return X8;
      };
      r44 = dyn cbind(p22, p23);
      return r44;
    };
    r46 = dyn Rank(p24);
    check L47() else D11();
  L59():
    ___1 = ldf `%*%` in base;
    r56 = dyn ___1(r53, r55);
    check L60() else D21();
  D9():
    deopt 36 [r40];
  D11():
    deopt 43 [r46];
  D21():
    deopt 69 [r56];
  L44():
    st X = r40;
    goto L17();
  L47():
    Rank1 = ldf Rank;
    check L48() else D12();
  L60():
    st Psi = r56;
    T5 = ld T;
    check L61() else D22();
  D12():
    deopt 44 [r46];
  D22():
    deopt 73 [T5];
  L48():
    p25 = prom<V +>{
      M9 = ld M;
      M10 = force? M9;
      checkMissing(M10);
      return M10;
    };
    r48 = dyn Rank1(p25);
    check L49() else D13();
  L61():
    T6 = force? T5;
    checkMissing(T6);
    object5 = ld object;
    check L62() else D23();
  D13():
    deopt 46 [r46, r48];
  D23():
    deopt 75 [object5];
  L49():
    r49 = `!=`(r46, r48);
    c4 = `as.logical`(r49);
    if c4 then L50() else L18();
  L62():
    object6 = force? object5;
    checkMissing(object6);
    c5 = `is.object`(object6);
    if c5 then L64() else L65(object6);
  L18():
    goto L19(NULL);
  L19(r51):
    goto L20();
  L50():
    stop = ldf stop;
    check L51() else D14();
  L63(dx3):
    ___2 = ldf `%*%` in base;
    r58 = dyn ___2(T6, dx3);
    check L67() else D24();
  L64():
    dr2 = tryDispatchBuiltin.1("$", object6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(object8):
    r57 = `$`(object8, <sym SSD>);
    goto L63(r57);
  D14():
    deopt 49 [];
  D24():
    deopt 79 [r58];
  L51():
    r50 = dyn stop("X does not define a subspace of M");
    check L52() else D15();
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L63(dx2);
  L67():
    t1 = ldf t;
    check L68() else D25();
  D15():
    deopt 51 [r50];
  D25():
    deopt 81 [];
  L52():
    goto L19(r50);
  L68():
    p27 = prom<V +>{
      T7 = ld T;
      T8 = force? T7;
      checkMissing(T8);
      return T8;
    };
    r60 = dyn t1(p27);
    check L69() else D26();
  D26():
    deopt 83 [r60];
  L69():
    ___3 = ldf `%*%` in base;
    r61 = dyn ___3(r58, r60);
    check L70() else D27();
  D27():
    deopt 85 [r61];
  L70():
    st B = r61;
    nrow = ldf nrow;
    check L71() else D28();
  D28():
    deopt 88 [];
  L71():
    p28 = prom<V +>{
      T9 = ld T;
      T10 = force? T9;
      checkMissing(T10);
      return T10;
    };
    r63 = dyn nrow(p28);
    check L72() else D29();
  D29():
    deopt 90 [r63];
  L72():
    st pp = r63;
    solve = ldf solve;
    check L73() else D30();
  D30():
    deopt 93 [];
  L73():
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
    r66 = dyn solve(p29, p30);
    check L74() else D31();
  D31():
    deopt 96 [r66];
  L74():
    st U = r66;
    Tr = ldf Tr;
    check L75() else D32();
  D32():
    deopt 99 [];
  L75():
    p31 = prom<V +>{
      U = ld U;
      U1 = force? U;
      checkMissing(U1);
      return U1;
    };
    r68 = dyn Tr(p31);
    check L76() else D33();
  D33():
    deopt 101 [r68];
  L76():
    pp = ld pp;
    check L77() else D34();
  D34():
    deopt 101 [r68, pp];
  L77():
    pp1 = force? pp;
    checkMissing(pp1);
    r69 = `/`(r68, pp1);
    object9 = ld object;
    check L78() else D35();
  D35():
    deopt 103 [r69, object9];
  L78():
    object10 = force? object9;
    checkMissing(object10);
    c6 = `is.object`(object10);
    if c6 then L80() else L81(r69, object10);
  L79(r73, dx5):
    r75 = `/`(r73, dx5);
    st sigma = r75;
    sym4 = ldf Re;
    base4 = ldf Re in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L83() else L84();
  L80():
    dr4 = tryDispatchBuiltin.1("$", object10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L82() else L81(r69, dr4);
  L81(r71, object12):
    r74 = `$`(object12, <sym df>);
    goto L79(r71, r74);
  L21(r77):
    st lambda = r77;
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L82():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L79(r69, dx4);
  L83():
    eigen = ldf eigen;
    check L85() else D36();
  L84():
    r76 = dyn base4(<lang `$`(eigen(U, only.values=TRUE), values)>);
    goto L21(r76);
  D36():
    deopt 111 [];
  L22(r85):
    r87 = `^`(r85, 2.0);
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L96() else L97();
  L85():
    p32 = prom<V +>{
      U2 = ld U;
      U3 = force? U2;
      checkMissing(U3);
      return U3;
    };
    r79 = dyn eigen[, `only.values`](p32, TRUE);
    check L86() else D37();
  L92():
    lambda = ld lambda;
    check L94() else D39();
  L93():
    r84 = dyn base5(<sym lambda>);
    goto L22(r84);
  D37():
    deopt 115 [r79];
  D39():
    deopt 122 [lambda];
  L23(r91, r92):
    r95 = `/`(r91, r92);
    pp2 = ld pp;
    check L100() else D43();
  L86():
    c7 = `is.object`(r79);
    if c7 then L88() else L89(r79);
  L94():
    lambda1 = force? lambda;
    checkMissing(lambda1);
    sum = ldf sum in base;
    r86 = dyn sum(lambda1);
    check L95() else D40();
  L96():
    lambda2 = ld lambda;
    check L98() else D41();
  L97():
    r90 = dyn base6(<lang `^`(lambda, 2.0)>);
    goto L23(r87, r90);
  D40():
    deopt 125 [r86];
  D41():
    deopt 129 [r87, lambda2];
  D43():
    deopt 135 [r95, pp2];
  L87(dx7):
    Re = ldf Re in base;
    r83 = dyn Re(dx7);
    check L91() else D38();
  L88():
    dr6 = tryDispatchBuiltin.1("$", r79);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L90() else L89(dr6);
  L89(r81):
    r82 = `$`(r81, <sym values>);
    goto L87(r82);
  L95():
    goto L22(r86);
  L98():
    lambda3 = force? lambda2;
    checkMissing(lambda3);
    r93 = `^`(lambda3, 2.0);
    sum1 = ldf sum in base;
    r94 = dyn sum1(r93);
    check L99() else D42();
  L100():
    pp3 = force? pp2;
    checkMissing(pp3);
    r96 = `/`(r95, pp3);
    st `GG.eps` = r96;
    object13 = ld object;
    check L101() else D44();
  D38():
    deopt 118 [r83];
  D42():
    deopt 134 [r87, r94];
  D44():
    deopt 139 [object13];
  L90():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L87(dx6);
  L91():
    goto L21(r83);
  L99():
    goto L23(r87, r94);
  L101():
    object14 = force? object13;
    checkMissing(object14);
    c8 = `is.object`(object14);
    if c8 then L103() else L104(object14);
  L102(dx9):
    st n = dx9;
    n = ld n;
    check L106() else D45();
  L103():
    dr8 = tryDispatchBuiltin.1("$", object14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L105() else L104(dr8);
  L104(object16):
    r97 = `$`(object16, <sym df>);
    goto L102(r97);
  D45():
    deopt 143 [n];
  L105():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L102(dx8);
  L106():
    n1 = force? n;
    checkMissing(n1);
    r98 = `+`(n1, 1.0);
    pp4 = ld pp;
    check L107() else D46();
  D46():
    deopt 146 [r98, pp4];
  L107():
    pp5 = force? pp4;
    checkMissing(pp5);
    r99 = `*`(r98, pp5);
    GG_eps = ld `GG.eps`;
    check L108() else D47();
  D47():
    deopt 148 [r99, GG_eps];
  L108():
    GG_eps1 = force? GG_eps;
    checkMissing(GG_eps1);
    r100 = `*`(r99, GG_eps1);
    r101 = `-`(r100, 2.0);
    pp6 = ld pp;
    check L109() else D48();
  D48():
    deopt 152 [r101, pp6];
  L109():
    pp7 = force? pp6;
    checkMissing(pp7);
    n2 = ld n;
    check L110() else D49();
  D49():
    deopt 153 [r101, pp7, n2];
  L110():
    n3 = force? n2;
    checkMissing(n3);
    pp8 = ld pp;
    check L111() else D50();
  D50():
    deopt 154 [r101, pp7, n3, pp8];
  L111():
    pp9 = force? pp8;
    checkMissing(pp9);
    GG_eps2 = ld `GG.eps`;
    check L112() else D51();
  D51():
    deopt 155 [r101, pp7, n3, pp9, GG_eps2];
  L112():
    GG_eps3 = force? GG_eps2;
    checkMissing(GG_eps3);
    r102 = `*`(pp9, GG_eps3);
    r103 = `-`(n3, r102);
    r104 = `*`(pp7, r103);
    r105 = `/`(r101, r104);
    st `HF.eps` = r105;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L24(r107):
    popenv;
    return r107;
  L113():
    GG_eps4 = ld `GG.eps`;
    check L115() else D52();
  L114():
    r106 = dyn base7[`GG.eps`, `HF.eps`, sigma](<sym GG.eps>, <sym HF.eps>, <sym sigma>);
    goto L24(r106);
  D52():
    deopt 164 [GG_eps4];
  L115():
    GG_eps5 = force? GG_eps4;
    checkMissing(GG_eps5);
    HF_eps = ld `HF.eps`;
    check L116() else D53();
  D53():
    deopt 167 [HF_eps];
  L116():
    HF_eps1 = force? HF_eps;
    checkMissing(HF_eps1);
    sigma = ld sigma;
    check L117() else D54();
  D54():
    deopt 170 [sigma];
  L117():
    sigma1 = force? sigma;
    checkMissing(sigma1);
    list = ldf list in base;
    r108 = dyn list(GG_eps5, HF_eps1, sigma1);
    check L118() else D55();
  D55():
    deopt 174 [r108];
  L118():
    goto L24(r108);
  }
}