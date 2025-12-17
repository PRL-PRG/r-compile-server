fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3400273441;
    st `print.summary.loess` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3400273441(x, digits, `...`) {
  (reg x:*, reg digits:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `...`:dots?, reg print_loess:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg digits1:*, reg digits2:V, reg p2:p(V +), reg ddd1:dots?, reg r8:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg cat:cls, reg format:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg round:cls, reg r12:V, reg p3:p(V +), reg r14:V, reg p4:p(V +), reg prs:*, reg prs1:V, reg c1:L, reg prs3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r16:V, reg p5:p(V +), reg r18:V, reg cat1:cls, reg r19:V, reg cat2:cls, reg format1:cls, reg prs4:*, reg prs5:V, reg c2:L, reg prs7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r20:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg r24:V, reg cat3:cls, reg prs8:*, reg prs9:V, reg c3:L, reg prs11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r25:V, reg p8:p(V +), reg r27:V, reg cat4:cls, reg prs12:*, reg prs13:V, reg c4:L, reg prs15:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r28:V, reg p9:p(V +), reg r30:V, reg prs16:*, reg prs17:V, reg c5:L, reg prs19:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r31:V, reg r32:V, reg c6:L, reg cat5:cls, reg prs20:*, reg prs21:V, reg c7:L, reg prs23:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r33:V, reg p10:p(V +), reg r35:V, reg cat6:cls, reg prs24:*, reg prs25:V, reg c8:L, reg prs27:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r37:V, reg p11:p(V +), reg r39:V, reg prs28:*, reg prs29:V, reg c9:L, reg prs31:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r40:V, reg r41:V, reg c10:L, reg cat7:cls, reg format2:cls, reg prs32:*, reg prs33:V, reg c11:L, reg prs35:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r42:V, reg p12:p(V +), reg r44:V, reg p13:p(V +), reg r46:V, reg cat8:cls, reg prs36:*, reg prs37:V, reg c12:L, reg prs39:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r48:V, reg p14:p(V +), reg r50:V, reg cat9:cls, reg prs40:*, reg prs41:V, reg c13:L, reg prs43:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r51:V, reg p15:p(V +), reg r53:V, reg cat10:cls, reg prs44:*, reg prs45:V, reg c14:L, reg prs47:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r54:V, reg p16:p(V +), reg r56:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r57:V, reg r58:V, reg x7:*, reg x8:V, reg invisible:cls, reg r59:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    st `...` = ddd;
    print_loess = ldf `print.loess`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    ddd1 = ld `...`;
    r8 = dyn print_loess[, digits, `...`](p1, p2, ddd1);
    check L8() else D1();
  D1():
    deopt 6 [r8];
  L8():
    x3 = ld x;
    check L9() else D2();
  D2():
    deopt 7 [x3];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L11() else L12(x4);
  L10(dx1):
    st prs = dx1;
    cat = ldf cat;
    check L14() else D3();
  L11():
    dr = tryDispatchBuiltin.1("$", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(x6):
    r9 = `$`(x6, <sym pars>);
    goto L10(r9);
  D3():
    deopt 12 [];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L14():
    p4 = prom<V +>{
      format = ldf format;
      p3 = prom<V +>{
        sym1 = ldf round;
        base1 = ldf round in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r11):
        return r11;
      L1():
        round = ldf round in base;
        r12 = dyn round(<lang `$`(x, trace.hat)>, 2);
        goto L0(r12);
      L2():
        r10 = dyn base1(<lang `$`(x, trace.hat)>, 2);
        goto L0(r10);
      };
      r14 = dyn format(p3);
      return r14;
    };
    p5 = prom<V +>{
      prs = ld prs;
      prs1 = force? prs;
      checkMissing(prs1);
      c1 = `is.object`(prs1);
      if c1 then L1() else L2(prs1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", prs1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(prs3):
      r16 = `$`(prs3, <sym trace.hat>);
      goto L0(r16);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r18 = dyn cat[, , , , , sep]("Trace of smoother matrix: ", p4, "  (", p5, ")\n", "");
    check L15() else D4();
  D4():
    deopt 20 [r18];
  L15():
    cat1 = ldf cat;
    check L16() else D5();
  D5():
    deopt 22 [];
  L16():
    r19 = dyn cat1("\nControl settings:\n");
    check L17() else D6();
  D6():
    deopt 24 [r19];
  L17():
    cat2 = ldf cat;
    check L18() else D7();
  D7():
    deopt 26 [];
  L18():
    p7 = prom<V +>{
      format1 = ldf format;
      p6 = prom<V +>{
        prs4 = ld prs;
        prs5 = force? prs4;
        checkMissing(prs5);
        c2 = `is.object`(prs5);
        if c2 then L1() else L2(prs5);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", prs5);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(prs7):
        r20 = `$`(prs7, <sym span>);
        goto L0(r20);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r22 = dyn format1(p6);
      return r22;
    };
    r24 = dyn cat2("  span     : ", p7, "\n");
    check L19() else D8();
  D8():
    deopt 30 [r24];
  L19():
    cat3 = ldf cat;
    check L20() else D9();
  D9():
    deopt 32 [];
  L20():
    p8 = prom<V +>{
      prs8 = ld prs;
      prs9 = force? prs8;
      checkMissing(prs9);
      c3 = `is.object`(prs9);
      if c3 then L1() else L2(prs9);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", prs9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(prs11):
      r25 = `$`(prs11, <sym degree>);
      goto L0(r25);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r27 = dyn cat3("  degree   : ", p8, "\n");
    check L21() else D10();
  D10():
    deopt 36 [r27];
  L21():
    cat4 = ldf cat;
    check L22() else D11();
  D11():
    deopt 38 [];
  L22():
    p9 = prom<V +>{
      prs12 = ld prs;
      prs13 = force? prs12;
      checkMissing(prs13);
      c4 = `is.object`(prs13);
      if c4 then L1() else L2(prs13);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", prs13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(prs15):
      r28 = `$`(prs15, <sym family>);
      goto L0(r28);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r30 = dyn cat4("  family   : ", p9);
    check L23() else D12();
  D12():
    deopt 41 [r30];
  L23():
    prs16 = ld prs;
    check L24() else D13();
  D13():
    deopt 42 [prs16];
  L24():
    prs17 = force? prs16;
    checkMissing(prs17);
    c5 = `is.object`(prs17);
    if c5 then L26() else L27(prs17);
  L25(dx11):
    r32 = `!=`(dx11, "gaussian");
    c6 = `as.logical`(r32);
    if c6 then L29() else L2();
  L26():
    dr10 = tryDispatchBuiltin.1("$", prs17);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L28() else L27(dr10);
  L27(prs19):
    r31 = `$`(prs19, <sym family>);
    goto L25(r31);
  L2():
    goto L3();
  L3():
    cat6 = ldf cat;
    check L33() else D16();
  L28():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L25(dx10);
  L29():
    cat5 = ldf cat;
    check L30() else D14();
  D14():
    deopt 48 [];
  D16():
    deopt 55 [];
  L30():
    p10 = prom<V +>{
      prs20 = ld prs;
      prs21 = force? prs20;
      checkMissing(prs21);
      c7 = `is.object`(prs21);
      if c7 then L1() else L2(prs21);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", prs21);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(prs23):
      r33 = `$`(prs23, <sym iterations>);
      goto L0(r33);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r35 = dyn cat5("\t    iterations =", p10);
    check L31() else D15();
  L33():
    p11 = prom<V +>{
      prs24 = ld prs;
      prs25 = force? prs24;
      checkMissing(prs25);
      c8 = `is.object`(prs25);
      if c8 then L1() else L2(prs25);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", prs25);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(prs27):
      r37 = `$`(prs27, <sym surface>);
      goto L0(r37);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r39 = dyn cat6("\n  surface  : ", p11);
    check L34() else D17();
  D15():
    deopt 51 [r35];
  D17():
    deopt 58 [r39];
  L31():
    goto L3();
  L34():
    prs28 = ld prs;
    check L35() else D18();
  D18():
    deopt 59 [prs28];
  L35():
    prs29 = force? prs28;
    checkMissing(prs29);
    c9 = `is.object`(prs29);
    if c9 then L37() else L38(prs29);
  L36(dx17):
    r41 = `==`(dx17, "interpolate");
    c10 = `as.logical`(r41);
    if c10 then L40() else L4();
  L37():
    dr16 = tryDispatchBuiltin.1("$", prs29);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L39() else L38(dr16);
  L38(prs31):
    r40 = `$`(prs31, <sym surface>);
    goto L36(r40);
  L4():
    goto L5();
  L5():
    cat8 = ldf cat;
    check L44() else D21();
  L39():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L36(dx16);
  L40():
    cat7 = ldf cat;
    check L41() else D19();
  D19():
    deopt 65 [];
  D21():
    deopt 72 [];
  L41():
    p13 = prom<V +>{
      format2 = ldf format;
      p12 = prom<V +>{
        prs32 = ld prs;
        prs33 = force? prs32;
        checkMissing(prs33);
        c11 = `is.object`(prs33);
        if c11 then L1() else L2(prs33);
      L0(dx19):
        return dx19;
      L1():
        dr18 = tryDispatchBuiltin.1("$", prs33);
        dc9 = getTryDispatchBuiltinDispatched(dr18);
        if dc9 then L3() else L2(dr18);
      L2(prs35):
        r42 = `$`(prs35, <sym cell>);
        goto L0(r42);
      L3():
        dx18 = getTryDispatchBuiltinValue(dr18);
        goto L0(dx18);
      };
      r44 = dyn format2(p12);
      return r44;
    };
    r46 = dyn cat7("\t  cell =", p13);
    check L42() else D20();
  L44():
    p14 = prom<V +>{
      prs36 = ld prs;
      prs37 = force? prs36;
      checkMissing(prs37);
      c12 = `is.object`(prs37);
      if c12 then L1() else L2(prs37);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", prs37);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(prs39):
      r48 = `$`(prs39, <sym normalize>);
      goto L0(r48);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    r50 = dyn cat8("\n  normalize: ", p14);
    check L45() else D22();
  D20():
    deopt 68 [r46];
  D22():
    deopt 75 [r50];
  L42():
    goto L5();
  L45():
    cat9 = ldf cat;
    check L46() else D23();
  D23():
    deopt 77 [];
  L46():
    p15 = prom<V +>{
      prs40 = ld prs;
      prs41 = force? prs40;
      checkMissing(prs41);
      c13 = `is.object`(prs41);
      if c13 then L1() else L2(prs41);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("$", prs41);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(prs43):
      r51 = `$`(prs43, <sym parametric>);
      goto L0(r51);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r53 = dyn cat9("\n parametric: ", p15);
    check L47() else D24();
  D24():
    deopt 80 [r53];
  L47():
    cat10 = ldf cat;
    check L48() else D25();
  D25():
    deopt 82 [];
  L48():
    p16 = prom<V +>{
      prs44 = ld prs;
      prs45 = force? prs44;
      checkMissing(prs45);
      c14 = `is.object`(prs45);
      if c14 then L1() else L2(prs45);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("$", prs45);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(prs47):
      r54 = `$`(prs47, <sym drop.square>);
      goto L0(r54);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r56 = dyn cat10("\ndrop.square: ", p16, "\n");
    check L49() else D26();
  D26():
    deopt 86 [r56];
  L49():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L6(r58):
    popenv;
    return r58;
  L50():
    x7 = ld x;
    check L52() else D27();
  L51():
    r57 = dyn base2(<sym x>);
    goto L6(r57);
  D27():
    deopt 89 [x7];
  L52():
    x8 = force? x7;
    checkMissing(x8);
    invisible = ldf invisible in base;
    r59 = dyn invisible(x8);
    check L53() else D28();
  D28():
    deopt 92 [r59];
  L53():
    goto L6(r59);
  }
}