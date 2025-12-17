fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.kmeans` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg length:cls, reg r3:V, reg p:p(V +), reg paste:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg cat1:cls, reg r10:V, reg print:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r11:V, reg p3:p(V +), reg ddd1:dots?, reg r13:V, reg cat2:cls, reg r14:V, reg print1:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r15:V, reg p4:p(V +), reg ddd2:dots?, reg r17:V, reg cat3:cls, reg r18:V, reg print2:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r19:V, reg p5:p(V +), reg ddd3:dots?, reg r21:V, reg sprintf:cls, reg x21:*, reg x22:V, reg c5:L, reg r23:R, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg r25:R, reg dx11:V, reg r26:V, reg r27:V, reg x25:*, reg x26:V, reg c6:L, reg r29:V, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg r31:V, reg dx13:V, reg r32:V, reg r33:V, reg p6:p(V +), reg r35:V, reg cat4:cls, reg sub:cls, reg getOption:cls, reg r36:V, reg p7:p(V +), reg ratio:*, reg ratio1:V, reg p8:p(V +), reg r39:V, reg p9:p(V +), reg r41:V, reg print3:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r42:V, reg r43:V, reg x29:*, reg x30:V, reg names:cls, reg r44:V, reg p10:p(V +), reg r46:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r47:V, reg r48:V, reg x31:*, reg x32:V, reg c7:L, reg x34:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r49:V, reg c8:V, reg r50:V, reg c9:L, reg c11:V, reg x35:*, reg x36:V, reg c12:L, reg c14:L, reg x38:V, reg dr16:V, reg dc8:L, reg dx16:V, reg c16:L, reg dx17:V, reg r51:V, reg r52:V, reg c17:L, reg c18:V, reg c20:L, reg cat5:cls, reg r53:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r55:V, reg r56:V, reg x39:*, reg x40:V, reg invisible:cls, reg r57:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L4() else L5(x2);
    L2():
      r = dyn base(<lang `$`(x, size)>);
      goto L0(r);
    L3(dx1):
      length = ldf length in base;
      r3 = dyn length(dx1);
      goto L0(r3);
    L4():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(x4):
      r2 = `$`(x4, <sym size>);
      goto L3(r2);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L3(dx);
    };
    p2 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        c1 = `is.object`(x6);
        if c1 then L1() else L2(x6);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", x6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(x8):
        r5 = `$`(x8, <sym size>);
        goto L0(r5);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r7 = dyn paste[, collapse](p1, ", ");
      return r7;
    };
    r9 = dyn cat[, , , , , sep]("K-means clustering with ", p, " clusters of sizes ", p2, "\n", "");
    check L6() else D1();
  D1():
    deopt 9 [r9];
  L6():
    cat1 = ldf cat;
    check L7() else D2();
  D2():
    deopt 11 [];
  L7():
    r10 = dyn cat1("\nCluster means:\n");
    check L8() else D3();
  D3():
    deopt 13 [r10];
  L8():
    print = ldf print;
    check L9() else D4();
  D4():
    deopt 15 [];
  L9():
    p3 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c2 = `is.object`(x10);
      if c2 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r11 = `$`(x12, <sym centers>);
      goto L0(r11);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    ddd1 = ld `...`;
    r13 = dyn print[, `...`](p3, ddd1);
    check L10() else D5();
  D5():
    deopt 18 [r13];
  L10():
    cat2 = ldf cat;
    check L11() else D6();
  D6():
    deopt 20 [];
  L11():
    r14 = dyn cat2("\nClustering vector:\n");
    check L12() else D7();
  D7():
    deopt 22 [r14];
  L12():
    print1 = ldf print;
    check L13() else D8();
  D8():
    deopt 24 [];
  L13():
    p4 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c3 = `is.object`(x14);
      if c3 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r15 = `$`(x16, <sym cluster>);
      goto L0(r15);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    ddd2 = ld `...`;
    r17 = dyn print1[, `...`](p4, ddd2);
    check L14() else D9();
  D9():
    deopt 27 [r17];
  L14():
    cat3 = ldf cat;
    check L15() else D10();
  D10():
    deopt 29 [];
  L15():
    r18 = dyn cat3("\nWithin cluster sum of squares by cluster:\n");
    check L16() else D11();
  D11():
    deopt 31 [r18];
  L16():
    print2 = ldf print;
    check L17() else D12();
  D12():
    deopt 33 [];
  L17():
    p5 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c4 = `is.object`(x18);
      if c4 then L1() else L2(x18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x20):
      r19 = `$`(x20, <sym withinss>);
      goto L0(r19);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    ddd3 = ld `...`;
    r21 = dyn print2[, `...`](p5, ddd3);
    check L18() else D13();
  D13():
    deopt 36 [r21];
  L18():
    sprintf = ldf sprintf;
    check L19() else D14();
  D14():
    deopt 38 [];
  L19():
    p6 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c5 = `is.object`(x22);
      if c5 then L1() else L2(100.0, x22);
    L0(r25, dx11):
      r27 = `*`(r25, dx11);
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c6 = `is.object`(x26);
      if c6 then L5() else L6(r27, x26);
    L1():
      dr10 = tryDispatchBuiltin.1("$", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(100.0, dr10);
    L2(r23, x24):
      r26 = `$`(x24, <sym betweenss>);
      goto L0(r23, r26);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(100.0, dx10);
    L4(r31, dx13):
      r33 = `/`(r31, dx13);
      return r33;
    L5():
      dr12 = tryDispatchBuiltin.1("$", x26);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(r27, dr12);
    L6(r29, x28):
      r32 = `$`(x28, <sym totss>);
      goto L4(r29, r32);
    L7():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L4(r27, dx12);
    };
    r35 = dyn sprintf(" (between_SS / total_SS = %5.1f %%)\n", p6);
    check L20() else D15();
  D15():
    deopt 41 [r35];
  L20():
    st ratio = r35;
    cat4 = ldf cat;
    check L21() else D16();
  D16():
    deopt 44 [];
  L21():
    p9 = prom<V +>{
      sub = ldf sub;
      p7 = prom<V +>{
        getOption = ldf getOption;
        r36 = dyn getOption("OutDec");
        return r36;
      };
      p8 = prom<V +>{
        ratio = ld ratio;
        ratio1 = force? ratio;
        checkMissing(ratio1);
        return ratio1;
      };
      r39 = dyn sub[, , , fixed](".", p7, p8, TRUE);
      return r39;
    };
    r41 = dyn cat4[, , sep](p9, "Available components:\n", "\n");
    check L22() else D17();
  D17():
    deopt 49 [r41];
  L22():
    print3 = ldf print;
    check L23() else D18();
  D18():
    deopt 51 [];
  L23():
    p10 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      names = ldf names in base;
      r44 = dyn names(x30);
      goto L0(r44);
    L2():
      r42 = dyn base1(<sym x>);
      goto L0(r42);
    };
    r46 = dyn print3(p10);
    check L24() else D19();
  D19():
    deopt 53 [r46];
  L24():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L0(r48):
    r50 = `!`(r48);
    c9 = `as.logical`(r50);
    if c9 then L32() else L1(c9);
  L25():
    x31 = ld x;
    check L27() else D20();
  L26():
    r47 = dyn base2(<lang `$`(x, ifault)>);
    goto L0(r47);
  D20():
    deopt 55 [x31];
  L1(c11):
    c20 = `as.logical`(c11);
    if c20 then L39() else L2();
  L27():
    x32 = force? x31;
    checkMissing(x32);
    c7 = `is.object`(x32);
    if c7 then L29() else L30(x32);
  L32():
    x35 = ld x;
    check L33() else D21();
  D21():
    deopt 60 [c9, x35];
  L2():
    goto L3();
  L3():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L28(dx15):
    c8 = `==`(dx15, NULL);
    goto L0(c8);
  L29():
    dr14 = tryDispatchBuiltin.1("$", x32);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L31() else L30(dr14);
  L30(x34):
    r49 = `$`(x34, <sym ifault>);
    goto L28(r49);
  L33():
    x36 = force? x35;
    checkMissing(x36);
    c12 = `is.object`(x36);
    if c12 then L35() else L36(c9, x36);
  L39():
    cat5 = ldf cat;
    check L40() else D22();
  D22():
    deopt 67 [];
  L4(r56):
    popenv;
    return r56;
  L31():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L28(dx14);
  L34(c16, dx17):
    r52 = `==`(dx17, 2);
    c17 = `as.logical`(r52);
    c18 = `&&`(c16, c17);
    goto L1(c18);
  L35():
    dr16 = tryDispatchBuiltin.1("$", x36);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L37() else L36(c9, dr16);
  L36(c14, x38):
    r51 = `$`(x38, <sym ifault>);
    goto L34(c14, r51);
  L40():
    r53 = dyn cat5("Warning: did *not* converge in specified number of iterations\n");
    check L41() else D23();
  L43():
    x39 = ld x;
    check L45() else D24();
  L44():
    r55 = dyn base3(<sym x>);
    goto L4(r55);
  D23():
    deopt 69 [r53];
  D24():
    deopt 74 [x39];
  L37():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L34(c9, dx16);
  L41():
    goto L3();
  L45():
    x40 = force? x39;
    checkMissing(x40);
    invisible = ldf invisible in base;
    r57 = dyn invisible(x40);
    check L46() else D25();
  D25():
    deopt 77 [r57];
  L46():
    goto L4(r57);
  }
}