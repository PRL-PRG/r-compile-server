fun main() {
  () -+> V { reg r:cls, reg eigen:cls, reg cbind:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg eigen1:cls, reg cbind1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg c2:cls, reg r14:V, reg p3:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg eigen2:cls, reg cbind2:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg c4:cls, reg r25:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg r29:V, reg eigen3:cls, reg cbind3:cls, reg p8:p(V +), reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg eigen4:cls, reg print:cls, reg cbind4:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg c5:cls, reg r37:V, reg p11:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg c6:cls, reg r41:V, reg p12:p(V +), reg r43:V, reg p13:p(V +), reg r45:V, reg p14:p(V +), reg r47:V, reg eigen5:cls, reg cbind5:cls, reg p15:p(V +), reg p16:p(V +), reg r50:V, reg p17:p(V +), reg r52:V, reg eigen6:cls, reg cbind6:cls, reg p18:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r54:V, reg r55:V, reg c7:cls, reg r56:V, reg p19:p(V +), reg p20:p(V +), reg r59:V, reg p21:p(V +), reg r61:V |
    mkenv;
    r = clos inner4015771343;
    st eigen = r;
    eigen = ldf eigen;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p2 = prom<V +>{
      cbind = ldf cbind;
      p = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        c = ldf c in base;
        r3 = dyn c(1.0, -1.0);
        goto L0(r3);
      L2():
        r1 = dyn base(1.0, <lang `-`(1.0)>);
        goto L0(r1);
      };
      p1 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r6):
        return r6;
      L1():
        c1 = ldf c in base;
        r7 = dyn c1(-1.0, 1.0);
        goto L0(r7);
      L2():
        r5 = dyn base1(<lang `-`(1.0)>, 1.0);
        goto L0(r5);
      };
      r9 = dyn cbind(p, p1);
      return r9;
    };
    r11 = dyn eigen(p2);
    check L1() else D1();
  D1():
    deopt 6 [r11];
  L1():
    eigen1 = ldf eigen;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p5 = prom<V +>{
      cbind1 = ldf cbind;
      p3 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r13):
        return r13;
      L1():
        c2 = ldf c in base;
        r14 = dyn c2(1.0, -1.0);
        goto L0(r14);
      L2():
        r12 = dyn base2(1.0, <lang `-`(1.0)>);
        goto L0(r12);
      };
      p4 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        c3 = ldf c in base;
        r18 = dyn c3(-1.0, 1.0);
        goto L0(r18);
      L2():
        r16 = dyn base3(<lang `-`(1.0)>, 1.0);
        goto L0(r16);
      };
      r20 = dyn cbind1(p3, p4);
      return r20;
    };
    r22 = dyn eigen1[, symmetric](p5, FALSE);
    check L3() else D3();
  D3():
    deopt 12 [r22];
  L3():
    eigen2 = ldf eigen;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p7 = prom<V +>{
      cbind2 = ldf cbind;
      p6 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r24):
        return r24;
      L1():
        c4 = ldf c in base;
        r25 = dyn c4(1.0, -1.0);
        goto L0(r25);
      L2():
        r23 = dyn base4(1.0, <lang `-`(1.0)>);
        goto L0(r23);
      };
      r27 = dyn cbind2(1.0, p6);
      return r27;
    };
    r29 = dyn eigen2[, `only.values`](p7, TRUE);
    check L5() else D5();
  D5():
    deopt 18 [r29];
  L5():
    eigen3 = ldf eigen;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p10 = prom<V +>{
      cbind3 = ldf cbind;
      p8 = prom<V +>{
        return -1.0;
      };
      p9 = prom<V +>{
        return <int 2, 1>;
      };
      r32 = dyn cbind3(p8, p9);
      return r32;
    };
    r34 = dyn eigen3(p10);
    check L7() else D7();
  D7():
    deopt 22 [r34];
  L7():
    eigen4 = ldf eigen;
    check L8() else D8();
  D8():
    deopt 24 [];
  L8():
    p14 = prom<V +>{
      print = ldf print;
      p13 = prom<V +>{
        cbind4 = ldf cbind;
        p11 = prom<V +>{
          sym5 = ldf c;
          base5 = ldf c in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r36):
          return r36;
        L1():
          c5 = ldf c in base;
          r37 = dyn c5(0.0, 1.0i);
          goto L0(r37);
        L2():
          r35 = dyn base5(0.0, 1.0i);
          goto L0(r35);
        };
        p12 = prom<V +>{
          sym6 = ldf c;
          base6 = ldf c in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r40):
          return r40;
        L1():
          c6 = ldf c in base;
          r41 = dyn c6(-1.0i, 0.0);
          goto L0(r41);
        L2():
          r39 = dyn base6(<lang `-`(1.0i)>, 0.0);
          goto L0(r39);
        };
        r43 = dyn cbind4(p11, p12);
        return r43;
      };
      r45 = dyn print(p13);
      return r45;
    };
    r47 = dyn eigen4(p14);
    check L9() else D9();
  D9():
    deopt 26 [r47];
  L9():
    eigen5 = ldf eigen;
    check L10() else D10();
  D10():
    deopt 28 [];
  L10():
    p17 = prom<V +>{
      cbind5 = ldf cbind;
      p15 = prom<V +>{
        return <int 3, 2, 1>;
      };
      p16 = prom<V +>{
        return <int 1, 2, 3>;
      };
      r50 = dyn cbind5(1.0, p15, p16);
      return r50;
    };
    r52 = dyn eigen5(p17);
    check L11() else D11();
  D11():
    deopt 30 [r52];
  L11():
    eigen6 = ldf eigen;
    check L12() else D12();
  D12():
    deopt 32 [];
  L12():
    p21 = prom<V +>{
      cbind6 = ldf cbind;
      p18 = prom<V +>{
        return -1.0;
      };
      p19 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r55):
        return r55;
      L1():
        c7 = ldf c in base;
        r56 = dyn c7(<int 1, 2>, 0.0);
        goto L0(r56);
      L2():
        r54 = dyn base7(<lang `:`(1.0, 2.0)>, 0.0);
        goto L0(r54);
      };
      p20 = prom<V +>{
        return <int 0, 1, 2>;
      };
      r59 = dyn cbind6(p18, p19, p20);
      return r59;
    };
    r61 = dyn eigen6(p21);
    check L13() else D13();
  D13():
    deopt 34 [r61];
  L13():
    popenv;
    return r61;
  }
}
fun inner4015771343(x, symmetric, `only.values`, EISPACK) {
  (reg x:*, reg symmetric:*, reg only_values:*, reg EISPACK:*) -+> V { var x:*, var symmetric:*, var `only.values`:*, reg only_values_isMissing:L, reg only_values_orDefault:*, var EISPACK:*, reg EISPACK_isMissing:L, reg EISPACK_orDefault:*, reg unname:cls, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg nrow:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r5:V, reg n:*, reg n1:V, reg ncol:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r7:V, reg r8:V, reg c:L, reg stop:cls, reg r9:V, reg n2:*, reg n3:V, reg r11:V, reg c1:L, reg stop1:cls, reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg r15:V, reg n4:*, reg n5:V, reg as_integer:cls, reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg n6:*, reg n7:V, reg is_na:cls, reg r19:V, reg c2:L, reg stop2:cls, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg x7:*, reg x8:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg x9:*, reg x10:V, reg is_finite:cls, reg r28:V, reg all:cls, reg r29:V, reg r30:V, reg c4:L, reg stop3:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg missing:cls, reg r35:V, reg c5:L, reg isSymmetric_matrix:cls, reg x11:*, reg x12:V, reg p4:p(V +), reg r37:V, reg symmetric1:*, reg symmetric2:V, reg c6:L, reg complex_x:*, reg complex_x1:V, reg r39:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg x13:*, reg x14:V, reg only_values1:*, reg only_values2:V, reg La_rs:cls, reg r42:V, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg x15:*, reg x16:V, reg only_values3:*, reg only_values4:V, reg La_rs_cmplx:cls, reg r45:V, reg rev:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg z:*, reg z1:V, reg c8:L, reg z3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r48:V, reg r49:I, reg p5:p(V +), reg r51:V, reg complex_x2:*, reg complex_x3:V, reg r53:V, reg c9:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg x17:*, reg x18:V, reg only_values5:*, reg only_values6:V, reg La_rg:cls, reg r56:V, reg r57:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg x19:*, reg x20:V, reg only_values7:*, reg only_values8:V, reg La_rg_cmplx:cls, reg r59:V, reg sort_list:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg r61:V, reg z4:*, reg z5:V, reg c10:L, reg z7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r62:V, reg Mod:cls, reg r63:V, reg p6:p(V +), reg r65:V, reg only_values9:*, reg only_values10:V, reg c11:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r66:V, reg r67:V, reg z8:*, reg z9:V, reg c12:L, reg z11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r68:V, reg c13:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg ord:*, reg ord1:V, reg __:cls, reg r69:V, reg list:cls, reg r70:V, reg structure:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r71:V, reg r72:V, reg z12:*, reg z13:V, reg c14:L, reg z15:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r73:V, reg c15:L, reg dx13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg ord2:*, reg ord3:V, reg __1:cls, reg r74:V, reg z16:*, reg z17:V, reg c16:L, reg z19:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r75:V, reg c17:L, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg ord4:*, reg ord5:V, reg __2:cls, reg r76:V, reg list1:cls, reg r77:V, reg p7:p(V +), reg r79:V |
    mkenv;
    st x = x;
    st symmetric = symmetric;
    only_values_isMissing = missing.0(only_values);
    if only_values_isMissing then L0(FALSE) else L0(only_values);
  L0(only_values_orDefault):
    st `only.values` = only_values_orDefault;
    EISPACK_isMissing = missing.0(EISPACK);
    if EISPACK_isMissing then L1(FALSE) else L1(EISPACK);
  L1(EISPACK_orDefault):
    st EISPACK = EISPACK_orDefault;
    unname = ldf unname;
    check L29() else D0();
  D0():
    deopt 1 [];
  L29():
    p1 = prom<V +>{
      as_matrix = ldf `as.matrix`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn as_matrix(p);
      return r1;
    };
    r3 = dyn unname(p1);
    check L30() else D1();
  D1():
    deopt 3 [r3];
  L30():
    st x = r3;
    nrow = ldf nrow;
    check L31() else D2();
  D2():
    deopt 6 [];
  L31():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn nrow(p2);
    check L32() else D3();
  D3():
    deopt 8 [r5];
  L32():
    st n = r5;
    n = ld n;
    check L33() else D4();
  D4():
    deopt 10 [n];
  L33():
    n1 = force? n;
    checkMissing(n1);
    ncol = ldf ncol;
    check L34() else D5();
  D5():
    deopt 12 [n1];
  L34():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r7 = dyn ncol(p3);
    check L35() else D6();
  D6():
    deopt 14 [n1, r7];
  L35():
    r8 = `!=`(n1, r7);
    c = `as.logical`(r8);
    if c then L36() else L2();
  L2():
    goto L3();
  L3():
    n2 = ld n;
    check L40() else D9();
  L36():
    stop = ldf stop;
    check L37() else D7();
  D7():
    deopt 17 [];
  D9():
    deopt 22 [n2];
  L37():
    r9 = dyn stop("non-square matrix in 'eigen'");
    check L38() else D8();
  L40():
    n3 = force? n2;
    checkMissing(n3);
    r11 = `!`(n3);
    c1 = `as.logical`(r11);
    if c1 then L41() else L4();
  D8():
    deopt 19 [r9];
  L4():
    goto L5();
  L5():
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L45() else L46();
  L38():
    goto L3();
  L41():
    stop1 = ldf stop;
    check L42() else D10();
  D10():
    deopt 26 [];
  L6(r15):
    st n = r15;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L42():
    r12 = dyn stop1("0 x 0 matrix");
    check L43() else D11();
  L45():
    n4 = ld n;
    check L47() else D12();
  L46():
    r14 = dyn base(<sym n>);
    goto L6(r14);
  D11():
    deopt 28 [r12];
  D12():
    deopt 33 [n4];
  L7(r18):
    c2 = `as.logical`(r18);
    if c2 then L53() else L8();
  L43():
    goto L5();
  L47():
    n5 = force? n4;
    checkMissing(n5);
    as_integer = ldf `as.integer` in base;
    r16 = dyn as_integer(n5);
    check L48() else D13();
  L49():
    n6 = ld n;
    check L51() else D14();
  L50():
    r17 = dyn base1(<sym n>);
    goto L7(r17);
  D13():
    deopt 36 [r16];
  D14():
    deopt 40 [n6];
  L8():
    goto L9();
  L9():
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L48():
    goto L6(r16);
  L51():
    n7 = force? n6;
    checkMissing(n7);
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(n7);
    check L52() else D15();
  L53():
    stop2 = ldf stop;
    check L54() else D16();
  D15():
    deopt 43 [r19];
  D16():
    deopt 45 [];
  L10(r23):
    st `complex.x` = r23;
    sym3 = ldf all;
    base3 = ldf all in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L52():
    goto L7(r19);
  L54():
    r20 = dyn stop2("invalid nrow(x)");
    check L55() else D17();
  L57():
    x7 = ld x;
    check L59() else D18();
  L58():
    r22 = dyn base2(<sym x>);
    goto L10(r22);
  D17():
    deopt 47 [r20];
  D18():
    deopt 51 [x7];
  L11(r25):
    r30 = `!`(r25);
    c4 = `as.logical`(r30);
    if c4 then L67() else L13();
  L55():
    goto L9();
  L59():
    x8 = force? x7;
    checkMissing(x8);
    c3 = `is.complex`(x8);
    goto L10(c3);
  L60():
    sym4 = ldf `is.finite`;
    base4 = ldf `is.finite` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L61():
    r24 = dyn base3(<lang is.finite(x)>);
    goto L11(r24);
  L12(r27):
    all = ldf all in base;
    r29 = dyn all(r27);
    check L66() else D21();
  L13():
    goto L14();
  L14():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L62():
    x9 = ld x;
    check L64() else D19();
  L63():
    r26 = dyn base4(<sym x>);
    goto L12(r26);
  L67():
    stop3 = ldf stop;
    check L68() else D22();
  D19():
    deopt 59 [x9];
  D21():
    deopt 64 [r29];
  D22():
    deopt 67 [];
  L15(r34):
    c5 = `as.logical`(r34);
    if c5 then L73() else L16();
  L64():
    x10 = force? x9;
    checkMissing(x10);
    is_finite = ldf `is.finite` in base;
    r28 = dyn is_finite(x10);
    check L65() else D20();
  L66():
    goto L11(r29);
  L68():
    r31 = dyn stop3("infinite or missing values in 'x'");
    check L69() else D23();
  L71():
    missing = ldf missing in base;
    r35 = dyn missing(<sym symmetric>);
    goto L15(r35);
  L72():
    r33 = dyn base5(<sym symmetric>);
    goto L15(r33);
  D20():
    deopt 62 [r28];
  D23():
    deopt 69 [r31];
  L16():
    goto L17();
  L17():
    symmetric1 = ld symmetric;
    check L77() else D26();
  L65():
    goto L12(r28);
  L69():
    goto L14();
  L73():
    isSymmetric_matrix = ldf `isSymmetric.matrix`;
    check L74() else D24();
  D24():
    deopt 76 [];
  D26():
    deopt 82 [symmetric1];
  L74():
    p4 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r37 = dyn isSymmetric_matrix(p4);
    check L75() else D25();
  L77():
    symmetric2 = force? symmetric1;
    checkMissing(symmetric2);
    c6 = `as.logical`(symmetric2);
    if c6 then L78() else L18();
  D25():
    deopt 78 [r37];
  L18():
    complex_x2 = ld `complex.x`;
    check L95() else D36();
  L22():
    only_values9 = ld `only.values`;
    check L110() else D45();
  L75():
    st symmetric = r37;
    goto L17();
  L78():
    complex_x = ld `complex.x`;
    check L79() else D27();
  D27():
    deopt 84 [complex_x];
  D36():
    deopt 109 [complex_x2];
  D45():
    deopt 136 [only_values9];
  L79():
    complex_x1 = force? complex_x;
    checkMissing(complex_x1);
    r39 = `!`(complex_x1);
    c7 = `as.logical`(r39);
    if c7 then L80() else L19();
  L95():
    complex_x3 = force? complex_x2;
    checkMissing(complex_x3);
    r53 = `!`(complex_x3);
    c9 = `as.logical`(r53);
    if c9 then L96() else L23();
  L110():
    only_values10 = force? only_values9;
    checkMissing(only_values10);
    c11 = `as.logical`(only_values10);
    if c11 then L111() else L26();
  L19():
    sym7 = ldf `.Internal`;
    base7 = ldf `.Internal` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  L21(r43):
    st z = r43;
    rev = ldf rev;
    check L92() else D34();
  L23():
    sym10 = ldf `.Internal`;
    base10 = ldf `.Internal` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L103() else L104();
  L25(r57):
    st z = r57;
    sort_list = ldf `sort.list`;
    check L108() else D43();
  L26():
    structure = ldf structure;
    check L125() else D49();
  L80():
    sym6 = ldf `.Internal`;
    base6 = ldf `.Internal` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L96():
    sym9 = ldf `.Internal`;
    base9 = ldf `.Internal` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L97() else L98();
  L111():
    sym12 = ldf list;
    base12 = ldf list in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L112() else L113();
  D34():
    deopt 105 [];
  D43():
    deopt 130 [];
  D49():
    deopt 152 [];
  L20(r41):
    goto L21(r41);
  L24(r55):
    goto L25(r55);
  L27(r67):
    popenv;
    return r67;
  L81():
    x13 = ld x;
    check L83() else D28();
  L82():
    r40 = dyn base6(<lang La_rs(x, only.values)>);
    goto L20(r40);
  L87():
    x15 = ld x;
    check L89() else D31();
  L88():
    r44 = dyn base7(<lang La_rs_cmplx(x, only.values)>);
    goto L21(r44);
  L92():
    p5 = prom<V +>{
      sym8 = ldf seq_along;
      base8 = ldf seq_along in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c8 = `is.object`(z1);
      if c8 then L4() else L5(z1);
    L2():
      r46 = dyn base8(<lang `$`(z, values)>);
      goto L0(r46);
    L3(dx1):
      r49 = seq_along(dx1);
      goto L0(r49);
    L4():
      dr = tryDispatchBuiltin.1("$", z1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(z3):
      r48 = `$`(z3, <sym values>);
      goto L3(r48);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    r51 = dyn rev(p5);
    check L93() else D35();
  L97():
    x17 = ld x;
    check L99() else D37();
  L98():
    r54 = dyn base9(<lang La_rg(x, only.values)>);
    goto L24(r54);
  L103():
    x19 = ld x;
    check L105() else D40();
  L104():
    r58 = dyn base10(<lang La_rg_cmplx(x, only.values)>);
    goto L25(r58);
  L108():
    p6 = prom<V +>{
      sym11 = ldf Mod;
      base11 = ldf Mod in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c10 = `is.object`(z5);
      if c10 then L4() else L5(z5);
    L2():
      r60 = dyn base11(<lang `$`(z, values)>);
      goto L0(r60);
    L3(dx3):
      Mod = ldf Mod in base;
      r63 = dyn Mod(dx3);
      goto L0(r63);
    L4():
      dr2 = tryDispatchBuiltin.1("$", z5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(z7):
      r62 = `$`(z7, <sym values>);
      goto L3(r62);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r65 = dyn sort_list[, decreasing](p6, TRUE);
    check L109() else D44();
  L112():
    z8 = ld z;
    check L114() else D46();
  L113():
    r66 = dyn base12[values, vectors](<lang `[`(`$`(z, values), ord)>, NULL);
    goto L27(r66);
  L125():
    p7 = prom<V +>{
      sym13 = ldf list;
      base13 = ldf list in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L3() else L4();
    L0(r72):
      return r72;
    L3():
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      c14 = `is.object`(z13);
      if c14 then L6() else L7(z13);
    L4():
      r71 = dyn base13[values, vectors](<lang `[`(`$`(z, values), ord)>, <lang `[`(`$`(z, vectors), , ord, drop=FALSE)>);
      goto L0(r71);
    L5(dx11):
      c15 = `is.object`(dx11);
      if c15 then L9() else L10(dx11);
    L6():
      dr8 = tryDispatchBuiltin.1("$", z13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L8() else L7(dr8);
    L7(z15):
      r73 = `$`(z15, <sym values>);
      goto L5(r73);
    L1(dx15):
      z16 = ld z;
      z17 = force? z16;
      checkMissing(z17);
      c16 = `is.object`(z17);
      if c16 then L13() else L14(z17);
    L8():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L5(dx10);
    L9():
      dr10 = tryDispatchBuiltin.1("[", dx11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L11() else L10(dr10);
    L10(dx13):
      ord2 = ld ord;
      ord3 = force? ord2;
      __1 = ldf `[` in base;
      r74 = dyn __1(dx13, ord3);
      goto L1(r74);
    L11():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx14);
    L12(dx17):
      c17 = `is.object`(dx17);
      if c17 then L16() else L17();
    L13():
      dr12 = tryDispatchBuiltin.1("$", z17);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L15() else L14(dr12);
    L14(z19):
      r75 = `$`(z19, <sym vectors>);
      goto L12(r75);
    L2(dx21):
      list1 = ldf list in base;
      r77 = dyn list1(dx15, dx21);
      goto L0(r77);
    L15():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L12(dx16);
    L16():
      dr14 = tryDispatchBuiltin.1("[", dx17);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L18() else L17();
    L17():
      ord4 = ld ord;
      ord5 = force? ord4;
      __2 = ldf `[` in base;
      r76 = dyn __2(dx17, <missing>, ord5, FALSE);
      goto L2(r76);
    L18():
      dx20 = getTryDispatchBuiltinValue(dr14);
      goto L2(dx20);
    };
    r79 = dyn structure[class, ]("eigen", p7);
    check L126() else D50();
  D28():
    deopt 89 [x13];
  D31():
    deopt 97 [x15];
  D35():
    deopt 107 [r51];
  D37():
    deopt 114 [x17];
  D40():
    deopt 122 [x19];
  D44():
    deopt 134 [r65];
  D46():
    deopt 140 [z8];
  D50():
    deopt 156 [r79];
  L83():
    x14 = force? x13;
    checkMissing(x14);
    only_values1 = ld `only.values`;
    check L84() else D29();
  L89():
    x16 = force? x15;
    checkMissing(x16);
    only_values3 = ld `only.values`;
    check L90() else D32();
  L93():
    st ord = r51;
    goto L22();
  L99():
    x18 = force? x17;
    checkMissing(x18);
    only_values5 = ld `only.values`;
    check L100() else D38();
  L105():
    x20 = force? x19;
    checkMissing(x20);
    only_values7 = ld `only.values`;
    check L106() else D41();
  L109():
    st ord = r65;
    goto L22();
  L114():
    z9 = force? z8;
    checkMissing(z9);
    c12 = `is.object`(z9);
    if c12 then L116() else L117(z9);
  L126():
    popenv;
    return r79;
  D29():
    deopt 91 [only_values1];
  D32():
    deopt 99 [only_values3];
  D38():
    deopt 116 [only_values5];
  D41():
    deopt 124 [only_values7];
  L84():
    only_values2 = force? only_values1;
    checkMissing(only_values2);
    La_rs = ldf La_rs in base;
    r42 = dyn La_rs(x14, only_values2);
    check L85() else D30();
  L90():
    only_values4 = force? only_values3;
    checkMissing(only_values4);
    La_rs_cmplx = ldf La_rs_cmplx in base;
    r45 = dyn La_rs_cmplx(x16, only_values4);
    check L91() else D33();
  L100():
    only_values6 = force? only_values5;
    checkMissing(only_values6);
    La_rg = ldf La_rg in base;
    r56 = dyn La_rg(x18, only_values6);
    check L101() else D39();
  L106():
    only_values8 = force? only_values7;
    checkMissing(only_values8);
    La_rg_cmplx = ldf La_rg_cmplx in base;
    r59 = dyn La_rg_cmplx(x20, only_values8);
    check L107() else D42();
  L115(dx5):
    c13 = `is.object`(dx5);
    if c13 then L119() else L120(dx5);
  L116():
    dr4 = tryDispatchBuiltin.1("$", z9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L118() else L117(dr4);
  L117(z11):
    r68 = `$`(z11, <sym values>);
    goto L115(r68);
  D30():
    deopt 94 [r42];
  D33():
    deopt 102 [r45];
  D39():
    deopt 119 [r56];
  D42():
    deopt 127 [r59];
  L28(dx9):
    list = ldf list in base;
    r70 = dyn list(dx9, NULL);
    check L123() else D48();
  L85():
    goto L20(r42);
  L91():
    goto L21(r45);
  L101():
    goto L24(r56);
  L107():
    goto L25(r59);
  L118():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L115(dx4);
  L119():
    dr6 = tryDispatchBuiltin.1("[", dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L121() else L120(dr6);
  L120(dx7):
    ord = ld ord;
    check L122() else D47();
  D47():
    deopt 143 [dx7, ord];
  D48():
    deopt 150 [r70];
  L121():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L28(dx8);
  L122():
    ord1 = force? ord;
    __ = ldf `[` in base;
    r69 = dyn __(dx7, ord1);
    goto L28(r69);
  L123():
    goto L27(r70);
  }
}