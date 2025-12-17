fun main() {
  () -+> V { reg r:cls, reg options:cls, reg r1:V, reg __:cls, reg r2:V, reg r3:cls, reg op:*, reg op1:V, reg p:p(V +), reg r5:V, reg getOption:cls, reg r6:V, reg options1:cls, reg r7:V, reg c:L, reg r10:V, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg r13:V, reg dx1:V, reg r14:V, reg options2:cls, reg r16:V, reg options3:cls, reg r17:V, reg old_o:*, reg old_o1:V, reg options4:cls, reg r18:V, reg l:*, reg c1:L, reg r20:S, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r23:V, reg options5:cls, reg r24:V, reg print:cls, reg r25:V, reg options6:cls, reg r26:V, reg print1:cls, reg r27:V, reg options7:cls, reg op2:*, reg op3:V, reg p1:p(V +), reg r29:V, reg options8:cls, reg r30:V, reg sym:cls, reg base:cls, reg guard:L, reg r31:V, reg r32:V, reg getOption1:cls, reg r33:V, reg as_logical:cls, reg r34:V, reg c2:L, reg cat:cls, reg r35:V |
    mkenv;
    r = clos inner1246119658;
    st options = r;
    options = ldf options;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    r1 = dyn options();
    check L4() else D1();
  D1():
    deopt 5 [r1];
  L4():
    st op = r1;
    __ = ldf `::`;
    check L5() else D2();
  D2():
    deopt 8 [];
  L5():
    r2 = dyn __("utils", "str");
    check L6() else D3();
  D3():
    deopt 11 [r2];
  L6():
    checkFun.0(r2);
    r3 = r2 as cls;
    p = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r5 = dyn r3(p);
    check L7() else D4();
  D4():
    deopt 14 [r5];
  L7():
    getOption = ldf getOption;
    check L8() else D5();
  D5():
    deopt 16 [];
  L8():
    r6 = dyn getOption("width");
    check L9() else D6();
  D6():
    deopt 18 [r6];
  L9():
    options1 = ldf options;
    check L10() else D7();
  D7():
    deopt 19 [r6];
  L10():
    r7 = dyn options1();
    check L11() else D8();
  D8():
    deopt 20 [r6, r7];
  L11():
    c = `is.object`(r7);
    if c then L13() else L14(r6, r7);
  L12(r13, dx1):
    `==`(r13, dx1);
    options2 = ldf options;
    check L16() else D9();
  L13():
    dr = tryDispatchBuiltin.1("$", r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(r6, dr);
  L14(r10, r11):
    r14 = `$`(r11, <sym width>);
    goto L12(r10, r14);
  D9():
    deopt 24 [];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(r6, dx);
  L16():
    r16 = dyn options2[digits](15.0);
    check L17() else D10();
  D10():
    deopt 27 [r16];
  L17():
    options3 = ldf options;
    check L18() else D11();
  D11():
    deopt 31 [];
  L18():
    r17 = dyn options3[editor]("nedit");
    check L19() else D12();
  D12():
    deopt 34 [r17];
  L19():
    st `old.o` = r17;
    old_o = ld `old.o`;
    check L20() else D13();
  D13():
    deopt 36 [old_o];
  L20():
    old_o1 = force? old_o;
    checkMissing(old_o1);
    options4 = ldf options;
    check L21() else D14();
  D14():
    deopt 39 [];
  L21():
    r18 = dyn options4[`check.bounds`, warn](TRUE, 1.0);
    check L22() else D15();
  D15():
    deopt 44 [r18];
  L22():
    st x = NULL;
    l = ld x;
    c1 = `is.object`(l);
    if c1 then L23() else L24("yes", l);
  L0(dx3):
    st x = dx3;
    options5 = ldf options;
    check L26() else D16();
  L23():
    dr2 = tryDispatchBuiltin.0("[<-", l, "yes");
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24("yes", dr2);
  L24(r20, l2):
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l2, "yes", 4.0);
    goto L0(r23);
  D16():
    deopt 56 [];
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L26():
    r24 = dyn options5[digits](5.0);
    check L27() else D17();
  D17():
    deopt 59 [r24];
  L27():
    print = ldf print;
    check L28() else D18();
  D18():
    deopt 61 [];
  L28():
    r25 = dyn print(100000.0);
    check L29() else D19();
  D19():
    deopt 63 [r25];
  L29():
    options6 = ldf options;
    check L30() else D20();
  D20():
    deopt 65 [];
  L30():
    r26 = dyn options6[scipen](3.0);
    check L31() else D21();
  D21():
    deopt 68 [r26];
  L31():
    print1 = ldf print;
    check L32() else D22();
  D22():
    deopt 70 [];
  L32():
    r27 = dyn print1(100000.0);
    check L33() else D23();
  D23():
    deopt 72 [r27];
  L33():
    options7 = ldf options;
    check L34() else D24();
  D24():
    deopt 74 [];
  L34():
    p1 = prom<V +>{
      op2 = ld op;
      op3 = force? op2;
      checkMissing(op3);
      return op3;
    };
    r29 = dyn options7(p1);
    check L35() else D25();
  D25():
    deopt 76 [r29];
  L35():
    options8 = ldf options;
    check L36() else D26();
  D26():
    deopt 78 [];
  L36():
    r30 = dyn options8("digits");
    check L37() else D27();
  D27():
    deopt 80 [r30];
  L37():
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L1(r32):
    c2 = `as.logical`(r32);
    if c2 then L43() else L2();
  L38():
    getOption1 = ldf getOption;
    check L40() else D28();
  L39():
    r31 = dyn base(<lang getOption("performCleanup", TRUE)>);
    goto L1(r31);
  D28():
    deopt 84 [];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L40():
    r33 = dyn getOption1("performCleanup", TRUE);
    check L41() else D29();
  L43():
    cat = ldf cat;
    check L44() else D31();
  D29():
    deopt 87 [r33];
  D31():
    deopt 91 [];
  L41():
    as_logical = ldf `as.logical` in base;
    r34 = dyn as_logical(r33);
    check L42() else D30();
  L44():
    r35 = dyn cat("do cleanup\n");
    check L45() else D32();
  D30():
    deopt 89 [r34];
  D32():
    deopt 93 [r35];
  L42():
    goto L1(r34);
  L45():
    popenv;
    return r35;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg options:cls, reg ddd1:dots?, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _Internal = ldf `.Internal`;
    check L3() else D0();
  L2():
    r = dyn base(<lang options(...)>);
    goto L0(r);
  D0():
    deopt 2 [];
  L3():
    p = prom<V +>{
      options = ldf options;
      ddd1 = ld `...`;
      r2 = dyn options[`...`](ddd1);
      return r2;
    };
    r4 = dyn _Internal(p);
    check L4() else D1();
  D1():
    deopt 4 [r4];
  L4():
    goto L0(r4);
  }
}