fun main() {
  () -+> V { reg r:cls, reg object_size:cls, reg letters:*, reg letters1:V, reg p:p(V +), reg r2:V, reg object_size1:cls, reg ls:*, reg ls1:V, reg p1:p(V +), reg r4:V, reg format:cls, reg object_size2:cls, reg library:*, reg library1:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg object_size3:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg rep:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg print:cls, reg sl:*, reg sl1:V, reg p5:p(V +), reg r15:V, reg print1:cls, reg sl2:*, reg sl3:V, reg p6:p(V +), reg r17:V, reg print2:cls, reg sl4:*, reg sl5:V, reg p7:p(V +), reg r19:V, reg print3:cls, reg sl6:*, reg sl7:V, reg p8:p(V +), reg r21:V, reg sapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg c:cls, reg r24:V, reg p9:p(V +), reg r26:cls, reg p10:p(V +), reg r28:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg unique:cls, reg substr:cls, reg as_vector:cls, reg fsl:*, reg fsl1:V, reg p11:p(V +), reg r32:V, reg p12:p(V +), reg r34:V, reg p13:p(V +), reg r36:V, reg format1:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r37:V, reg r38:V, reg round:cls, reg r39:V, reg p14:p(V +), reg r41:V, reg identical:cls, reg r42:V, reg p15:p(V +), reg r44:V, reg sapply1:cls, reg ls2:cls, reg r45:V, reg p16:p(V +), reg r47:cls, reg p17:p(V +), reg r49:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r50:V, reg r51:V, reg interactive:cls, reg r52:V, reg c1:L, reg as_matrix:cls, reg rev:cls, reg sort:cls, reg z:*, reg z1:V, reg p18:p(V +), reg r54:V, reg p19:p(V +), reg r56:V, reg c2:L, reg r58:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r59:V, reg p20:p(V +), reg r61:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg rev1:cls, reg sort1:cls, reg z2:*, reg z3:V, reg p21:p(V +), reg r65:V, reg p22:p(V +), reg r67:V, reg c3:L, reg r69:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r70:V, reg names:cls, reg r71:V |
    mkenv;
    r = clos inner2501545716;
    st `object.size` = r;
    object_size = ldf `object.size`;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    p = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      return letters1;
    };
    r2 = dyn object_size(p);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    object_size1 = ldf `object.size`;
    check L6() else D2();
  D2():
    deopt 8 [];
  L6():
    p1 = prom<V +>{
      ls = ld ls;
      ls1 = force? ls;
      checkMissing(ls1);
      return ls1;
    };
    r4 = dyn object_size1(p1);
    check L7() else D3();
  D3():
    deopt 10 [r4];
  L7():
    format = ldf format;
    check L8() else D4();
  D4():
    deopt 12 [];
  L8():
    p3 = prom<V +>{
      object_size2 = ldf `object.size`;
      p2 = prom<V +>{
        library = ld library;
        library1 = force? library;
        checkMissing(library1);
        return library1;
      };
      r6 = dyn object_size2(p2);
      return r6;
    };
    r8 = dyn format[, units](p3, "auto");
    check L9() else D5();
  D5():
    deopt 16 [r8];
  L9():
    object_size3 = ldf `object.size`;
    check L10() else D6();
  D6():
    deopt 18 [];
  L10():
    p4 = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r10):
      return r10;
    L1():
      rep = ldf rep in base;
      r11 = dyn rep(<sym letters>, 1000.0);
      goto L0(r11);
    L2():
      r9 = dyn base(<sym letters>, 1000.0);
      goto L0(r9);
    };
    r13 = dyn object_size3(p4);
    check L11() else D7();
  D7():
    deopt 20 [r13];
  L11():
    st sl = r13;
    print = ldf print;
    check L12() else D8();
  D8():
    deopt 23 [];
  L12():
    p5 = prom<V +>{
      sl = ld sl;
      sl1 = force? sl;
      checkMissing(sl1);
      return sl1;
    };
    r15 = dyn print(p5);
    check L13() else D9();
  D9():
    deopt 25 [r15];
  L13():
    print1 = ldf print;
    check L14() else D10();
  D10():
    deopt 27 [];
  L14():
    p6 = prom<V +>{
      sl2 = ld sl;
      sl3 = force? sl2;
      checkMissing(sl3);
      return sl3;
    };
    r17 = dyn print1[, units](p6, "auto");
    check L15() else D11();
  D11():
    deopt 31 [r17];
  L15():
    print2 = ldf print;
    check L16() else D12();
  D12():
    deopt 33 [];
  L16():
    p7 = prom<V +>{
      sl4 = ld sl;
      sl5 = force? sl4;
      checkMissing(sl5);
      return sl5;
    };
    r19 = dyn print2[, units, standard](p7, "auto", "IEC");
    check L17() else D13();
  D13():
    deopt 39 [r19];
  L17():
    print3 = ldf print;
    check L18() else D14();
  D14():
    deopt 41 [];
  L18():
    p8 = prom<V +>{
      sl6 = ld sl;
      sl7 = force? sl6;
      checkMissing(sl7);
      return sl7;
    };
    r21 = dyn print3[, units, standard](p8, "auto", "SI");
    check L19() else D15();
  D15():
    deopt 47 [r21];
  L19():
    sapply = ldf sapply;
    check L20() else D16();
  D16():
    deopt 49 [];
  L20():
    p9 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      c = ldf c in base;
      r24 = dyn c("Kb", "KB", "KiB");
      goto L0(r24);
    L2():
      r22 = dyn base1("Kb", "KB", "KiB");
      goto L0(r22);
    };
    p10 = prom<V +>{
      r26 = clos inner883694641;
      return r26;
    };
    r28 = dyn sapply(p9, p10);
    check L21() else D17();
  D17():
    deopt 52 [r28];
  L21():
    st fsl = r28;
    stopifnot = ldf stopifnot;
    check L22() else D18();
  D18():
    deopt 55 [];
  L22():
    p15 = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      unique = ldf unique;
      p13 = prom<V +>{
        substr = ldf substr;
        p12 = prom<V +>{
          as_vector = ldf `as.vector`;
          p11 = prom<V +>{
            fsl = ld fsl;
            fsl1 = force? fsl;
            checkMissing(fsl1);
            return fsl1;
          };
          r32 = dyn as_vector(p11);
          return r32;
        };
        r34 = dyn substr(p12, 1.0, 5.0);
        return r34;
      };
      r36 = dyn unique(p13);
      format1 = ldf format;
      p14 = prom<V +>{
        sym3 = ldf round;
        base3 = ldf round in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r38):
        return r38;
      L1():
        round = ldf round in base;
        r39 = dyn round(<lang `/`(as.vector(sl), 1024.0)>, 1.0);
        goto L0(r39);
      L2():
        r37 = dyn base3(<lang `/`(as.vector(sl), 1024.0)>, 1.0);
        goto L0(r37);
      };
      r41 = dyn format1(p14);
      identical = ldf identical in base;
      r42 = dyn identical(r36, r41, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r42);
    L2():
      r29 = dyn base2(<lang unique(substr(as.vector(fsl), 1.0, 5.0))>, <lang format(round(`/`(as.vector(sl), 1024.0), 1.0))>);
      goto L0(r29);
    };
    r44 = dyn stopifnot(p15);
    check L23() else D19();
  D19():
    deopt 57 [r44];
  L23():
    sapply1 = ldf sapply;
    check L24() else D20();
  D20():
    deopt 59 [];
  L24():
    p16 = prom<V +>{
      ls2 = ldf ls;
      r45 = dyn ls2("package:base");
      return r45;
    };
    p17 = prom<V +>{
      r47 = clos inner2501545716;
      return r47;
    };
    r49 = dyn sapply1(p16, p17);
    check L25() else D21();
  D21():
    deopt 62 [r49];
  L25():
    st z = r49;
    sym4 = ldf interactive;
    base4 = ldf interactive in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L26() else L27();
  L0(r51):
    c1 = `as.logical`(r51);
    if c1 then L29() else L1();
  L26():
    interactive = ldf interactive in base;
    r52 = dyn interactive();
    check L28() else D22();
  L27():
    r50 = dyn base4();
    goto L0(r50);
  D22():
    deopt 67 [r52];
  L1():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  L28():
    goto L0(r52);
  L29():
    as_matrix = ldf `as.matrix`;
    check L30() else D23();
  D23():
    deopt 69 [];
  L2(r63):
    popenv;
    return r63;
  L30():
    p20 = prom<V +>{
      rev = ldf rev;
      p19 = prom<V +>{
        sort = ldf sort;
        p18 = prom<V +>{
          z = ld z;
          z1 = force? z;
          checkMissing(z1);
          return z1;
        };
        r54 = dyn sort(p18);
        return r54;
      };
      r56 = dyn rev(p19);
      c2 = `is.object`(r56);
      if c2 then L1() else L2(r56);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", r56);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r58):
      __ = ldf `[` in base;
      r59 = dyn __(r58, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
      goto L0(r59);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r61 = dyn as_matrix(p20);
    check L31() else D24();
  L33():
    rev1 = ldf rev;
    check L35() else D25();
  L34():
    r62 = dyn base5(<lang `[`(rev(sort(z)), `:`(1.0, 10.0))>);
    goto L2(r62);
  D24():
    deopt 71 [r61];
  D25():
    deopt 75 [];
  L31():
    popenv;
    return r61;
  L35():
    p22 = prom<V +>{
      sort1 = ldf sort;
      p21 = prom<V +>{
        z2 = ld z;
        z3 = force? z2;
        checkMissing(z3);
        return z3;
      };
      r65 = dyn sort1(p21);
      return r65;
    };
    r67 = dyn rev1(p22);
    check L36() else D26();
  D26():
    deopt 77 [r67];
  L36():
    c3 = `is.object`(r67);
    if c3 then L37() else L38(r67);
  L3(dx3):
    names = ldf names in base;
    r71 = dyn names(dx3);
    check L40() else D27();
  L37():
    dr2 = tryDispatchBuiltin.1("[", r67);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dr2);
  L38(r69):
    __1 = ldf `[` in base;
    r70 = dyn __1(r69, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    goto L3(r70);
  D27():
    deopt 82 [r71];
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L40():
    goto L2(r71);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg C_objectSize:*, reg C_objectSize1:V, reg x1:*, reg x2:V, reg vargs:dots, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st x = x;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `.Call`;
      base = ldf `.Call` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      C_objectSize = ld C_objectSize;
      C_objectSize1 = force? C_objectSize;
      checkMissing(C_objectSize1);
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      vargs = dots[x2];
      r2 = `.Call`(C_objectSize1, vargs, <missing>);
      goto L0(r2);
    L2():
      r = dyn base(<sym C_objectSize>, <sym x>);
      goto L0(r);
    };
    r4 = dyn structure[, class](p, "object_size");
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg format:cls, reg sl:*, reg sl1:V, reg p:p(V +), reg u1:*, reg u2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st u = u;
    format = ldf format;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sl = ld sl;
      sl1 = force? sl;
      checkMissing(sl1);
      return sl1;
    };
    p1 = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    r2 = dyn format[, units](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}