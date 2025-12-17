fun main() {
  () -+> V { reg r:cls, reg setNames:cls, reg p:p(V +), reg p1:p(V +), reg r3:V, reg symnum:cls, reg ii:*, reg ii1:V, reg p2:p(V +), reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg c:cls, reg r8:V, reg p4:p(V +), reg r10:V, reg symnum1:cls, reg ii2:*, reg ii3:V, reg p5:p(V +), reg p6:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg c1:cls, reg r15:V, reg p7:p(V +), reg r17:V, reg symnum2:cls, reg r18:V, reg __:cls, reg r19:V, reg r20:V, reg p8:p(V +), reg r22:V, reg t:cls, reg sapply:cls, reg N:*, reg N1:V, reg r23:V, reg p9:p(V +), reg r25:cls, reg p10:p(V +), reg r27:V, reg p11:p(V +), reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg rep:cls, reg r32:V, reg l:*, reg rownames__:cls, reg r33:V, reg symnum3:cls, reg pascal:*, reg pascal1:V, reg __1:cls, reg r34:V, reg p12:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg c2:cls, reg r38:V, reg p13:p(V +), reg r40:V, reg symnum4:cls, reg cor:cls, reg attitude:*, reg attitude1:V, reg p14:p(V +), reg r42:V, reg p15:p(V +), reg r44:V, reg symnum5:cls, reg cor1:cls, reg attitude2:*, reg attitude3:V, reg p16:p(V +), reg r46:V, reg p17:p(V +), reg r48:V, reg symnum6:cls, reg cor2:cls, reg attitude4:*, reg attitude5:V, reg p18:p(V +), reg r50:V, reg p19:p(V +), reg r52:V, reg symnum7:cls, reg cor3:cls, reg attitude6:*, reg attitude7:V, reg p20:p(V +), reg r54:V, reg p21:p(V +), reg r56:V, reg symnum8:cls, reg cor4:cls, reg rbind:cls, reg rnorm:cls, reg r57:V, reg p22:p(V +), reg rnorm1:cls, reg r59:V, reg r60:V, reg p23:p(V +), reg r62:V, reg p24:p(V +), reg r64:V, reg p25:p(V +), reg r66:V, reg symnum9:cls, reg cor5:cls, reg matrix:cls, reg rexp:cls, reg r67:V, reg p26:p(V +), reg r69:V, reg p27:p(V +), reg r71:V, reg p28:p(V +), reg r73:V, reg symnum10:cls, reg cor6:cls, reg matrix1:cls, reg rnorm2:cls, reg r74:V, reg p29:p(V +), reg r76:V, reg p30:p(V +), reg r78:V, reg p31:p(V +), reg r80:V, reg symnum11:cls, reg cm1:*, reg cm2:V, reg p32:p(V +), reg r82:V, reg symnum12:cls, reg cor7:cls, reg matrix2:cls, reg rnorm3:cls, reg r83:V, reg p33:p(V +), reg r85:V, reg p34:p(V +), reg r87:V, reg p35:p(V +), reg r89:V, reg symnum13:cls, reg cm3:*, reg cm4:V, reg p36:p(V +), reg r91:V, reg cor8:cls, reg matrix3:cls, reg rnorm4:cls, reg r92:V, reg p37:p(V +), reg r94:V, reg p38:p(V +), reg r96:V, reg l1:*, reg c3:L, reg r98:L, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r105:V, reg r106:L, reg l6:*, reg r107:L, reg r108:V, reg c4:cls, reg r109:V, reg ___:cls, reg r110:V, reg symnum14:cls, reg Cm:*, reg Cm1:V, reg p39:p(V +), reg r112:V, reg rev:cls, reg sort:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r113:V, reg r114:V, reg outer:cls, reg p40:p(V +), reg p41:p(V +), reg r117:V, reg c5:cls, reg r118:V, reg p42:p(V +), reg r120:V, reg p43:p(V +), reg r122:V, reg symnum15:cls, reg pval:*, reg pval1:V, reg p44:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r124:V, reg r125:V, reg c6:cls, reg r126:V, reg p45:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r128:V, reg r129:V, reg c7:cls, reg r130:V, reg p46:p(V +), reg r132:V, reg noquote:cls, reg cbind:cls, reg format:cls, reg pval2:*, reg pval3:V, reg p47:p(V +), reg r134:V, reg p48:p(V +), reg symp:*, reg symp1:V, reg p49:p(V +), reg r137:V, reg p50:p(V +), reg r139:V |
    mkenv;
    r = clos inner1897145365;
    st symnum = r;
    setNames = ldf setNames;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p = prom<V +>{
      return <int 0, 1, 2, 3, 4, 5, 6, 7, 8>;
    };
    p1 = prom<V +>{
      return <int 0, 1, 2, 3, 4, 5, 6, 7, 8>;
    };
    r3 = dyn setNames(p, p1);
    check L4() else D1();
  D1():
    deopt 7 [r3];
  L4():
    st ii = r3;
    symnum = ldf symnum;
    check L5() else D2();
  D2():
    deopt 10 [];
  L5():
    p2 = prom<V +>{
      ii = ld ii;
      ii1 = force? ii;
      checkMissing(ii1);
      return ii1;
    };
    p3 = prom<V +>{
      return <real 0.0, 2.0, 4.0, 6.0, 8.0>;
    };
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c = ldf c in base;
      r8 = dyn c(".", "-", "+", "$");
      goto L0(r8);
    L2():
      r6 = dyn base(".", "-", "+", "$");
      goto L0(r6);
    };
    r10 = dyn symnum[, cutpoints, symbols](p2, p3, p4);
    check L6() else D3();
  D3():
    deopt 16 [r10];
  L6():
    symnum1 = ldf symnum;
    check L7() else D4();
  D4():
    deopt 18 [];
  L7():
    p5 = prom<V +>{
      ii2 = ld ii;
      ii3 = force? ii2;
      checkMissing(ii3);
      return ii3;
    };
    p6 = prom<V +>{
      return <real 0.0, 2.0, 4.0, 6.0, 8.0>;
    };
    p7 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c1 = ldf c in base;
      r15 = dyn c1(".", "-", "+", "$");
      goto L0(r15);
    L2():
      r13 = dyn base1(".", "-", "+", "$");
      goto L0(r13);
    };
    r17 = dyn symnum1[, cutpoints, symbols, `show.max`](p5, p6, p7, TRUE);
    check L8() else D5();
  D5():
    deopt 26 [r17];
  L8():
    symnum2 = ldf symnum;
    check L9() else D6();
  D6():
    deopt 28 [];
  L9():
    p8 = prom<V +>{
      r18 = `:`(1.0, 12.0);
      __ = ldf `%%` in base;
      r19 = dyn __(r18, 3.0);
      r20 = `==`(r19, 0.0);
      return r20;
    };
    r22 = dyn symnum2(p8);
    check L10() else D7();
  D7():
    deopt 30 [r22];
  L10():
    st N = 38.0;
    t = ldf t;
    check L11() else D8();
  D8():
    deopt 35 [];
  L11():
    p11 = prom<V +>{
      sapply = ldf sapply;
      p9 = prom<V +>{
        N = ld N;
        N1 = force? N;
        checkMissing(N1);
        r23 = `:`(0.0, N1);
        return r23;
      };
      p10 = prom<V +>{
        r25 = clos inner4266987626;
        return r25;
      };
      r27 = dyn sapply(p9, p10);
      return r27;
    };
    r29 = dyn t(p11);
    check L12() else D9();
  D9():
    deopt 37 [r29];
  L12():
    st pascal = r29;
    sym2 = ldf rep;
    base2 = ldf rep in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L0(r31):
    l = ld pascal;
    rownames__ = ldf `rownames<-`;
    check L15() else D10();
  L13():
    rep = ldf rep in base;
    r32 = dyn rep("", <lang `+`(1.0, N)>);
    goto L0(r32);
  L14():
    r30 = dyn base2("", <lang `+`(1.0, N)>);
    goto L0(r30);
  D10():
    deopt 43 [r31, l, r31];
  L15():
    r33 = dyn rownames__(l, NULL, r31);
    check L16() else D11();
  D11():
    deopt 45 [r31, r33];
  L16():
    st pascal = r33;
    symnum3 = ldf symnum;
    check L17() else D12();
  D12():
    deopt 48 [];
  L17():
    p12 = prom<V +>{
      pascal = ld pascal;
      pascal1 = force? pascal;
      checkMissing(pascal1);
      __1 = ldf `%%` in base;
      r34 = dyn __1(pascal1, 2.0);
      return r34;
    };
    p13 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      c2 = ldf c in base;
      r38 = dyn c2(" ", "A");
      goto L0(r38);
    L2():
      r36 = dyn base3(" ", "A");
      goto L0(r36);
    };
    r40 = dyn symnum3[, symbols, `numeric.x`](p12, p13, FALSE);
    check L18() else D13();
  D13():
    deopt 54 [r40];
  L18():
    symnum4 = ldf symnum;
    check L19() else D14();
  D14():
    deopt 56 [];
  L19():
    p15 = prom<V +>{
      cor = ldf cor;
      p14 = prom<V +>{
        attitude = ld attitude;
        attitude1 = force? attitude;
        checkMissing(attitude1);
        return attitude1;
      };
      r42 = dyn cor(p14);
      return r42;
    };
    r44 = dyn symnum4[, `diag.lower.tri`](p15, FALSE);
    check L20() else D15();
  D15():
    deopt 60 [r44];
  L20():
    symnum5 = ldf symnum;
    check L21() else D16();
  D16():
    deopt 62 [];
  L21():
    p17 = prom<V +>{
      cor1 = ldf cor;
      p16 = prom<V +>{
        attitude2 = ld attitude;
        attitude3 = force? attitude2;
        checkMissing(attitude3);
        return attitude3;
      };
      r46 = dyn cor1(p16);
      return r46;
    };
    r48 = dyn symnum5[, `abbr.colnames`](p17, NULL);
    check L22() else D17();
  D17():
    deopt 66 [r48];
  L22():
    symnum6 = ldf symnum;
    check L23() else D18();
  D18():
    deopt 68 [];
  L23():
    p19 = prom<V +>{
      cor2 = ldf cor;
      p18 = prom<V +>{
        attitude4 = ld attitude;
        attitude5 = force? attitude4;
        checkMissing(attitude5);
        return attitude5;
      };
      r50 = dyn cor2(p18);
      return r50;
    };
    r52 = dyn symnum6[, `abbr.colnames`](p19, FALSE);
    check L24() else D19();
  D19():
    deopt 72 [r52];
  L24():
    symnum7 = ldf symnum;
    check L25() else D20();
  D20():
    deopt 74 [];
  L25():
    p21 = prom<V +>{
      cor3 = ldf cor;
      p20 = prom<V +>{
        attitude6 = ld attitude;
        attitude7 = force? attitude6;
        checkMissing(attitude7);
        return attitude7;
      };
      r54 = dyn cor3(p20);
      return r54;
    };
    r56 = dyn symnum7[, `abbr.colnames`](p21, 2.0);
    check L26() else D21();
  D21():
    deopt 78 [r56];
  L26():
    symnum8 = ldf symnum;
    check L27() else D22();
  D22():
    deopt 80 [];
  L27():
    p25 = prom<V +>{
      cor4 = ldf cor;
      p24 = prom<V +>{
        rbind = ldf rbind;
        p22 = prom<V +>{
          rnorm = ldf rnorm;
          r57 = dyn rnorm(25.0);
          return r57;
        };
        p23 = prom<V +>{
          rnorm1 = ldf rnorm;
          r59 = dyn rnorm1(25.0);
          r60 = `^`(r59, 2.0);
          return r60;
        };
        r62 = dyn rbind(1.0, p22, p23);
        return r62;
      };
      r64 = dyn cor4(p24);
      return r64;
    };
    r66 = dyn symnum8(p25);
    check L28() else D23();
  D23():
    deopt 82 [r66];
  L28():
    symnum9 = ldf symnum;
    check L29() else D24();
  D24():
    deopt 84 [];
  L29():
    p28 = prom<V +>{
      cor5 = ldf cor;
      p27 = prom<V +>{
        matrix = ldf matrix;
        p26 = prom<V +>{
          rexp = ldf rexp;
          r67 = dyn rexp(30.0, 1.0);
          return r67;
        };
        r69 = dyn matrix(p26, 5.0, 18.0);
        return r69;
      };
      r71 = dyn cor5(p27);
      return r71;
    };
    r73 = dyn symnum9(p28);
    check L30() else D25();
  D25():
    deopt 86 [r73];
  L30():
    symnum10 = ldf symnum;
    check L31() else D26();
  D26():
    deopt 88 [];
  L31():
    p31 = prom<V +>{
      cor6 = ldf cor;
      p30 = prom<V +>{
        matrix1 = ldf matrix;
        p29 = prom<V +>{
          rnorm2 = ldf rnorm;
          r74 = dyn rnorm2(90.0);
          return r74;
        };
        r76 = dyn matrix1(p29, 5.0, 18.0);
        return r76;
      };
      r78 = dyn cor6(p30);
      st cm1 = r78;
      invisible.0();
      return r78;
    };
    r80 = dyn symnum10(p31);
    check L32() else D27();
  D27():
    deopt 90 [r80];
  L32():
    symnum11 = ldf symnum;
    check L33() else D28();
  D28():
    deopt 92 [];
  L33():
    p32 = prom<V +>{
      cm1 = ld cm1;
      cm2 = force? cm1;
      checkMissing(cm2);
      return cm2;
    };
    r82 = dyn symnum11[, `diag.lower.tri`](p32, FALSE);
    check L34() else D29();
  D29():
    deopt 96 [r82];
  L34():
    symnum12 = ldf symnum;
    check L35() else D30();
  D30():
    deopt 98 [];
  L35():
    p35 = prom<V +>{
      cor7 = ldf cor;
      p34 = prom<V +>{
        matrix2 = ldf matrix;
        p33 = prom<V +>{
          rnorm3 = ldf rnorm;
          r83 = dyn rnorm3(900.0);
          return r83;
        };
        r85 = dyn matrix2(p33, 50.0, 18.0);
        return r85;
      };
      r87 = dyn cor7(p34);
      st cm2 = r87;
      invisible.0();
      return r87;
    };
    r89 = dyn symnum12(p35);
    check L36() else D31();
  D31():
    deopt 100 [r89];
  L36():
    symnum13 = ldf symnum;
    check L37() else D32();
  D32():
    deopt 102 [];
  L37():
    p36 = prom<V +>{
      cm3 = ld cm2;
      cm4 = force? cm3;
      checkMissing(cm4);
      return cm4;
    };
    r91 = dyn symnum13[, `lower.triangular`](p36, FALSE);
    check L38() else D33();
  D33():
    deopt 106 [r91];
  L38():
    cor8 = ldf cor;
    check L39() else D34();
  D34():
    deopt 108 [];
  L39():
    p38 = prom<V +>{
      matrix3 = ldf matrix;
      p37 = prom<V +>{
        rnorm4 = ldf rnorm;
        r92 = dyn rnorm4(60.0);
        return r92;
      };
      r94 = dyn matrix3(p37, 10.0, 6.0);
      return r94;
    };
    r96 = dyn cor8(p38);
    check L40() else D35();
  D35():
    deopt 110 [r96];
  L40():
    st Cm = r96;
    l1 = ld Cm;
    c3 = `is.object`(l1);
    if c3 then L41() else L42(NA_LGL, l1);
  L1(dx1):
    st Cm = dx1;
    symnum14 = ldf symnum;
    check L47() else D37();
  L41():
    dr = tryDispatchBuiltin.0("[<-", l1, NA_LGL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(NA_LGL, dr);
  L42(r98, l3):
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D37():
    deopt 125 [];
  L2(r106, l6, r107, r108):
    ___ = ldf `[<-` in base;
    r110 = dyn ___(l6, r107, r108, 2.0);
    goto L1(r110);
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L44():
    c4 = ldf c in base;
    r109 = dyn c4(3.0, 6.0);
    check L46() else D36();
  L45():
    r105 = dyn base4(3.0, 6.0);
    goto L2(r98, l3, NA_LGL, r105);
  L47():
    p39 = prom<V +>{
      Cm = ld Cm;
      Cm1 = force? Cm;
      checkMissing(Cm1);
      return Cm1;
    };
    r112 = dyn symnum14[, `show.max`](p39, NULL);
    check L48() else D38();
  D36():
    deopt 120 [r98, l3, NA_LGL, r109];
  D38():
    deopt 129 [r112];
  L46():
    goto L2(r98, l3, NA_LGL, r109);
  L48():
    rev = ldf rev;
    check L49() else D39();
  D39():
    deopt 131 [];
  L49():
    p43 = prom<V +>{
      sort = ldf sort;
      p42 = prom<V +>{
        sym5 = ldf c;
        base5 = ldf c in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r114):
        return r114;
      L1():
        outer = ldf outer;
        p40 = prom<V +>{
          return <int 1, 2, 3, 4, 5, 6>;
        };
        p41 = prom<V +>{
          return <real 0.1, 0.01, 0.001>;
        };
        r117 = dyn outer(p40, p41);
        c5 = ldf c in base;
        r118 = dyn c5(r117);
        goto L0(r118);
      L2():
        r113 = dyn base5(<lang outer(`:`(1.0, 6.0), `^`(10.0, `-`(`(`(`:`(1.0, 3.0)))))>);
        goto L0(r113);
      };
      r120 = dyn sort(p42);
      return r120;
    };
    r122 = dyn rev(p43);
    check L50() else D40();
  D40():
    deopt 133 [r122];
  L50():
    st pval = r122;
    symnum15 = ldf symnum;
    check L51() else D41();
  D41():
    deopt 136 [];
  L51():
    p44 = prom<V +>{
      pval = ld pval;
      pval1 = force? pval;
      checkMissing(pval1);
      return pval1;
    };
    p45 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r125):
      return r125;
    L1():
      c6 = ldf c in base;
      r126 = dyn c6(0.0, 0.001, 0.01, 0.05, 0.1, 1.0);
      goto L0(r126);
    L2():
      r124 = dyn base6(0.0, 0.001, 0.01, 0.05, 0.1, 1.0);
      goto L0(r124);
    };
    p46 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r129):
      return r129;
    L1():
      c7 = ldf c in base;
      r130 = dyn c7("***", "**", "*", ".", " ");
      goto L0(r130);
    L2():
      r128 = dyn base7("***", "**", "*", ".", " ");
      goto L0(r128);
    };
    r132 = dyn symnum15[, corr, cutpoints, symbols](p44, FALSE, p45, p46);
    check L52() else D42();
  D42():
    deopt 144 [r132];
  L52():
    st symp = r132;
    noquote = ldf noquote;
    check L53() else D43();
  D43():
    deopt 147 [];
  L53():
    p50 = prom<V +>{
      cbind = ldf cbind;
      p48 = prom<V +>{
        format = ldf format;
        p47 = prom<V +>{
          pval2 = ld pval;
          pval3 = force? pval2;
          checkMissing(pval3);
          return pval3;
        };
        r134 = dyn format(p47);
        return r134;
      };
      p49 = prom<V +>{
        symp = ld symp;
        symp1 = force? symp;
        checkMissing(symp1);
        return symp1;
      };
      r137 = dyn cbind[`P.val`, Signif](p48, p49);
      return r137;
    };
    r139 = dyn noquote(p50);
    check L54() else D44();
  D44():
    deopt 149 [r139];
  L54():
    popenv;
    return r139;
  }
}
fun inner1897145365(x, cutpoints, symbols, legend, na, eps, `numeric.x`, corr, `show.max`, `show.min`, `abbr.colnames`, `lower.triangular`, `diag.lower.tri`) {
  (reg x:*, reg cutpoints:*, reg symbols:*, reg legend:*, reg na:*, reg eps:*, reg numeric_x:*, reg corr:*, reg show_max:*, reg show_min:*, reg abbr_colnames:*, reg lower_triangular:*, reg diag_lower_tri:*) -+> V { var x:*, var cutpoints:*, reg cutpoints_isMissing:L, reg cutpoints_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var symbols:*, reg symbols_isMissing:L, reg symbols_orDefault:*, reg numeric_x1:*, reg numeric_x2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c2:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c3:cls, reg r9:V, reg p1:p(V +), var legend:*, reg legend_isMissing:L, reg legend_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg symbols1:*, reg symbols2:V, reg length:cls, reg r13:V, reg r14:V, reg p2:p(V +), var na:*, reg na_isMissing:L, reg na_orDefault:*, var eps:*, reg eps_isMissing:L, reg eps_orDefault:*, var `numeric.x`:*, reg numeric_x_isMissing:L, reg numeric_x_orDefault:*, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r18:V, reg p3:p(V +), var corr:*, reg corr_isMissing:L, reg corr_orDefault:*, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg missing:cls, reg r22:V, reg c4:L, reg c6:V, reg numeric_x3:*, reg numeric_x4:V, reg c7:L, reg c8:V, reg p4:p(V +), var `show.max`:*, reg show_max_isMissing:L, reg show_max_orDefault:*, reg corr1:*, reg corr2:V, reg c10:L, reg p5:p(V +), var `show.min`:*, reg show_min_isMissing:L, reg show_min_orDefault:*, var `abbr.colnames`:*, reg abbr_colnames_isMissing:L, reg abbr_colnames_orDefault:*, reg has_colnames:*, reg has_colnames1:V, reg p6:p(V +), var `lower.triangular`:*, reg lower_triangular_isMissing:L, reg lower_triangular_orDefault:*, reg corr3:*, reg corr4:V, reg c11:L, reg c13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg c16:L, reg r27:V, reg x3:*, reg x4:V, reg is_numeric1:cls, reg r28:V, reg c17:L, reg c18:V, reg c20:L, reg c22:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg c25:L, reg r30:V, reg x5:*, reg x6:V, reg is_matrix:cls, reg r31:V, reg c26:L, reg c27:V, reg p7:p(V +), var `diag.lower.tri`:*, reg diag_lower_tri_isMissing:L, reg diag_lower_tri_orDefault:*, reg corr5:*, reg corr6:V, reg c29:L, reg c31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg c34:L, reg r34:V, reg show_max1:*, reg show_max2:V, reg c35:V, reg r35:V, reg c36:L, reg c37:V, reg p8:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg r38:V, reg x7:*, reg x8:V, reg length1:cls, reg r39:V, reg r40:V, reg c39:L, reg noquote:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r41:V, reg r42:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r43:V, reg r44:V, reg x9:*, reg x10:V, reg dim:cls, reg r45:V, reg c40:V, reg c41:L, reg character:cls, reg r46:V, reg array:cls, reg d:*, reg d1:V, reg p9:p(V +), reg r48:V, reg p10:p(V +), reg r50:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r53:V, reg r54:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r55:V, reg r56:V, reg x11:*, reg x12:V, reg is_na:cls, reg r57:V, reg any:cls, reg r58:V, reg numeric_x5:*, reg numeric_x6:V, reg c42:L, reg force:cls, reg corr7:*, reg corr8:V, reg p11:p(V +), reg r60:V, reg sort:cls, reg cutpoints1:*, reg cutpoints2:V, reg p12:p(V +), reg r62:V, reg corr9:*, reg corr10:V, reg c43:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r63:V, reg r64:V, reg cutpoints3:*, reg cutpoints4:V, reg c44:cls, reg r65:V, reg anyDuplicated:cls, reg cutpoints5:*, reg cutpoints6:V, reg p13:p(V +), reg r68:V, reg c45:L, reg c46:V, reg corr11:*, reg corr12:V, reg c48:L, reg c51:L, reg c52:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r69:V, reg c57:L, reg c58:L, reg r70:V, reg cutpoints7:*, reg cutpoints8:V, reg r71:V, reg any1:cls, reg r72:V, reg c59:L, reg c60:L, reg c61:L, reg c62:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r73:V, reg c72:L, reg c73:L, reg c74:L, reg r74:V, reg cutpoints9:*, reg cutpoints10:V, reg r75:V, reg any2:cls, reg r76:V, reg c75:L, reg c76:V, reg c80:L, reg c81:V, reg c84:L, reg c85:V, reg c87:L, reg stop:cls, reg corr13:*, reg corr14:V, reg c88:L, reg gettext:cls, reg r77:V, reg gettext1:cls, reg r78:V, reg p14:p(V +), reg paste:cls, reg format:cls, reg cutpoints11:*, reg cutpoints12:V, reg p15:p(V +), reg r81:V, reg p16:p(V +), reg r83:V, reg p17:p(V +), reg r85:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r87:V, reg r88:V, reg cutpoints13:*, reg cutpoints14:V, reg length2:cls, reg r89:V, reg cutpoints15:*, reg cutpoints16:V, reg c89:L, reg cutpoints18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r90:V, reg cutpoints19:*, reg cutpoints20:V, reg c90:L, reg cutpoints22:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nc:*, reg nc1:V, reg __1:cls, reg r91:V, reg corr15:*, reg corr16:V, reg c91:L, reg gettext2:cls, reg r92:V, reg r93:V, reg gettextf:cls, reg format1:cls, reg minc:*, reg minc1:V, reg p18:p(V +), reg r95:V, reg p19:p(V +), reg format2:cls, reg maxc:*, reg maxc1:V, reg p20:p(V +), reg r98:V, reg p21:p(V +), reg r100:V, reg corr17:*, reg corr18:V, reg c92:L, reg sym18:cls, reg base18:cls, reg guard18:L, reg r101:V, reg r102:V, reg x13:*, reg x14:V, reg abs:cls, reg r103:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r105:V, reg r106:V, reg x15:*, reg x16:V, reg minc2:*, reg minc3:V, reg eps1:*, reg eps2:V, reg r107:V, reg r108:V, reg any3:cls, reg r109:V, reg c93:L, reg stop1:cls, reg range_msg:*, reg range_msg1:V, reg p22:p(V +), reg r111:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r112:V, reg r113:V, reg x17:*, reg x18:V, reg maxc2:*, reg maxc3:V, reg eps3:*, reg eps4:V, reg r114:V, reg r115:V, reg any4:cls, reg r116:V, reg c94:L, reg stop2:cls, reg range_msg2:*, reg range_msg3:V, reg p23:p(V +), reg r118:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r120:V, reg r121:V, reg symbols3:*, reg symbols4:V, reg length3:cls, reg r122:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r123:V, reg r124:V, reg symbols5:*, reg symbols6:V, reg as_character:cls, reg r125:V, reg anyDuplicated1:cls, reg symbols7:*, reg symbols8:V, reg p24:p(V +), reg r127:V, reg c95:L, reg stop3:cls, reg paste1:cls, reg symbols9:*, reg symbols10:V, reg p25:p(V +), reg r129:V, reg p26:p(V +), reg r131:V, reg nc2:*, reg nc3:V, reg ns:*, reg ns1:V, reg r133:V, reg r134:V, reg c96:L, reg corr19:*, reg corr20:V, reg c97:L, reg stop4:cls, reg r135:V, reg r136:V, reg stop5:cls, reg r137:V, reg cut:cls, reg x19:*, reg x20:V, reg p27:p(V +), reg cutpoints23:*, reg cutpoints24:V, reg p28:p(V +), reg r141:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r142:V, reg r143:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r144:V, reg r145:V, reg iS:*, reg iS1:V, reg is_na1:cls, reg r146:V, reg any5:cls, reg r147:V, reg c98:L, reg l:*, reg c99:L, reg r149:R, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r151:R, reg dx5:V, reg which:cls, reg ii:*, reg ii1:V, reg p29:p(V +), reg r153:V, reg c100:L, reg r157:R, reg l4:*, reg r158:R, reg r159:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r162:R, reg l6:*, reg r163:R, reg dx7:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r170:V, reg r171:R, reg l9:*, reg r172:R, reg r173:V, reg r174:V, reg x21:*, reg x22:V, reg c101:L, reg r178:R, reg l11:*, reg r179:R, reg r180:V, reg x24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg r184:R, reg l13:*, reg r185:R, reg r186:V, reg dx9:V, reg ii2:*, reg ii3:V, reg __2:cls, reg r187:V, reg is_na2:cls, reg r188:V, reg r189:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r198:V, reg r199:R, reg l16:*, reg r200:R, reg r201:V, reg r202:V, reg r203:V, reg x25:*, reg x26:V, reg c102:L, reg r208:R, reg l18:*, reg r209:R, reg r210:V, reg r211:V, reg x28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r216:R, reg l20:*, reg r217:R, reg r218:V, reg r219:V, reg dx11:V, reg ii4:*, reg ii5:V, reg __3:cls, reg r220:V, reg minc4:*, reg minc5:V, reg r221:V, reg abs1:cls, reg r222:V, reg eps5:*, reg eps6:V, reg r223:V, reg r224:V, reg __4:cls, reg r225:V, reg ___:cls, reg r226:V, reg r227:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r229:V, reg r230:V, reg missing1:cls, reg r231:V, reg r232:V, reg c103:L, reg c105:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r233:V, reg c108:L, reg r234:V, reg symbols11:*, reg symbols12:V, reg length4:cls, reg r235:V, reg r236:V, reg c109:L, reg c110:V, reg c112:L, reg stop6:cls, reg r237:V, reg x29:*, reg x30:V, reg r239:V, reg has_na:*, reg has_na1:V, reg c113:L, reg character1:cls, reg sym29:cls, reg base29:cls, reg guard29:L, reg r240:V, reg r241:V, reg iS2:*, reg iS3:V, reg length5:cls, reg r242:V, reg p30:p(V +), reg r244:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r245:V, reg r246:V, reg na1:*, reg na2:V, reg c114:L, reg c115:L, reg na3:*, reg na4:V, reg l21:*, reg c116:L, reg na6:V, reg l23:*, reg dr12:V, reg dc6:L, reg dx12:V, reg na8:V, reg dx13:V, reg nax:*, reg nax1:V, reg ___1:cls, reg r247:V, reg symbols13:*, reg symbols14:V, reg c117:L, reg symbols16:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg iS4:*, reg iS5:V, reg c118:L, reg symbols18:V, reg iS7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg symbols20:V, reg dx17:V, reg nax2:*, reg nax3:V, reg r248:V, reg __5:cls, reg r249:V, reg __6:cls, reg r250:V, reg l24:*, reg c119:L, reg dx19:V, reg l26:*, reg dr18:V, reg dc9:L, reg dx21:V, reg dx22:V, reg dx23:V, reg nax4:*, reg nax5:V, reg r251:V, reg ___2:cls, reg r252:V, reg symbols21:*, reg symbols22:V, reg c120:L, reg symbols24:V, reg dr20:V, reg dc10:L, reg dx25:V, reg dx26:V, reg iS8:*, reg iS9:V, reg __7:cls, reg r253:V, reg numeric_x7:*, reg numeric_x8:V, reg c121:L, reg sym31:cls, reg base31:cls, reg guard31:L, reg r254:V, reg r255:V, reg show_max3:*, reg show_max4:V, reg c122:V, reg r256:V, reg c123:L, reg sym32:cls, reg base32:cls, reg guard32:L, reg r257:V, reg r258:V, reg show_max5:*, reg show_max6:V, reg c124:L, reg c125:L, reg show_max7:*, reg show_max8:V, reg show_max9:V, reg format3:cls, reg maxc4:*, reg maxc5:V, reg p31:p(V +), reg r260:V, reg l27:*, reg c126:L, reg show_max11:V, reg l29:*, reg dr22:V, reg dc11:L, reg dx27:V, reg show_max13:V, reg dx28:V, reg x31:*, reg x32:V, reg maxc6:*, reg maxc7:V, reg eps7:*, reg eps8:V, reg r261:V, reg r262:V, reg ___3:cls, reg r263:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r264:V, reg r265:V, reg show_min1:*, reg show_min2:V, reg c127:V, reg r266:V, reg c128:L, reg sym34:cls, reg base34:cls, reg guard34:L, reg r267:V, reg r268:V, reg show_min3:*, reg show_min4:V, reg c129:L, reg c130:L, reg show_min5:*, reg show_min6:V, reg show_min7:V, reg format4:cls, reg minc6:*, reg minc7:V, reg p32:p(V +), reg r270:V, reg l30:*, reg c131:L, reg show_min9:V, reg l32:*, reg dr24:V, reg dc12:L, reg dx29:V, reg show_min11:V, reg dx30:V, reg x33:*, reg x34:V, reg minc8:*, reg minc9:V, reg eps9:*, reg eps10:V, reg r271:V, reg r272:V, reg ___4:cls, reg r273:V, reg show_min12:V, reg lower_triangular1:*, reg lower_triangular2:V, reg c132:L, reg c134:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r274:V, reg c137:L, reg r275:V, reg x35:*, reg x36:V, reg is_matrix1:cls, reg r276:V, reg c138:L, reg c139:V, reg c141:L, reg l33:*, reg c142:L, reg r278:S, reg l35:*, reg dr26:V, reg dc13:L, reg dx31:V, reg r280:S, reg dx32:V, reg lower_tri:cls, reg x37:*, reg x38:V, reg p33:p(V +), reg diag_lower_tri1:*, reg diag_lower_tri2:V, reg p34:p(V +), reg r283:V, reg r284:V, reg ___5:cls, reg r285:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r287:V, reg r288:V, reg x39:*, reg x40:V, reg attributes:cls, reg r289:V, reg l36:*, reg attributes__:cls, reg r290:V, reg sym37:cls, reg base37:cls, reg guard37:L, reg r291:V, reg r292:V, reg ans:*, reg ans1:V, reg is_array:cls, reg r293:V, reg c143:L, reg c145:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r294:V, reg c148:L, reg r295:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r296:V, reg c151:L, reg r297:V, reg x41:*, reg x42:V, reg dim1:cls, reg r298:V, reg length6:cls, reg r299:V, reg r300:V, reg c152:L, reg c153:V, reg c155:L, reg sym40:cls, reg base40:cls, reg guard40:L, reg r301:V, reg r302:V, reg sym41:cls, reg base41:cls, reg guard41:L, reg r303:V, reg r304:V, reg ans2:*, reg ans3:V, reg dimnames:cls, reg r305:V, reg c156:V, reg r306:V, reg has_colnames2:*, reg has_colnames3:V, reg r307:V, reg c157:L, reg sym42:cls, reg base42:cls, reg guard42:L, reg r308:V, reg r309:V, reg rank:*, reg rank1:V, reg vector:cls, reg r310:V, reg l37:*, reg dimnames__:cls, reg r311:V, reg sym43:cls, reg base43:cls, reg guard43:L, reg r313:V, reg r314:V, reg sym44:cls, reg base44:cls, reg guard44:L, reg r315:V, reg r316:V, reg ans4:*, reg ans5:V, reg dimnames1:cls, reg r317:V, reg c158:L, reg r319:V, reg dr28:V, reg dc14:L, reg dx33:V, reg dx34:V, reg __8:cls, reg r320:V, reg length7:cls, reg r321:V, reg r322:V, reg sym45:cls, reg base45:cls, reg guard45:L, reg r323:V, reg r324:V, reg abbr_colnames1:*, reg abbr_colnames2:V, reg c159:L, reg c160:L, reg c161:V, reg sym46:cls, reg base46:cls, reg guard46:L, reg r325:V, reg c165:L, reg r326:V, reg abbr_colnames3:*, reg abbr_colnames4:V, reg is_numeric2:cls, reg r327:V, reg c166:L, reg c167:V, reg c169:L, reg c171:V, reg abbr_colnames5:*, reg abbr_colnames6:V, reg c172:L, reg c173:V, reg c175:L, reg abbreviate:cls, reg sym47:cls, reg base47:cls, reg guard47:L, reg r328:V, reg r329:V, reg ans6:*, reg ans7:V, reg dimnames2:cls, reg r330:V, reg c176:L, reg r332:V, reg dr30:V, reg dc15:L, reg dx35:V, reg dx36:V, reg __9:cls, reg r333:V, reg p35:p(V +), reg abbr_colnames7:*, reg abbr_colnames8:V, reg p36:p(V +), reg r336:V, reg l38:*, reg dimnames3:cls, reg r337:V, reg c177:L, reg r340:V, reg l40:*, reg r341:V, reg dr32:V, reg dc16:L, reg dx37:V, reg r343:V, reg l42:*, reg dx38:V, reg ____:cls, reg r344:V, reg dimnames__1:cls, reg r345:V, reg r346:V, reg sym48:cls, reg base48:cls, reg guard48:L, reg r347:V, reg r348:V, reg abbr_colnames9:*, reg abbr_colnames10:V, reg c178:V, reg c179:L, reg c180:V, reg sym49:cls, reg base49:cls, reg guard49:L, reg r349:V, reg c184:L, reg r350:V, reg sym50:cls, reg base50:cls, reg guard50:L, reg r351:V, reg c187:L, reg r352:V, reg ans8:*, reg ans9:V, reg dimnames4:cls, reg r353:V, reg c188:L, reg c190:L, reg r355:V, reg dr34:V, reg dc17:L, reg dx39:V, reg c192:L, reg dx40:V, reg __10:cls, reg r356:V, reg c193:V, reg c194:L, reg c195:V, reg c197:L, reg sym51:cls, reg base51:cls, reg guard51:L, reg r357:V, reg r358:V, reg rep:cls, reg r359:V, reg l43:*, reg dimnames5:cls, reg r360:V, reg c198:L, reg r363:V, reg l45:*, reg r364:V, reg dr36:V, reg dc18:L, reg dx41:V, reg r366:V, reg l47:*, reg dx42:V, reg ____1:cls, reg r367:V, reg dimnames__2:cls, reg r368:V, reg sym52:cls, reg base52:cls, reg guard52:L, reg r369:V, reg r370:V, reg abbr_colnames11:*, reg abbr_colnames12:V, reg c199:L, reg r371:V, reg c200:L, reg stop7:cls, reg r372:V, reg legend1:*, reg legend2:V, reg c201:L, reg sym53:cls, reg base53:cls, reg guard53:L, reg r374:V, reg r375:V, reg rbind:cls, reg sapply:cls, reg cutpoints25:*, reg cutpoints26:V, reg p37:p(V +), reg format5:*, reg format6:V, reg p38:p(V +), reg r378:V, reg p39:p(V +), reg sym54:cls, reg base54:cls, reg guard54:L, reg r380:V, reg r381:V, reg sQuote:cls, reg symbols25:*, reg symbols26:V, reg p40:p(V +), reg r383:V, reg c202:cls, reg r384:V, reg p41:p(V +), reg r386:V, reg has_na2:*, reg has_na3:V, reg c203:L, reg paste2:cls, reg sQuote1:cls, reg na10:*, reg na11:V, reg p42:p(V +), reg r388:V, reg p43:p(V +), reg r390:V, reg r391:V, reg c204:cls, reg r392:V, reg paste3:cls, reg legend3:*, reg legend4:V, reg c205:L, reg legend6:V, reg dr38:V, reg dc19:L, reg dx43:V, reg dx44:V, reg ns2:*, reg ns3:V, reg r393:V, reg r394:V, reg __11:cls, reg r395:V, reg p44:p(V +), reg r397:V, reg l48:*, reg attr__:cls, reg r398:V, reg noquote1:cls, reg ans10:*, reg ans11:V, reg p45:p(V +), reg r401:V |
    mkenv;
    st x = x;
    cutpoints_isMissing = missing.0(cutpoints);
    if cutpoints_isMissing then L0() else L1(cutpoints);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(0.3, 0.6, 0.8, 0.9, 0.95);
      goto L0(r2);
    L2():
      r = dyn base(0.3, 0.6, 0.8, 0.9, 0.95);
      goto L0(r);
    };
    goto L1(p);
  L1(cutpoints_orDefault):
    st cutpoints = cutpoints_orDefault;
    symbols_isMissing = missing.0(symbols);
    if symbols_isMissing then L2() else L3(symbols);
  L2():
    p1 = prom<V +>{
      numeric_x1 = ld `numeric.x`;
      numeric_x2 = force? numeric_x1;
      checkMissing(numeric_x2);
      c1 = `as.logical`(numeric_x2);
      if c1 then L3() else L0();
    L0():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L3():
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L1(r5):
      return r5;
    L2(r8):
      return r8;
    L4():
      c2 = ldf c in base;
      r6 = dyn c2(" ", ".", ",", "+", "*", "B");
      goto L1(r6);
    L5():
      r4 = dyn base1(" ", ".", ",", "+", "*", "B");
      goto L1(r4);
    L7():
      c3 = ldf c in base;
      r9 = dyn c3(".", "|");
      goto L2(r9);
    L8():
      r7 = dyn base2(".", "|");
      goto L2(r7);
    };
    goto L3(p1);
  L3(symbols_orDefault):
    st symbols = symbols_orDefault;
    legend_isMissing = missing.0(legend);
    if legend_isMissing then L4() else L5(legend);
  L4():
    p2 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r12):
      r14 = `>=`(r12, 3.0);
      return r14;
    L1():
      symbols1 = ld symbols;
      symbols2 = force? symbols1;
      checkMissing(symbols2);
      length = ldf length in base;
      r13 = dyn length(symbols2);
      goto L0(r13);
    L2():
      r11 = dyn base3(<sym symbols>);
      goto L0(r11);
    };
    goto L5(p2);
  L5(legend_orDefault):
    st legend = legend_orDefault;
    na_isMissing = missing.0(na);
    if na_isMissing then L6("?") else L6(na);
  L6(na_orDefault):
    st na = na_orDefault;
    eps_isMissing = missing.0(eps);
    if eps_isMissing then L7(1.0E-5) else L7(eps);
  L7(eps_orDefault):
    st eps = eps_orDefault;
    numeric_x_isMissing = missing.0(numeric_x);
    if numeric_x_isMissing then L8() else L9(numeric_x);
  L8():
    p3 = prom<V +>{
      sym4 = ldf `is.numeric`;
      base4 = ldf `is.numeric` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      is_numeric = ldf `is.numeric` in base;
      r18 = dyn is_numeric(x2);
      goto L0(r18);
    L2():
      r16 = dyn base4(<sym x>);
      goto L0(r16);
    };
    goto L9(p3);
  L9(numeric_x_orDefault):
    st `numeric.x` = numeric_x_orDefault;
    corr_isMissing = missing.0(corr);
    if corr_isMissing then L10() else L11(corr);
  L10():
    p4 = prom<V +>{
      sym5 = ldf missing;
      base5 = ldf missing in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r21):
      c4 = `as.logical`(r21);
      if c4 then L4() else L1(c4);
    L2():
      missing = ldf missing in base;
      r22 = dyn missing(<sym cutpoints>);
      goto L0(r22);
    L3():
      r20 = dyn base5(<sym cutpoints>);
      goto L0(r20);
    L1(c6):
      return c6;
    L4():
      numeric_x3 = ld `numeric.x`;
      numeric_x4 = force? numeric_x3;
      checkMissing(numeric_x4);
      c7 = `as.logical`(numeric_x4);
      c8 = `&&`(c4, c7);
      goto L1(c8);
    };
    goto L11(p4);
  L11(corr_orDefault):
    st corr = corr_orDefault;
    show_max_isMissing = missing.0(show_max);
    if show_max_isMissing then L12() else L13(show_max);
  L12():
    p5 = prom<V +>{
      corr1 = ld corr;
      corr2 = force? corr1;
      checkMissing(corr2);
      c10 = `as.logical`(corr2);
      if c10 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "1";
    };
    goto L13(p5);
  L13(show_max_orDefault):
    st `show.max` = show_max_orDefault;
    show_min_isMissing = missing.0(show_min);
    if show_min_isMissing then L14(NULL) else L14(show_min);
  L14(show_min_orDefault):
    st `show.min` = show_min_orDefault;
    abbr_colnames_isMissing = missing.0(abbr_colnames);
    if abbr_colnames_isMissing then L15() else L16(abbr_colnames);
  L15():
    p6 = prom<V +>{
      has_colnames = ld `has.colnames`;
      has_colnames1 = force? has_colnames;
      checkMissing(has_colnames1);
      return has_colnames1;
    };
    goto L16(p6);
  L16(abbr_colnames_orDefault):
    st `abbr.colnames` = abbr_colnames_orDefault;
    lower_triangular_isMissing = missing.0(lower_triangular);
    if lower_triangular_isMissing then L17() else L18(lower_triangular);
  L17():
    p7 = prom<V +>{
      corr3 = ld corr;
      corr4 = force? corr3;
      checkMissing(corr4);
      c11 = `as.logical`(corr4);
      if c11 then L4() else L0(c11);
    L0(c13):
      c20 = `as.logical`(c13);
      if c20 then L8() else L2(c20);
    L4():
      sym6 = ldf `is.numeric`;
      base6 = ldf `is.numeric` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L5() else L6();
    L1(c16, r27):
      c17 = `as.logical`(r27);
      c18 = `&&`(c16, c17);
      goto L0(c18);
    L2(c22):
      return c22;
    L5():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      is_numeric1 = ldf `is.numeric` in base;
      r28 = dyn is_numeric1(x4);
      goto L1(c11, r28);
    L6():
      r26 = dyn base6(<sym x>);
      goto L1(c11, r26);
    L8():
      sym7 = ldf `is.matrix`;
      base7 = ldf `is.matrix` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L9() else L10();
    L3(c25, r30):
      c26 = `as.logical`(r30);
      c27 = `&&`(c25, c26);
      goto L2(c27);
    L9():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      is_matrix = ldf `is.matrix` in base;
      r31 = dyn is_matrix(x6);
      goto L3(c20, r31);
    L10():
      r29 = dyn base7(<sym x>);
      goto L3(c20, r29);
    };
    goto L18(p7);
  L18(lower_triangular_orDefault):
    st `lower.triangular` = lower_triangular_orDefault;
    diag_lower_tri_isMissing = missing.0(diag_lower_tri);
    if diag_lower_tri_isMissing then L19() else L20(diag_lower_tri);
  L19():
    p8 = prom<V +>{
      corr5 = ld corr;
      corr6 = force? corr5;
      checkMissing(corr6);
      c29 = `as.logical`(corr6);
      if c29 then L2() else L0(c29);
    L0(c31):
      return c31;
    L2():
      sym8 = ldf `is.null`;
      base8 = ldf `is.null` in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L3() else L4();
    L1(c34, r34):
      r35 = `!`(r34);
      c36 = `as.logical`(r35);
      c37 = `&&`(c34, c36);
      goto L0(c37);
    L3():
      show_max1 = ld `show.max`;
      show_max2 = force? show_max1;
      checkMissing(show_max2);
      c35 = `==`(show_max2, NULL);
      goto L1(c29, c35);
    L4():
      r33 = dyn base8(<sym show.max>);
      goto L1(c29, r33);
    };
    goto L20(p8);
  L20(diag_lower_tri_orDefault):
    st `diag.lower.tri` = diag_lower_tri_orDefault;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L142() else L143();
  L21(r38):
    r40 = `==`(r38, 0);
    c39 = `as.logical`(r40);
    if c39 then L146() else L22();
  L142():
    x7 = ld x;
    check L144() else D0();
  L143():
    r37 = dyn base9(<sym x>);
    goto L21(r37);
  D0():
    deopt 2 [x7];
  L22():
    sym12 = ldf any;
    base12 = ldf any in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L151() else L152();
  L144():
    x8 = force? x7;
    checkMissing(x8);
    length1 = ldf length in base;
    r39 = dyn length1(x8);
    check L145() else D1();
  L146():
    noquote = ldf noquote;
    check L147() else D2();
  D1():
    deopt 5 [r39];
  D2():
    deopt 9 [];
  L24(r54):
    st `has.na` = r54;
    numeric_x5 = ld `numeric.x`;
    check L158() else D7();
  L145():
    goto L21(r39);
  L147():
    p10 = prom<V +>{
      sym10 = ldf `is.null`;
      base10 = ldf `is.null` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L3() else L4();
    L0(r42):
      c41 = `as.logical`(r42);
      if c41 then L7() else L2();
    L3():
      sym11 = ldf dim;
      base11 = ldf dim in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L5() else L6();
    L4():
      r41 = dyn base10(<lang `<-`(d, dim(x))>);
      goto L0(r41);
    L1(r44):
      st d = r44;
      c40 = `==`(r44, NULL);
      goto L0(c40);
    L2():
      array = ldf array;
      p9 = prom<V +>{
        d = ld d;
        d1 = force? d;
        checkMissing(d1);
        return d1;
      };
      r48 = dyn array[, dim]("", p9);
      return r48;
    L5():
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      dim = ldf dim in base;
      r45 = dyn dim(x10);
      goto L1(r45);
    L6():
      r43 = dyn base11(<sym x>);
      goto L1(r43);
    L7():
      character = ldf character;
      r46 = dyn character();
      return r46;
    };
    r50 = dyn noquote(p10);
    check L148() else D3();
  L151():
    sym13 = ldf `is.na`;
    base13 = ldf `is.na` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L153() else L154();
  L152():
    r53 = dyn base12(<lang `<-`(nax, is.na(x))>);
    goto L24(r53);
  D3():
    deopt 11 [r50];
  D7():
    deopt 27 [numeric_x5];
  L25(r56):
    st nax = r56;
    any = ldf any in base;
    r58 = dyn any(r56);
    check L157() else D6();
  L148():
    popenv;
    return r50;
  L153():
    x11 = ld x;
    check L155() else D4();
  L154():
    r55 = dyn base13(<sym x>);
    goto L25(r55);
  L158():
    numeric_x6 = force? numeric_x5;
    checkMissing(numeric_x6);
    c42 = `as.logical`(numeric_x6);
    if c42 then L159() else L26();
  D4():
    deopt 19 [x11];
  D6():
    deopt 25 [r58];
  L26():
    sym27 = ldf missing;
    base27 = ldf missing in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L302() else L303();
  L68():
    has_na = ld `has.na`;
    check L315() else D84();
  L155():
    x12 = force? x11;
    checkMissing(x12);
    is_na = ldf `is.na` in base;
    r57 = dyn is_na(x12);
    check L156() else D5();
  L157():
    goto L24(r58);
  L159():
    force = ldf force;
    check L160() else D8();
  D5():
    deopt 22 [r57];
  D8():
    deopt 30 [];
  D84():
    deopt 292 [has_na];
  L69(r230):
    r232 = `!`(r230);
    c103 = `as.logical`(r232);
    if c103 then L304() else L70(c103);
  L156():
    goto L25(r57);
  L160():
    p11 = prom<V +>{
      corr7 = ld corr;
      corr8 = force? corr7;
      checkMissing(corr8);
      return corr8;
    };
    r60 = dyn force(p11);
    check L161() else D9();
  L302():
    missing1 = ldf missing in base;
    r231 = dyn missing1(<sym symbols>);
    goto L69(r231);
  L303():
    r229 = dyn base27(<sym symbols>);
    goto L69(r229);
  L315():
    has_na1 = force? has_na;
    checkMissing(has_na1);
    c113 = `as.logical`(has_na1);
    if c113 then L316() else L74();
  D9():
    deopt 32 [r60];
  L70(c105):
    c112 = `as.logical`(c105);
    if c112 then L310() else L72();
  L74():
    symbols21 = ld symbols;
    check L343() else D94();
  L82():
    numeric_x7 = ld `numeric.x`;
    check L348() else D96();
  L161():
    sort = ldf sort;
    check L162() else D10();
  L304():
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L305() else L306();
  L316():
    character1 = ldf character;
    check L317() else D85();
  D10():
    deopt 34 [];
  D85():
    deopt 295 [];
  D94():
    deopt 328 [symbols21];
  D96():
    deopt 334 [numeric_x7];
  L71(c108, r234):
    r236 = `!=`(r234, 2);
    c109 = `as.logical`(r236);
    c110 = `&&`(c108, c109);
    goto L70(c110);
  L72():
    goto L73();
  L73():
    x29 = ld x;
    check L314() else D83();
  L162():
    p12 = prom<V +>{
      cutpoints1 = ld cutpoints;
      cutpoints2 = force? cutpoints1;
      checkMissing(cutpoints2);
      return cutpoints2;
    };
    r62 = dyn sort(p12);
    check L163() else D11();
  L305():
    symbols11 = ld symbols;
    check L307() else D79();
  L306():
    r233 = dyn base28(<sym symbols>);
    goto L71(c103, r233);
  L310():
    stop6 = ldf stop;
    check L311() else D81();
  L317():
    p30 = prom<V +>{
      sym29 = ldf length;
      base29 = ldf length in base;
      guard29 = `==`.4(sym29, base29);
      if guard29 then L1() else L2();
    L0(r241):
      return r241;
    L1():
      iS2 = ld iS;
      iS3 = force? iS2;
      checkMissing(iS3);
      length5 = ldf length in base;
      r242 = dyn length5(iS3);
      goto L0(r242);
    L2():
      r240 = dyn base29(<sym iS>);
      goto L0(r240);
    };
    r244 = dyn character1(p30);
    check L318() else D86();
  L343():
    symbols22 = force? symbols21;
    checkMissing(symbols22);
    c120 = `is.object`(symbols22);
    if c120 then L344() else L345(symbols22);
  L348():
    numeric_x8 = force? numeric_x7;
    checkMissing(numeric_x8);
    c121 = `as.logical`(numeric_x8);
    if c121 then L349() else L84();
  D11():
    deopt 36 [r62];
  D79():
    deopt 274 [c103, symbols11];
  D81():
    deopt 282 [];
  D83():
    deopt 287 [x29];
  D86():
    deopt 297 [r244];
  L83(dx26):
    st ans = dx26;
    goto L82();
  L84():
    goto L99();
  L99():
    lower_triangular1 = ld `lower.triangular`;
    check L389() else D113();
  L163():
    st cutpoints = r62;
    corr9 = ld corr;
    check L164() else D12();
  L307():
    symbols12 = force? symbols11;
    checkMissing(symbols12);
    length4 = ldf length in base;
    r235 = dyn length4(symbols12);
    check L308() else D80();
  L311():
    r237 = dyn stop6("must have 2 'symbols' for logical 'x' argument");
    check L312() else D82();
  L314():
    x30 = force? x29;
    checkMissing(x30);
    r239 = `+`(x30, 1.0);
    st iS = r239;
    goto L68();
  L318():
    st ans = r244;
    sym30 = ldf `is.character`;
    base30 = ldf `is.character` in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L319() else L320();
  L344():
    dr20 = tryDispatchBuiltin.1("[", symbols22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L346() else L345(dr20);
  L345(symbols24):
    iS8 = ld iS;
    check L347() else D95();
  L349():
    sym31 = ldf `is.null`;
    base31 = ldf `is.null` in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L350() else L351();
  D12():
    deopt 38 [corr9];
  D80():
    deopt 277 [c103, r235];
  D82():
    deopt 284 [r237];
  D95():
    deopt 330 [symbols24, iS8];
  D113():
    deopt 394 [lower_triangular1];
  L75(r246):
    st `has.na` = r246;
    c115 = `as.logical`(r246);
    if c115 then L322() else L76();
  L85(r255):
    r256 = `!`(r255);
    c123 = `as.logical`(r256);
    if c123 then L353() else L86();
  L164():
    corr10 = force? corr9;
    checkMissing(corr10);
    c43 = `as.logical`(corr10);
    if c43 then L165() else L27();
  L308():
    goto L71(c103, r235);
  L312():
    goto L73();
  L319():
    na1 = ld na;
    check L321() else D87();
  L320():
    r245 = dyn base30(<sym na>);
    goto L75(r245);
  L346():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L83(dx25);
  L347():
    iS9 = force? iS8;
    __7 = ldf `[` in base;
    r253 = dyn __7(symbols24, iS9);
    goto L83(r253);
  L350():
    show_max3 = ld `show.max`;
    check L352() else D97();
  L351():
    r254 = dyn base31(<sym show.max>);
    goto L85(r254);
  L389():
    lower_triangular2 = force? lower_triangular1;
    checkMissing(lower_triangular2);
    c132 = `as.logical`(lower_triangular2);
    if c132 then L390() else L100(c132);
  D87():
    deopt 300 [na1];
  D97():
    deopt 337 [show_max3];
  L27():
    goto L29();
  L29():
    anyDuplicated = ldf anyDuplicated;
    check L171() else D15();
  L76():
    goto L78();
  L78():
    symbols13 = ld symbols;
    check L329() else D90();
  L86():
    goto L91();
  L91():
    sym33 = ldf `is.null`;
    base33 = ldf `is.null` in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L369() else L370();
  L100(c134):
    c141 = `as.logical`(c134);
    if c141 then L396() else L102();
  L165():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L166() else L167();
  L321():
    na2 = force? na1;
    checkMissing(na2);
    c114 = `is.character`(na2);
    goto L75(c114);
  L322():
    na3 = ld na;
    check L323() else D88();
  L352():
    show_max4 = force? show_max3;
    checkMissing(show_max4);
    c122 = `==`(show_max4, NULL);
    goto L85(c122);
  L353():
    sym32 = ldf `is.character`;
    base32 = ldf `is.character` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L354() else L355();
  L390():
    sym35 = ldf `is.matrix`;
    base35 = ldf `is.matrix` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L391() else L392();
  D15():
    deopt 52 [];
  D88():
    deopt 304 [na3];
  D90():
    deopt 313 [symbols13];
  L28(r64):
    st cutpoints = r64;
    goto L29();
  L87(r258):
    c125 = `as.logical`(r258);
    if c125 then L357() else L88();
  L92(r265):
    r266 = `!`(r265);
    c128 = `as.logical`(r266);
    if c128 then L372() else L93();
  L101(c137, r275):
    c138 = `as.logical`(r275);
    c139 = `&&`(c137, c138);
    goto L100(c139);
  L102():
    goto L104();
  L104():
    sym36 = ldf attributes;
    base36 = ldf attributes in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L403() else L404();
  L166():
    cutpoints3 = ld cutpoints;
    check L168() else D13();
  L167():
    r63 = dyn base14(0.0, <sym cutpoints>, 1.0);
    goto L28(r63);
  L171():
    p13 = prom<V +>{
      cutpoints5 = ld cutpoints;
      cutpoints6 = force? cutpoints5;
      checkMissing(cutpoints6);
      return cutpoints6;
    };
    r68 = dyn anyDuplicated(p13);
    check L172() else D16();
  L323():
    na4 = force? na3;
    checkMissing(na4);
    l21 = ld ans;
    c116 = `is.object`(l21);
    if c116 then L324() else L325(na4, l21);
  L329():
    symbols14 = force? symbols13;
    checkMissing(symbols14);
    c117 = `is.object`(symbols14);
    if c117 then L330() else L331(symbols14);
  L354():
    show_max5 = ld `show.max`;
    check L356() else D98();
  L355():
    r257 = dyn base32(<sym show.max>);
    goto L87(r257);
  L369():
    show_min1 = ld `show.min`;
    check L371() else D105();
  L370():
    r264 = dyn base33(<sym show.min>);
    goto L92(r264);
  L391():
    x35 = ld x;
    check L393() else D114();
  L392():
    r274 = dyn base35(<sym x>);
    goto L101(c132, r274);
  L396():
    l33 = ld ans;
    c142 = `is.object`(l33);
    if c142 then L397() else L398("", l33);
  D13():
    deopt 43 [cutpoints3];
  D16():
    deopt 54 [r68];
  D98():
    deopt 342 [show_max5];
  D105():
    deopt 365 [show_min1];
  D114():
    deopt 398 [c132, x35];
  L77(na8, dx13):
    st ans = dx13;
    goto L78();
  L79(dx15):
    l24 = ld ans;
    c119 = `is.object`(l24);
    if c119 then L338() else L339(dx15, l24);
  L88():
    format3 = ldf format;
    check L360() else D100();
  L89(show_max9):
    l27 = ld ans;
    c126 = `is.object`(l27);
    if c126 then L362() else L363(show_max9, l27);
  L93():
    goto L98(NULL);
  L98(show_min12):
    goto L99();
  L103(r280, dx32):
    st ans = dx32;
    goto L104();
  L105(r288):
    l36 = ld ans;
    attributes__ = ldf `attributes<-`;
    check L407() else D120();
  L168():
    cutpoints4 = force? cutpoints3;
    checkMissing(cutpoints4);
    c44 = ldf c in base;
    r65 = dyn c44(0.0, cutpoints4, 1.0);
    check L169() else D14();
  L172():
    c45 = `as.logical`(r68);
    if c45 then L30(c45) else L173();
  L324():
    dr12 = tryDispatchBuiltin.0("[<-", l21, na4);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L326() else L325(na4, dr12);
  L325(na6, l23):
    nax = ld nax;
    check L327() else D89();
  L330():
    dr14 = tryDispatchBuiltin.1("[", symbols14);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L332() else L331(dr14);
  L331(symbols16):
    iS4 = ld iS;
    check L333() else D91();
  L356():
    show_max6 = force? show_max5;
    checkMissing(show_max6);
    c124 = `is.character`(show_max6);
    goto L87(c124);
  L357():
    show_max7 = ld `show.max`;
    check L358() else D99();
  L371():
    show_min2 = force? show_min1;
    checkMissing(show_min2);
    c127 = `==`(show_min2, NULL);
    goto L92(c127);
  L372():
    sym34 = ldf `is.character`;
    base34 = ldf `is.character` in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L373() else L374();
  L393():
    x36 = force? x35;
    checkMissing(x36);
    is_matrix1 = ldf `is.matrix` in base;
    r276 = dyn is_matrix1(x36);
    check L394() else D115();
  L397():
    dr26 = tryDispatchBuiltin.0("[<-", l33, "");
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L399() else L398("", dr26);
  L398(r278, l35):
    lower_tri = ldf `lower.tri`;
    check L400() else D116();
  L403():
    x39 = ld x;
    check L405() else D118();
  L404():
    r287 = dyn base36(<sym x>);
    goto L105(r287);
  D14():
    deopt 47 [r65];
  D89():
    deopt 307 [na6, l23, na4, nax];
  D91():
    deopt 315 [symbols16, iS4];
  D99():
    deopt 345 [show_max7];
  D100():
    deopt 348 [];
  D115():
    deopt 401 [c132, r276];
  D116():
    deopt 407 [r278, l35, ""];
  D118():
    deopt 419 [x39];
  D120():
    deopt 424 [r288, l36, r288];
  L30(c46):
    c87 = `as.logical`(c46);
    if c87 then L188() else L35();
  L81(dx22, dx23):
    st ans = dx23;
    goto L82();
  L90(show_max13, dx28):
    st ans = dx28;
    goto L91();
  L94(r268):
    c130 = `as.logical`(r268);
    if c130 then L376() else L95();
  L169():
    goto L28(r65);
  L173():
    corr11 = ld corr;
    check L174() else D17();
  L326():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L77(na4, dx12);
  L327():
    nax1 = force? nax;
    ___1 = ldf `[<-` in base;
    r247 = dyn ___1(l23, na4, nax1);
    goto L77(na6, r247);
  L332():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L79(dx14);
  L333():
    iS5 = force? iS4;
    checkMissing(iS5);
    c118 = `is.object`(iS5);
    if c118 then L334() else L335(symbols16, iS5);
  L338():
    dr18 = tryDispatchBuiltin.0("[<-", l24, dx15);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L340() else L339(dx15, dr18);
  L339(dx19, l26):
    nax4 = ld nax;
    check L341() else D93();
  L358():
    show_max8 = force? show_max7;
    checkMissing(show_max8);
    goto L89(show_max8);
  L360():
    p31 = prom<V +>{
      maxc4 = ld maxc;
      maxc5 = force? maxc4;
      checkMissing(maxc5);
      return maxc5;
    };
    r260 = dyn format3[, digits](p31, 1.0);
    check L361() else D101();
  L362():
    dr22 = tryDispatchBuiltin.0("[<-", l27, show_max9);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L364() else L363(show_max9, dr22);
  L363(show_max11, l29):
    x31 = ld x;
    check L365() else D102();
  L373():
    show_min3 = ld `show.min`;
    check L375() else D106();
  L374():
    r267 = dyn base34(<sym show.min>);
    goto L94(r267);
  L394():
    goto L101(c132, r276);
  L399():
    dx31 = getTryDispatchBuiltinValue(dr26);
    goto L103("", dx31);
  L400():
    p33 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      return x38;
    };
    p34 = prom<V +>{
      diag_lower_tri1 = ld `diag.lower.tri`;
      diag_lower_tri2 = force? diag_lower_tri1;
      checkMissing(diag_lower_tri2);
      return diag_lower_tri2;
    };
    r283 = dyn lower_tri[, diag](p33, p34);
    check L401() else D117();
  L405():
    x40 = force? x39;
    checkMissing(x40);
    attributes = ldf attributes in base;
    r289 = dyn attributes(x40);
    check L406() else D119();
  L407():
    r290 = dyn attributes__(l36, NULL, r288);
    check L408() else D121();
  D17():
    deopt 55 [c45, corr11];
  D93():
    deopt 323 [dx19, l26, dx15, nax4];
  D101():
    deopt 352 [r260];
  D102():
    deopt 354 [show_max11, l29, show_max9, x31];
  D106():
    deopt 370 [show_min3];
  D117():
    deopt 411 [r278, l35, "", r283];
  D119():
    deopt 422 [r289];
  D121():
    deopt 426 [r288, r290];
  L35():
    goto L36();
  L36():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L192() else L193();
  L80(symbols20, dx17):
    __6 = ldf `[` in base;
    r250 = dyn __6(symbols20, dx17);
    goto L79(r250);
  L95():
    format4 = ldf format;
    check L379() else D108();
  L96(show_min7):
    l30 = ld ans;
    c131 = `is.object`(l30);
    if c131 then L381() else L382(show_min7, l30);
  L174():
    corr12 = force? corr11;
    checkMissing(corr12);
    c48 = `as.logical`(corr12);
    if c48 then L175() else L31(c45, c48);
  L188():
    stop = ldf stop;
    check L189() else D22();
  L334():
    dr16 = tryDispatchBuiltin.1("[", iS5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L336() else L335(symbols16, dr16);
  L335(symbols18, iS7):
    nax2 = ld nax;
    check L337() else D92();
  L340():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L81(dx15, dx21);
  L341():
    nax5 = force? nax4;
    checkMissing(nax5);
    r251 = `!`(nax5);
    ___2 = ldf `[<-` in base;
    r252 = dyn ___2(l26, dx15, r251);
    goto L81(dx19, r252);
  L361():
    goto L89(r260);
  L364():
    dx27 = getTryDispatchBuiltinValue(dr22);
    goto L90(show_max9, dx27);
  L365():
    x32 = force? x31;
    checkMissing(x32);
    maxc6 = ld maxc;
    check L366() else D103();
  L375():
    show_min4 = force? show_min3;
    checkMissing(show_min4);
    c129 = `is.character`(show_min4);
    goto L94(c129);
  L376():
    show_min5 = ld `show.min`;
    check L377() else D107();
  L401():
    r284 = `!`(r283);
    ___5 = ldf `[<-` in base;
    r285 = dyn ___5(l35, "", r284);
    goto L103(r278, r285);
  L406():
    goto L105(r289);
  L408():
    st ans = r290;
    sym37 = ldf `is.array`;
    base37 = ldf `is.array` in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L409() else L410();
  D22():
    deopt 77 [];
  D92():
    deopt 317 [symbols18, iS7, nax2];
  D103():
    deopt 355 [show_max11, l29, show_max9, x32, maxc6];
  D107():
    deopt 373 [show_min5];
  D108():
    deopt 376 [];
  L31(c51, c52):
    c84 = `as.logical`(c52);
    c85 = `||`(c51, c84);
    goto L30(c85);
  L37(r88):
    st nc = r88;
    cutpoints15 = ld cutpoints;
    check L196() else D26();
  L97(show_min11, dx30):
    st ans = dx30;
    goto L98(show_min11);
  L106(r292):
    c143 = `as.logical`(r292);
    if c143 then L413() else L107(c143);
  L175():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L176() else L177();
  L189():
    p14 = prom<V +>{
      corr13 = ld corr;
      corr14 = force? corr13;
      checkMissing(corr14);
      c88 = `as.logical`(corr14);
      if c88 then L1() else L0();
    L0():
      gettext1 = ldf gettext;
      r78 = dyn gettext1("'cutpoints' must be unique, but are = ");
      return r78;
    L1():
      gettext = ldf gettext;
      r77 = dyn gettext("'cutpoints' must be unique in 0 < cuts < 1, but are = ");
      return r77;
    };
    p17 = prom<V +>{
      paste = ldf paste;
      p16 = prom<V +>{
        format = ldf format;
        p15 = prom<V +>{
          cutpoints11 = ld cutpoints;
          cutpoints12 = force? cutpoints11;
          checkMissing(cutpoints12);
          return cutpoints12;
        };
        r81 = dyn format(p15);
        return r81;
      };
      r83 = dyn paste[, collapse](p16, "|");
      return r83;
    };
    r85 = dyn stop[, , domain](p14, p17, NA_LGL);
    check L190() else D23();
  L192():
    cutpoints13 = ld cutpoints;
    check L194() else D24();
  L193():
    r87 = dyn base17(<sym cutpoints>);
    goto L37(r87);
  L336():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L80(symbols16, dx16);
  L337():
    nax3 = force? nax2;
    checkMissing(nax3);
    r248 = `!`(nax3);
    __5 = ldf `[` in base;
    r249 = dyn __5(iS7, r248);
    goto L80(symbols18, r249);
  L366():
    maxc7 = force? maxc6;
    checkMissing(maxc7);
    eps7 = ld eps;
    check L367() else D104();
  L377():
    show_min6 = force? show_min5;
    checkMissing(show_min6);
    goto L96(show_min6);
  L379():
    p32 = prom<V +>{
      minc6 = ld minc;
      minc7 = force? minc6;
      checkMissing(minc7);
      return minc7;
    };
    r270 = dyn format4[, digits](p32, 1.0);
    check L380() else D109();
  L381():
    dr24 = tryDispatchBuiltin.0("[<-", l30, show_min7);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L383() else L382(show_min7, dr24);
  L382(show_min9, l32):
    x33 = ld x;
    check L384() else D110();
  L409():
    ans = ld ans;
    check L411() else D122();
  L410():
    r291 = dyn base37(<sym ans>);
    goto L106(r291);
  D23():
    deopt 82 [r85];
  D24():
    deopt 87 [cutpoints13];
  D26():
    deopt 92 [cutpoints15];
  D104():
    deopt 356 [show_max11, l29, show_max9, x32, maxc7, eps7];
  D109():
    deopt 380 [r270];
  D110():
    deopt 382 [show_min9, l32, show_min7, x33];
  D122():
    deopt 430 [ans];
  L32(c57, c58, r70):
    c59 = `as.logical`(r70);
    if c59 then L33(c57, c58, c59) else L180();
  L107(c145):
    c155 = `as.logical`(c145);
    if c155 then L422() else L110();
  L176():
    cutpoints7 = ld cutpoints;
    check L178() else D18();
  L177():
    r69 = dyn base15(<lang `>`(cutpoints, 1.0)>);
    goto L32(c45, c48, r69);
  L190():
    goto L36();
  L194():
    cutpoints14 = force? cutpoints13;
    checkMissing(cutpoints14);
    length2 = ldf length in base;
    r89 = dyn length2(cutpoints14);
    check L195() else D25();
  L196():
    cutpoints16 = force? cutpoints15;
    checkMissing(cutpoints16);
    c89 = `is.object`(cutpoints16);
    if c89 then L197() else L198(cutpoints16);
  L367():
    eps8 = force? eps7;
    checkMissing(eps8);
    r261 = `-`(maxc7, eps8);
    r262 = `>=`(x32, r261);
    ___3 = ldf `[<-` in base;
    r263 = dyn ___3(l29, show_max9, r262);
    goto L90(show_max11, r263);
  L380():
    goto L96(r270);
  L383():
    dx29 = getTryDispatchBuiltinValue(dr24);
    goto L97(show_min7, dx29);
  L384():
    x34 = force? x33;
    checkMissing(x34);
    minc8 = ld minc;
    check L385() else D111();
  L411():
    ans1 = force? ans;
    checkMissing(ans1);
    is_array = ldf `is.array` in base;
    r293 = dyn is_array(ans1);
    check L412() else D123();
  L413():
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L414() else L415();
  D18():
    deopt 59 [c45, c48, cutpoints7];
  D25():
    deopt 90 [r89];
  D111():
    deopt 383 [show_min9, l32, show_min7, x34, minc8];
  D123():
    deopt 433 [r293];
  L33(c60, c61, c62):
    c80 = `as.logical`(c62);
    c81 = `&&`(c61, c80);
    goto L31(c60, c81);
  L38(dx1):
    st minc = dx1;
    cutpoints19 = ld cutpoints;
    check L200() else D27();
  L108(c148, r295):
    st rank = r295;
    r300 = `>=`(r295, 2);
    c152 = `as.logical`(r300);
    c153 = `&&`(c148, c152);
    goto L107(c153);
  L110():
    goto L136();
  L136():
    legend1 = ld legend;
    check L504() else D157();
  L178():
    cutpoints8 = force? cutpoints7;
    checkMissing(cutpoints8);
    r71 = `>`(cutpoints8, 1.0);
    any1 = ldf any in base;
    r72 = dyn any1(r71);
    check L179() else D19();
  L180():
    sym16 = ldf any;
    base16 = ldf any in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L181() else L182();
  L195():
    goto L37(r89);
  L197():
    dr = tryDispatchBuiltin.1("[", cutpoints16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L199() else L198(dr);
  L198(cutpoints18):
    __ = ldf `[` in base;
    r90 = dyn __(cutpoints18, 1);
    goto L38(r90);
  L385():
    minc9 = force? minc8;
    checkMissing(minc9);
    eps9 = ld eps;
    check L386() else D112();
  L412():
    goto L106(r293);
  L414():
    sym39 = ldf dim;
    base39 = ldf dim in base;
    guard39 = `==`.4(sym39, base39);
    if guard39 then L416() else L417();
  L415():
    r294 = dyn base38(<lang dim(x)>);
    goto L108(c143, r294);
  L422():
    sym40 = ldf `is.null`;
    base40 = ldf `is.null` in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L423() else L424();
  D19():
    deopt 64 [c45, c48, r72];
  D27():
    deopt 98 [cutpoints19];
  D112():
    deopt 384 [show_min9, l32, show_min7, x34, minc9, eps9];
  D157():
    deopt 565 [legend1];
  L34(c72, c73, c74, r74):
    c75 = `as.logical`(r74);
    c76 = `||`(c74, c75);
    goto L33(c72, c73, c76);
  L109(c151, r297):
    length6 = ldf length in base;
    r299 = dyn length6(r297);
    check L420() else D126();
  L111(r302):
    r306 = `!`(r302);
    st `has.colnames` = r306;
    has_colnames2 = ld `has.colnames`;
    check L429() else D129();
  L179():
    goto L32(c45, c48, r72);
  L181():
    cutpoints9 = ld cutpoints;
    check L183() else D20();
  L182():
    r73 = dyn base16(<lang `<`(cutpoints, 0.0)>);
    goto L34(c57, c58, c59, r73);
  L199():
    dx = getTryDispatchBuiltinValue(dr);
    goto L38(dx);
  L200():
    cutpoints20 = force? cutpoints19;
    checkMissing(cutpoints20);
    c90 = `is.object`(cutpoints20);
    if c90 then L201() else L202(cutpoints20);
  L386():
    eps10 = force? eps9;
    checkMissing(eps10);
    r271 = `+`(minc9, eps10);
    r272 = `<=`(x34, r271);
    ___4 = ldf `[<-` in base;
    r273 = dyn ___4(l32, show_min7, r272);
    goto L97(show_min9, r273);
  L416():
    x41 = ld x;
    check L418() else D124();
  L417():
    r296 = dyn base39(<sym x>);
    goto L109(c143, r296);
  L423():
    sym41 = ldf dimnames;
    base41 = ldf dimnames in base;
    guard41 = `==`.4(sym41, base41);
    if guard41 then L425() else L426();
  L424():
    r301 = dyn base40(<lang dimnames(ans)>);
    goto L111(r301);
  L504():
    legend2 = force? legend1;
    checkMissing(legend2);
    c201 = `as.logical`(legend2);
    if c201 then L505() else L137();
  D20():
    deopt 67 [c57, c58, c59, cutpoints9];
  D124():
    deopt 438 [c143, x41];
  D126():
    deopt 443 [c151, r299];
  D129():
    deopt 458 [has_colnames2];
  L39(dx3):
    st maxc = dx3;
    corr15 = ld corr;
    check L205() else D29();
  L112(r304):
    c156 = `==`(r304, NULL);
    goto L111(c156);
  L137():
    goto L141();
  L141():
    noquote1 = ldf noquote;
    check L521() else D168();
  L183():
    cutpoints10 = force? cutpoints9;
    checkMissing(cutpoints10);
    r75 = `<`(cutpoints10, 0.0);
    any2 = ldf any in base;
    r76 = dyn any2(r75);
    check L184() else D21();
  L201():
    dr2 = tryDispatchBuiltin.1("[", cutpoints20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L203() else L202(dr2);
  L202(cutpoints22):
    nc = ld nc;
    check L204() else D28();
  L418():
    x42 = force? x41;
    checkMissing(x42);
    dim1 = ldf dim in base;
    r298 = dyn dim1(x42);
    check L419() else D125();
  L420():
    goto L108(c151, r299);
  L425():
    ans2 = ld ans;
    check L427() else D127();
  L426():
    r303 = dyn base41(<sym ans>);
    goto L112(r303);
  L429():
    has_colnames3 = force? has_colnames2;
    checkMissing(has_colnames3);
    r307 = `!`(has_colnames3);
    c157 = `as.logical`(r307);
    if c157 then L430() else L113();
  L505():
    sym53 = ldf c;
    base53 = ldf c in base;
    guard53 = `==`.4(sym53, base53);
    if guard53 then L506() else L507();
  D21():
    deopt 72 [c57, c58, c59, r76];
  D28():
    deopt 100 [cutpoints22, nc];
  D29():
    deopt 104 [corr15];
  D125():
    deopt 441 [c143, r298];
  D127():
    deopt 451 [ans2];
  D168():
    deopt 601 [];
  L113():
    sym43 = ldf length;
    base43 = ldf length in base;
    guard43 = `==`.4(sym43, base43);
    if guard43 then L438() else L439();
  L115():
    sym45 = ldf `is.logical`;
    base45 = ldf `is.logical` in base;
    guard45 = `==`.4(sym45, base45);
    if guard45 then L448() else L449();
  L138(r375):
    st legend = r375;
    paste3 = ldf paste;
    check L516() else D164();
  L184():
    goto L34(c57, c58, c59, r76);
  L203():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(dx2);
  L204():
    nc1 = force? nc;
    __1 = ldf `[` in base;
    r91 = dyn __1(cutpoints22, nc1);
    goto L39(r91);
  L205():
    corr16 = force? corr15;
    checkMissing(corr16);
    c91 = `as.logical`(corr16);
    if c91 then L206() else L40();
  L419():
    goto L109(c143, r298);
  L427():
    ans3 = force? ans2;
    checkMissing(ans3);
    dimnames = ldf dimnames in base;
    r305 = dyn dimnames(ans3);
    check L428() else D128();
  L430():
    sym42 = ldf vector;
    base42 = ldf vector in base;
    guard42 = `==`.4(sym42, base42);
    if guard42 then L431() else L432();
  L506():
    rbind = ldf rbind;
    check L508() else D158();
  L507():
    r374 = dyn base53(<lang rbind(sapply(cutpoints, format), c(sQuote(symbols), ""))>, <lang if(has.na, paste("\t    ## NA:", sQuote(na)))>);
    goto L138(r374);
  L521():
    p45 = prom<V +>{
      ans10 = ld ans;
      ans11 = force? ans10;
      checkMissing(ans11);
      return ans11;
    };
    r401 = dyn noquote1(p45);
    check L522() else D169();
  D128():
    deopt 454 [r305];
  D158():
    deopt 570 [];
  D164():
    deopt 587 [];
  D169():
    deopt 603 [r401];
  L40():
    gettextf = ldf gettextf;
    check L210() else D32();
  L41(r93):
    st `range.msg` = r93;
    corr17 = ld corr;
    check L212() else D34();
  L114(r309):
    l37 = ld ans;
    dimnames__ = ldf `dimnames<-`;
    check L435() else D132();
  L116(r314):
    r322 = `>`(r314, 0);
    st `has.colnames` = r322;
    goto L115();
  L119(r324):
    c160 = `as.logical`(r324);
    if c160 then L120(c160) else L451();
  L206():
    gettext2 = ldf gettext;
    check L207() else D30();
  L428():
    goto L112(r305);
  L431():
    rank = ld rank;
    check L433() else D130();
  L432():
    r308 = dyn base42("list", <sym rank>);
    goto L114(r308);
  L438():
    sym44 = ldf dimnames;
    base44 = ldf dimnames in base;
    guard44 = `==`.4(sym44, base44);
    if guard44 then L440() else L441();
  L439():
    r313 = dyn base43(<lang `[[`(dimnames(ans), 2)>);
    goto L116(r313);
  L448():
    abbr_colnames1 = ld `abbr.colnames`;
    check L450() else D137();
  L449():
    r323 = dyn base45(<sym abbr.colnames>);
    goto L119(r323);
  L508():
    p39 = prom<V +>{
      sapply = ldf sapply;
      p37 = prom<V +>{
        cutpoints25 = ld cutpoints;
        cutpoints26 = force? cutpoints25;
        checkMissing(cutpoints26);
        return cutpoints26;
      };
      p38 = prom<V +>{
        format5 = ld format;
        format6 = force? format5;
        checkMissing(format6);
        return format6;
      };
      r378 = dyn sapply(p37, p38);
      return r378;
    };
    p41 = prom<V +>{
      sym54 = ldf c;
      base54 = ldf c in base;
      guard54 = `==`.4(sym54, base54);
      if guard54 then L1() else L2();
    L0(r381):
      return r381;
    L1():
      sQuote = ldf sQuote;
      p40 = prom<V +>{
        symbols25 = ld symbols;
        symbols26 = force? symbols25;
        checkMissing(symbols26);
        return symbols26;
      };
      r383 = dyn sQuote(p40);
      c202 = ldf c in base;
      r384 = dyn c202(r383, "");
      goto L0(r384);
    L2():
      r380 = dyn base54(<lang sQuote(symbols)>, "");
      goto L0(r380);
    };
    r386 = dyn rbind(p39, p41);
    check L509() else D159();
  L516():
    p44 = prom<V +>{
      legend3 = ld legend;
      legend4 = force? legend3;
      checkMissing(legend4);
      c205 = `is.object`(legend4);
      if c205 then L1() else L2(legend4);
    L0(dx44):
      return dx44;
    L1():
      dr38 = tryDispatchBuiltin.1("[", legend4);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(legend6):
      ns2 = ld ns;
      ns3 = force? ns2;
      checkMissing(ns3);
      r393 = `+`(ns3, 1.0);
      r394 = `*`(-2.0, r393);
      __11 = ldf `[` in base;
      r395 = dyn __11(legend6, r394);
      goto L0(r395);
    L3():
      dx43 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx43);
    };
    r397 = dyn paste3[, collapse](p44, " ");
    check L517() else D165();
  L522():
    popenv;
    return r401;
  D30():
    deopt 107 [];
  D32():
    deopt 111 [];
  D34():
    deopt 117 [corr17];
  D130():
    deopt 464 [rank];
  D132():
    deopt 469 [r309, l37, r309];
  D137():
    deopt 490 [abbr_colnames1];
  D159():
    deopt 573 [r386];
  D165():
    deopt 591 [r397];
  L117(r316):
    c158 = `is.object`(r316);
    if c158 then L444() else L445(r316);
  L120(c161):
    c169 = `as.logical`(c161);
    if c169 then L457() else L122(c169);
  L207():
    r92 = dyn gettext2("'x' must be between -1 and 1");
    check L208() else D31();
  L210():
    p19 = prom<V +>{
      format1 = ldf format;
      p18 = prom<V +>{
        minc = ld minc;
        minc1 = force? minc;
        checkMissing(minc1);
        return minc1;
      };
      r95 = dyn format1(p18);
      return r95;
    };
    p21 = prom<V +>{
      format2 = ldf format;
      p20 = prom<V +>{
        maxc = ld maxc;
        maxc1 = force? maxc;
        checkMissing(maxc1);
        return maxc1;
      };
      r98 = dyn format2(p20);
      return r98;
    };
    r100 = dyn gettextf("'x' must be between %s and %s", p19, p21);
    check L211() else D33();
  L212():
    corr18 = force? corr17;
    checkMissing(corr18);
    c92 = `as.logical`(corr18);
    if c92 then L213() else L42();
  L433():
    rank1 = force? rank;
    checkMissing(rank1);
    vector = ldf vector in base;
    r310 = dyn vector("list", rank1);
    check L434() else D131();
  L435():
    r311 = dyn dimnames__(l37, NULL, r309);
    check L436() else D133();
  L440():
    ans4 = ld ans;
    check L442() else D134();
  L441():
    r315 = dyn base44(<sym ans>);
    goto L117(r315);
  L450():
    abbr_colnames2 = force? abbr_colnames1;
    checkMissing(abbr_colnames2);
    c159 = `is.logical`(abbr_colnames2);
    goto L119(c159);
  L451():
    sym46 = ldf `is.numeric`;
    base46 = ldf `is.numeric` in base;
    guard46 = `==`.4(sym46, base46);
    if guard46 then L452() else L453();
  L509():
    has_na2 = ld `has.na`;
    check L510() else D160();
  L517():
    l48 = ld ans;
    attr__ = ldf `attr<-`;
    check L518() else D166();
  D31():
    deopt 109 [r92];
  D33():
    deopt 115 [r100];
  D131():
    deopt 467 [r310];
  D133():
    deopt 471 [r309, r311];
  D134():
    deopt 477 [ans4];
  D160():
    deopt 574 [has_na2];
  D166():
    deopt 593 [r397, l48, r397];
  L42():
    sym19 = ldf any;
    base19 = ldf any in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L219() else L220();
  L44():
    sym20 = ldf any;
    base20 = ldf any in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L229() else L230();
  L118(dx34):
    length7 = ldf length in base;
    r321 = dyn length7(dx34);
    check L447() else D136();
  L121(c165, r326):
    c166 = `as.logical`(r326);
    c167 = `||`(c165, c166);
    goto L120(c167);
  L122(c171):
    c175 = `as.logical`(c171);
    if c175 then L460() else L123();
  L208():
    goto L41(r92);
  L211():
    goto L41(r100);
  L213():
    sym18 = ldf abs;
    base18 = ldf abs in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L214() else L215();
  L434():
    goto L114(r310);
  L436():
    st ans = r311;
    goto L115();
  L442():
    ans5 = force? ans4;
    checkMissing(ans5);
    dimnames1 = ldf dimnames in base;
    r317 = dyn dimnames1(ans5);
    check L443() else D135();
  L444():
    dr28 = tryDispatchBuiltin.1("[[", r316);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L446() else L445(dr28);
  L445(r319):
    __8 = ldf `[[` in base;
    r320 = dyn __8(r319, 2);
    goto L118(r320);
  L452():
    abbr_colnames3 = ld `abbr.colnames`;
    check L454() else D138();
  L453():
    r325 = dyn base46(<sym abbr.colnames>);
    goto L121(c160, r325);
  L457():
    abbr_colnames5 = ld `abbr.colnames`;
    check L458() else D140();
  L510():
    has_na3 = force? has_na2;
    checkMissing(has_na3);
    c203 = `as.logical`(has_na3);
    if c203 then L511() else L139();
  L518():
    r398 = dyn attr__(l48, NULL, "legend", r397);
    check L519() else D167();
  D135():
    deopt 480 [r317];
  D136():
    deopt 485 [r321];
  D138():
    deopt 495 [c160, abbr_colnames3];
  D140():
    deopt 500 [c169, abbr_colnames5];
  D167():
    deopt 596 [r397, r398];
  L43(r102):
    st x = r102;
    goto L44();
  L45(r106):
    c93 = `as.logical`(r106);
    if c93 then L225() else L46();
  L47(r113):
    c94 = `as.logical`(r113);
    if c94 then L235() else L48();
  L123():
    sym48 = ldf `is.null`;
    base48 = ldf `is.null` in base;
    guard48 = `==`.4(sym48, base48);
    if guard48 then L471() else L472();
  L125(r346):
    goto L136();
  L139():
    goto L140(NULL);
  L140(r391):
    c204 = ldf c in base;
    r392 = dyn c204(r386, r391);
    check L515() else D163();
  L214():
    x13 = ld x;
    check L216() else D35();
  L215():
    r101 = dyn base18(<sym x>);
    goto L43(r101);
  L219():
    x15 = ld x;
    check L221() else D37();
  L220():
    r105 = dyn base19[, `na.rm`](<lang `<`(x, `-`(minc, eps))>, TRUE);
    goto L45(r105);
  L229():
    x17 = ld x;
    check L231() else D43();
  L230():
    r112 = dyn base20[, `na.rm`](<lang `>`(x, `+`(maxc, eps))>, TRUE);
    goto L47(r112);
  L443():
    goto L117(r317);
  L446():
    dx33 = getTryDispatchBuiltinValue(dr28);
    goto L118(dx33);
  L447():
    goto L116(r321);
  L454():
    abbr_colnames4 = force? abbr_colnames3;
    checkMissing(abbr_colnames4);
    is_numeric2 = ldf `is.numeric` in base;
    r327 = dyn is_numeric2(abbr_colnames4);
    check L455() else D139();
  L458():
    abbr_colnames6 = force? abbr_colnames5;
    checkMissing(abbr_colnames6);
    c172 = `as.logical`(abbr_colnames6);
    c173 = `&&`(c169, c172);
    goto L122(c173);
  L460():
    abbreviate = ldf abbreviate;
    check L461() else D141();
  L511():
    paste2 = ldf paste;
    check L512() else D161();
  L519():
    st ans = r398;
    goto L141();
  D35():
    deopt 121 [x13];
  D37():
    deopt 128 [x15];
  D43():
    deopt 148 [x17];
  D139():
    deopt 498 [c160, r327];
  D141():
    deopt 504 [];
  D161():
    deopt 577 [];
  D163():
    deopt 584 [r392];
  L46():
    goto L44();
  L48():
    goto L49();
  L49():
    sym21 = ldf length;
    base21 = ldf length in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L239() else L240();
  L126(r348):
    c179 = `as.logical`(r348);
    if c179 then L127(c179) else L474();
  L216():
    x14 = force? x13;
    checkMissing(x14);
    abs = ldf abs in base;
    r103 = dyn abs(x14);
    check L217() else D36();
  L221():
    x16 = force? x15;
    checkMissing(x16);
    minc2 = ld minc;
    check L222() else D38();
  L225():
    stop1 = ldf stop;
    check L226() else D41();
  L231():
    x18 = force? x17;
    checkMissing(x18);
    maxc2 = ld maxc;
    check L232() else D44();
  L235():
    stop2 = ldf stop;
    check L236() else D47();
  L455():
    goto L121(c160, r327);
  L461():
    p35 = prom<V +>{
      sym47 = ldf dimnames;
      base47 = ldf dimnames in base;
      guard47 = `==`.4(sym47, base47);
      if guard47 then L2() else L3();
    L0(r329):
      c176 = `is.object`(r329);
      if c176 then L4() else L5(r329);
    L2():
      ans6 = ld ans;
      ans7 = force? ans6;
      checkMissing(ans7);
      dimnames2 = ldf dimnames in base;
      r330 = dyn dimnames2(ans7);
      goto L0(r330);
    L3():
      r328 = dyn base47(<sym ans>);
      goto L0(r328);
    L1(dx36):
      return dx36;
    L4():
      dr30 = tryDispatchBuiltin.1("[[", r329);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L6() else L5(dr30);
    L5(r332):
      __9 = ldf `[[` in base;
      r333 = dyn __9(r332, 2);
      goto L1(r333);
    L6():
      dx35 = getTryDispatchBuiltinValue(dr30);
      goto L1(dx35);
    };
    p36 = prom<V +>{
      abbr_colnames7 = ld `abbr.colnames`;
      abbr_colnames8 = force? abbr_colnames7;
      checkMissing(abbr_colnames8);
      return abbr_colnames8;
    };
    r336 = dyn abbreviate[, minlength](p35, p36);
    check L462() else D142();
  L471():
    abbr_colnames9 = ld `abbr.colnames`;
    check L473() else D147();
  L472():
    r347 = dyn base48(<sym abbr.colnames>);
    goto L126(r347);
  L512():
    p43 = prom<V +>{
      sQuote1 = ldf sQuote;
      p42 = prom<V +>{
        na10 = ld na;
        na11 = force? na10;
        checkMissing(na11);
        return na11;
      };
      r388 = dyn sQuote1(p42);
      return r388;
    };
    r390 = dyn paste2("\t    ## NA:", p43);
    check L513() else D162();
  L515():
    goto L138(r392);
  D36():
    deopt 124 [r103];
  D38():
    deopt 129 [x16, minc2];
  D41():
    deopt 139 [];
  D44():
    deopt 149 [x18, maxc2];
  D47():
    deopt 159 [];
  D142():
    deopt 508 [r336];
  D147():
    deopt 522 [abbr_colnames9];
  D162():
    deopt 580 [r390];
  L50(r121):
    st ns = r121;
    sym22 = ldf `as.character`;
    base22 = ldf `as.character` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L243() else L244();
  L127(c180):
    c197 = `as.logical`(c180);
    if c197 then L485() else L131();
  L217():
    goto L43(r103);
  L222():
    minc3 = force? minc2;
    checkMissing(minc3);
    eps1 = ld eps;
    check L223() else D39();
  L226():
    p22 = prom<V +>{
      range_msg = ld `range.msg`;
      range_msg1 = force? range_msg;
      checkMissing(range_msg1);
      return range_msg1;
    };
    r111 = dyn stop1[, domain](p22, NA_LGL);
    check L227() else D42();
  L232():
    maxc3 = force? maxc2;
    checkMissing(maxc3);
    eps3 = ld eps;
    check L233() else D45();
  L236():
    p23 = prom<V +>{
      range_msg2 = ld `range.msg`;
      range_msg3 = force? range_msg2;
      checkMissing(range_msg3);
      return range_msg3;
    };
    r118 = dyn stop2[, domain](p23, NA_LGL);
    check L237() else D48();
  L239():
    symbols3 = ld symbols;
    check L241() else D49();
  L240():
    r120 = dyn base21(<sym symbols>);
    goto L50(r120);
  L462():
    l38 = ld ans;
    dimnames3 = ldf dimnames;
    check L463() else D143();
  L473():
    abbr_colnames10 = force? abbr_colnames9;
    checkMissing(abbr_colnames10);
    c178 = `==`(abbr_colnames10, NULL);
    goto L126(c178);
  L474():
    sym49 = ldf `is.null`;
    base49 = ldf `is.null` in base;
    guard49 = `==`.4(sym49, base49);
    if guard49 then L475() else L476();
  L513():
    goto L140(r390);
  D39():
    deopt 130 [x16, minc3, eps1];
  D42():
    deopt 143 [r111];
  D45():
    deopt 150 [x18, maxc3, eps3];
  D48():
    deopt 163 [r118];
  D49():
    deopt 168 [symbols3];
  D143():
    deopt 510 [r336, l38, r336];
  L51(r124):
    st symbols = r124;
    anyDuplicated1 = ldf anyDuplicated;
    check L247() else D53();
  L128(c184, r350):
    c194 = `as.logical`(r350);
    c195 = `||`(c184, c194);
    goto L127(c195);
  L131():
    sym52 = ldf `is.logical`;
    base52 = ldf `is.logical` in base;
    guard52 = `==`.4(sym52, base52);
    if guard52 then L496() else L497();
  L223():
    eps2 = force? eps1;
    checkMissing(eps2);
    r107 = `-`(minc3, eps2);
    r108 = `<`(x16, r107);
    any3 = ldf any in base;
    r109 = dyn any3(r108, TRUE);
    check L224() else D40();
  L227():
    goto L44();
  L233():
    eps4 = force? eps3;
    checkMissing(eps4);
    r114 = `+`(maxc3, eps4);
    r115 = `>`(x18, r114);
    any4 = ldf any in base;
    r116 = dyn any4(r115, TRUE);
    check L234() else D46();
  L237():
    goto L49();
  L241():
    symbols4 = force? symbols3;
    checkMissing(symbols4);
    length3 = ldf length in base;
    r122 = dyn length3(symbols4);
    check L242() else D50();
  L243():
    symbols5 = ld symbols;
    check L245() else D51();
  L244():
    r123 = dyn base22(<sym symbols>);
    goto L51(r123);
  L463():
    r337 = dyn dimnames3(r336, NULL);
    check L464() else D144();
  L475():
    sym50 = ldf dimnames;
    base50 = ldf dimnames in base;
    guard50 = `==`.4(sym50, base50);
    if guard50 then L477() else L478();
  L476():
    r349 = dyn base49(<lang `[[`(dimnames(ans), 2)>);
    goto L128(c179, r349);
  L485():
    sym51 = ldf rep;
    base51 = ldf rep in base;
    guard51 = `==`.4(sym51, base51);
    if guard51 then L486() else L487();
  D40():
    deopt 137 [r109];
  D46():
    deopt 157 [r116];
  D50():
    deopt 171 [r122];
  D51():
    deopt 175 [symbols5];
  D53():
    deopt 181 [];
  D144():
    deopt 512 [r336, l38, r336, r337];
  L129(c187, r352):
    c188 = `is.object`(r352);
    if c188 then L481() else L482(c187, r352);
  L132(r358):
    l43 = ld ans;
    dimnames5 = ldf dimnames;
    check L488() else D150();
  L134(r370):
    r371 = `!`(r370);
    c200 = `as.logical`(r371);
    if c200 then L499() else L135();
  L224():
    goto L45(r109);
  L234():
    goto L47(r116);
  L242():
    goto L50(r122);
  L245():
    symbols6 = force? symbols5;
    checkMissing(symbols6);
    as_character = ldf `as.character` in base;
    r125 = dyn as_character(symbols6);
    check L246() else D52();
  L247():
    p24 = prom<V +>{
      symbols7 = ld symbols;
      symbols8 = force? symbols7;
      checkMissing(symbols8);
      return symbols8;
    };
    r127 = dyn anyDuplicated1(p24);
    check L248() else D54();
  L464():
    c177 = `is.object`(r337);
    if c177 then L465() else L466(r336, l38, r337);
  L477():
    ans8 = ld ans;
    check L479() else D148();
  L478():
    r351 = dyn base50(<sym ans>);
    goto L129(c179, r351);
  L486():
    rep = ldf rep in base;
    r359 = dyn rep("", <lang `[`(dim(ans), 2)>);
    goto L132(r359);
  L487():
    r357 = dyn base51("", <lang `[`(dim(ans), 2)>);
    goto L132(r357);
  L496():
    abbr_colnames11 = ld `abbr.colnames`;
    check L498() else D154();
  L497():
    r369 = dyn base52(<sym abbr.colnames>);
    goto L134(r369);
  D52():
    deopt 178 [r125];
  D54():
    deopt 183 [r127];
  D148():
    deopt 528 [c179, ans8];
  D150():
    deopt 541 [r358, l43, r358];
  D154():
    deopt 553 [abbr_colnames11];
  L124(r343, l42, dx38):
    dimnames__1 = ldf `dimnames<-`;
    check L468() else D145();
  L130(c192, dx40):
    c193 = `==`(dx40, NULL);
    goto L128(c192, c193);
  L135():
    goto L125(NULL);
  L246():
    goto L51(r125);
  L248():
    c95 = `as.logical`(r127);
    if c95 then L249() else L52();
  L465():
    dr32 = tryDispatchBuiltin.0("[[<-", r337, r336);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L467() else L466(r336, l38, dr32);
  L466(r340, l40, r341):
    ____ = ldf `[[<-` in base;
    r344 = dyn ____(r341, r336, 2);
    goto L124(r340, l40, r344);
  L479():
    ans9 = force? ans8;
    checkMissing(ans9);
    dimnames4 = ldf dimnames in base;
    r353 = dyn dimnames4(ans9);
    check L480() else D149();
  L481():
    dr34 = tryDispatchBuiltin.1("[[", r352);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L483() else L482(c187, dr34);
  L482(c190, r355):
    __10 = ldf `[[` in base;
    r356 = dyn __10(r355, 2);
    goto L130(c190, r356);
  L488():
    r360 = dyn dimnames5(r358, NULL);
    check L489() else D151();
  L498():
    abbr_colnames12 = force? abbr_colnames11;
    checkMissing(abbr_colnames12);
    c199 = `is.logical`(abbr_colnames12);
    goto L134(c199);
  L499():
    stop7 = ldf stop;
    check L500() else D155();
  D145():
    deopt 517 [r343, l42, dx38];
  D149():
    deopt 531 [c179, r353];
  D151():
    deopt 543 [r358, l43, r358, r360];
  D155():
    deopt 558 [];
  L52():
    goto L53();
  L53():
    nc2 = ld nc;
    check L253() else D57();
  L249():
    stop3 = ldf stop;
    check L250() else D55();
  L467():
    dx37 = getTryDispatchBuiltinValue(dr32);
    goto L124(r336, l38, dx37);
  L468():
    r345 = dyn dimnames__1(l42, NULL, dx38);
    check L469() else D146();
  L480():
    goto L129(c179, r353);
  L483():
    dx39 = getTryDispatchBuiltinValue(dr34);
    goto L130(c187, dx39);
  L489():
    c198 = `is.object`(r360);
    if c198 then L490() else L491(r358, l43, r360);
  L500():
    r372 = dyn stop7("invalid 'abbr.colnames'");
    check L501() else D156();
  D55():
    deopt 185 [];
  D57():
    deopt 193 [nc2];
  D146():
    deopt 519 [r343, r345];
  D156():
    deopt 560 [r372];
  L133(r366, l47, dx42):
    dimnames__2 = ldf `dimnames<-`;
    check L493() else D152();
  L250():
    p26 = prom<V +>{
      paste1 = ldf paste;
      p25 = prom<V +>{
        symbols9 = ld symbols;
        symbols10 = force? symbols9;
        checkMissing(symbols10);
        return symbols10;
      };
      r129 = dyn paste1[, collapse](p25, "|");
      return r129;
    };
    r131 = dyn stop3[, , domain]("'symbols' must be unique, but are = ", p26, NA_LGL);
    check L251() else D56();
  L253():
    nc3 = force? nc2;
    checkMissing(nc3);
    ns = ld ns;
    check L254() else D58();
  L469():
    st ans = r345;
    goto L125(r343);
  L490():
    dr36 = tryDispatchBuiltin.0("[[<-", r360, r358);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L492() else L491(r358, l43, dr36);
  L491(r363, l45, r364):
    ____1 = ldf `[[<-` in base;
    r367 = dyn ____1(r364, r358, 2);
    goto L133(r363, l45, r367);
  L501():
    goto L125(r372);
  D56():
    deopt 190 [r131];
  D58():
    deopt 194 [nc3, ns];
  D152():
    deopt 548 [r366, l47, dx42];
  L251():
    goto L53();
  L254():
    ns1 = force? ns;
    checkMissing(ns1);
    r133 = `+`(ns1, 1.0);
    r134 = `!=`(nc3, r133);
    c96 = `as.logical`(r134);
    if c96 then L255() else L54();
  L492():
    dx41 = getTryDispatchBuiltinValue(dr36);
    goto L133(r358, l43, dx41);
  L493():
    r368 = dyn dimnames__2(l47, NULL, dx42);
    check L494() else D153();
  D153():
    deopt 550 [r366, r368];
  L54():
    goto L57();
  L57():
    cut = ldf cut;
    check L264() else D64();
  L255():
    corr19 = ld corr;
    check L256() else D59();
  L494():
    st ans = r368;
    goto L125(r366);
  D59():
    deopt 199 [corr19];
  D64():
    deopt 212 [];
  L256():
    corr20 = force? corr19;
    checkMissing(corr20);
    c97 = `as.logical`(corr20);
    if c97 then L257() else L55();
  L264():
    p27 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    p28 = prom<V +>{
      cutpoints23 = ld cutpoints;
      cutpoints24 = force? cutpoints23;
      checkMissing(cutpoints24);
      return cutpoints24;
    };
    r141 = dyn cut[, breaks, `include.lowest`, labels](p27, p28, TRUE, FALSE);
    check L265() else D65();
  D65():
    deopt 220 [r141];
  L55():
    stop5 = ldf stop;
    check L261() else D62();
  L56(r136):
    goto L57();
  L257():
    stop4 = ldf stop;
    check L258() else D60();
  L265():
    st iS = r141;
    sym23 = ldf any;
    base23 = ldf any in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L266() else L267();
  D60():
    deopt 202 [];
  D62():
    deopt 206 [];
  L58(r143):
    c98 = `as.logical`(r143);
    if c98 then L273() else L60();
  L258():
    r135 = dyn stop4("number of 'cutpoints' must be one less than number of symbols");
    check L259() else D61();
  L261():
    r137 = dyn stop5("number of 'cutpoints' must be one more than number of symbols");
    check L262() else D63();
  L266():
    sym24 = ldf `is.na`;
    base24 = ldf `is.na` in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L268() else L269();
  L267():
    r142 = dyn base23(<lang `<-`(ii, is.na(iS))>);
    goto L58(r142);
  D61():
    deopt 204 [r135];
  D63():
    deopt 208 [r137];
  L59(r145):
    st ii = r145;
    any5 = ldf any in base;
    r147 = dyn any5(r145);
    check L272() else D68();
  L60():
    goto L67(NULL);
  L67(r227):
    goto L68();
  L259():
    goto L56(r135);
  L262():
    goto L56(r137);
  L268():
    iS = ld iS;
    check L270() else D66();
  L269():
    r144 = dyn base24(<sym iS>);
    goto L59(r144);
  L273():
    l = ld iS;
    c99 = `is.object`(l);
    if c99 then L274() else L275(1.0, l);
  D66():
    deopt 226 [iS];
  D68():
    deopt 232 [r147];
  L61(r151, dx5):
    st iS = dx5;
    goto L67(r151);
  L270():
    iS1 = force? iS;
    checkMissing(iS1);
    is_na1 = ldf `is.na` in base;
    r146 = dyn is_na1(iS1);
    check L271() else D67();
  L272():
    goto L58(r147);
  L274():
    dr4 = tryDispatchBuiltin.0("[<-", l, 1.0);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L276() else L275(1.0, dr4);
  L275(r149, l2):
    which = ldf which;
    check L277() else D69();
  D67():
    deopt 229 [r146];
  D69():
    deopt 237 [r149, l2, 1.0];
  L271():
    goto L59(r146);
  L276():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L61(1.0, dx4);
  L277():
    p29 = prom<V +>{
      ii = ld ii;
      ii1 = force? ii;
      checkMissing(ii1);
      return ii1;
    };
    r153 = dyn which(p29);
    check L278() else D70();
  D70():
    deopt 239 [r149, l2, 1.0, r153];
  L278():
    c100 = `is.object`(r153);
    if c100 then L279() else L280(r149, l2, 1.0, r153);
  L62(r162, l6, r163, dx7):
    ___ = ldf `[<-` in base;
    r226 = dyn ___(l6, r163, dx7);
    goto L61(r162, r226);
  L279():
    dr6 = tryDispatchBuiltin.1("[", r153);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L281() else L280(r149, l2, 1.0, dr6);
  L280(r157, l4, r158, r159):
    sym25 = ldf `is.na`;
    base25 = ldf `is.na` in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L282() else L283();
  L63(r171, l9, r172, r173, r174):
    r189 = `!`(r174);
    sym26 = ldf abs;
    base26 = ldf abs in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L290() else L291();
  L281():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L62(r149, l2, 1.0, dx6);
  L282():
    x21 = ld x;
    check L284() else D71();
  L283():
    r170 = dyn base25(<lang `[`(x, ii)>);
    goto L63(r157, l4, r158, r159, r170);
  D71():
    deopt 242 [r157, l4, r158, r159, x21];
  L65(r199, l16, r200, r201, r202, r203):
    eps5 = ld eps;
    check L299() else D78();
  L284():
    x22 = force? x21;
    checkMissing(x22);
    c101 = `is.object`(x22);
    if c101 then L285() else L286(r157, l4, r158, r159, x22);
  L290():
    x25 = ld x;
    check L292() else D74();
  L291():
    r198 = dyn base26(<lang `-`(`[`(x, ii), minc)>);
    goto L65(r171, l9, r172, r173, r189, r198);
  D74():
    deopt 251 [r171, l9, r172, r173, r189, x25];
  D78():
    deopt 259 [r199, l16, r200, r201, r202, r203, eps5];
  L64(r184, l13, r185, r186, dx9):
    is_na2 = ldf `is.na` in base;
    r188 = dyn is_na2(dx9);
    check L289() else D73();
  L285():
    dr8 = tryDispatchBuiltin.1("[", x22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L287() else L286(r157, l4, r158, r159, dr8);
  L286(r178, l11, r179, r180, x24):
    ii2 = ld ii;
    check L288() else D72();
  L292():
    x26 = force? x25;
    checkMissing(x26);
    c102 = `is.object`(x26);
    if c102 then L293() else L294(r171, l9, r172, r173, r189, x26);
  L299():
    eps6 = force? eps5;
    checkMissing(eps6);
    r223 = `<`(r203, eps6);
    r224 = `&&`(r202, r223);
    __4 = ldf `[` in base;
    r225 = dyn __4(r201, r224);
    goto L62(r199, l16, r200, r225);
  D72():
    deopt 244 [r178, l11, r179, r180, x24, ii2];
  D73():
    deopt 248 [r184, l13, r185, r186, r188];
  L66(r216, l20, r217, r218, r219, dx11):
    minc4 = ld minc;
    check L297() else D76();
  L287():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L64(r157, l4, r158, r159, dx8);
  L288():
    ii3 = force? ii2;
    __2 = ldf `[` in base;
    r187 = dyn __2(x24, ii3);
    goto L64(r178, l11, r179, r180, r187);
  L289():
    goto L63(r184, l13, r185, r186, r188);
  L293():
    dr10 = tryDispatchBuiltin.1("[", x26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L295() else L294(r171, l9, r172, r173, r189, dr10);
  L294(r208, l18, r209, r210, r211, x28):
    ii4 = ld ii;
    check L296() else D75();
  D75():
    deopt 253 [r208, l18, r209, r210, r211, x28, ii4];
  D76():
    deopt 255 [r216, l20, r217, r218, r219, dx11, minc4];
  L295():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L66(r171, l9, r172, r173, r189, dx10);
  L296():
    ii5 = force? ii4;
    __3 = ldf `[` in base;
    r220 = dyn __3(x28, ii5);
    goto L66(r208, l18, r209, r210, r211, r220);
  L297():
    minc5 = force? minc4;
    checkMissing(minc5);
    r221 = `-`(dx11, minc5);
    abs1 = ldf abs in base;
    r222 = dyn abs1(r221);
    check L298() else D77();
  D77():
    deopt 259 [r216, l20, r217, r218, r219, r222];
  L298():
    goto L65(r216, l20, r217, r218, r219, r222);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg round:cls, reg r2:V |
    mkenv;
    st n = n;
    sym = ldf round;
    base = ldf round in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    round = ldf round in base;
    r2 = dyn round(<lang choose(n, `-`(`:`(0.0, N), `%/%`(`(`(`-`(N, n)), 2.0)))>);
    goto L0(r2);
  L2():
    r = dyn base(<lang choose(n, `-`(`:`(0.0, N), `%/%`(`(`(`-`(N, n)), 2.0)))>);
    goto L0(r);
  }
}