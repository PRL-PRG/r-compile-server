fun main() {
  () -+> V { reg r:cls, reg showConnections:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg isatty:cls, reg stdin:cls, reg r4:V, reg p:p(V +), reg r6:V, reg isatty1:cls, reg stdout:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg isatty2:cls, reg stderr:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg c:cls, reg r13:V |
    mkenv;
    r = clos inner1178675716;
    st showConnections = r;
    showConnections = ldf showConnections;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    r1 = dyn showConnections[all](TRUE);
    check L2() else D1();
  D1():
    deopt 7 [r1];
  L2():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r3):
    popenv;
    return r3;
  L3():
    isatty = ldf isatty;
    check L5() else D2();
  L4():
    r2 = dyn base(<lang isatty(stdin())>, <lang isatty(stdout())>, <lang isatty(stderr())>);
    goto L0(r2);
  D2():
    deopt 11 [];
  L5():
    p = prom<V +>{
      stdin = ldf stdin;
      r4 = dyn stdin();
      return r4;
    };
    r6 = dyn isatty(p);
    check L6() else D3();
  D3():
    deopt 13 [r6];
  L6():
    isatty1 = ldf isatty;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p1 = prom<V +>{
      stdout = ldf stdout;
      r7 = dyn stdout();
      return r7;
    };
    r9 = dyn isatty1(p1);
    check L8() else D5();
  D5():
    deopt 17 [r9];
  L8():
    isatty2 = ldf isatty;
    check L9() else D6();
  D6():
    deopt 19 [];
  L9():
    p2 = prom<V +>{
      stderr = ldf stderr;
      r10 = dyn stderr();
      return r10;
    };
    r12 = dyn isatty2(p2);
    check L10() else D7();
  D7():
    deopt 21 [r12];
  L10():
    c = ldf c in base;
    r13 = dyn c(r6, r9, r12);
    check L11() else D8();
  D8():
    deopt 23 [r13];
  L11():
    goto L0(r13);
  }
}
fun inner1178675716(all) {
  (reg all:*) -+> V { var all:*, reg all_isMissing:L, reg all_orDefault:*, reg gc:cls, reg r:V, reg getAllConnections:cls, reg r1:V, reg all1:*, reg all2:V, reg r2:V, reg c:L, reg set:*, reg set1:V, reg c1:L, reg set3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg set4:*, reg set5:V, reg r3:V, reg __:cls, reg r4:V, reg matrix:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg set6:*, reg set7:V, reg length:cls, reg r7:V, reg p:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg set8:*, reg set9:V, reg r12:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg unlist:cls, reg summary_connection:cls, reg set10:*, reg set11:V, reg c3:L, reg set13:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg i5:*, reg i6:V, reg __1:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg p2:p(V +), reg r17:V, reg l1:*, reg c4:L, reg i8:I, reg r19:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx5:V, reg i10:I, reg dx6:V, reg i11:*, reg i12:V, reg ___:cls, reg r22:V, reg set14:*, reg set15:V, reg l4:*, reg rownames__:cls, reg r23:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg c5:cls, reg r26:V, reg l5:*, reg colnames__:cls, reg r27:V, reg all3:*, reg all4:V, reg r28:V, reg c6:L, reg ans:*, reg ans1:V, reg c7:L, reg ans3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg ans4:*, reg ans5:V, reg c8:L, reg ans8:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg __2:cls, reg r29:V, reg r30:V, reg __3:cls, reg r31:V, reg ans12:*, reg ans13:V, reg c9:L, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg __4:cls, reg r32:V |
    mkenv;
    all_isMissing = missing.0(all);
    if all_isMissing then L0(FALSE) else L0(all);
  L0(all_orDefault):
    st all = all_orDefault;
    gc = ldf gc;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    r = dyn gc();
    check L14() else D1();
  D1():
    deopt 2 [r];
  L14():
    getAllConnections = ldf getAllConnections;
    check L15() else D2();
  D2():
    deopt 4 [];
  L15():
    r1 = dyn getAllConnections();
    check L16() else D3();
  D3():
    deopt 5 [r1];
  L16():
    st set = r1;
    all1 = ld all;
    check L17() else D4();
  D4():
    deopt 7 [all1];
  L17():
    all2 = force? all1;
    checkMissing(all2);
    r2 = `!`(all2);
    c = `as.logical`(r2);
    if c then L18() else L1();
  L1():
    goto L3();
  L3():
    matrix = ldf matrix;
    check L25() else D7();
  L18():
    set = ld set;
    check L19() else D5();
  D5():
    deopt 10 [set];
  D7():
    deopt 21 [];
  L19():
    set1 = force? set;
    checkMissing(set1);
    c1 = `is.object`(set1);
    if c1 then L20() else L21(set1);
  L25():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      set6 = ld set;
      set7 = force? set6;
      checkMissing(set7);
      length = ldf length in base;
      r7 = dyn length(set7);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym set>);
      goto L0(r5);
    };
    r9 = dyn matrix("", p, 7);
    check L26() else D8();
  D8():
    deopt 25 [r9];
  L2(dx1):
    st set = dx1;
    goto L3();
  L20():
    dr = tryDispatchBuiltin.1("[", set1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(dr);
  L21(set3):
    set4 = ld set;
    check L23() else D6();
  L26():
    st ans = r9;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  D6():
    deopt 12 [set3, set4];
  L4(r11):
    s = toForSeq(r11);
    l = length(s);
    i = 0;
    goto L5(i);
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L23():
    set5 = force? set4;
    checkMissing(set5);
    r3 = `>`(set5, 2);
    __ = ldf `[` in base;
    r4 = dyn __(set3, r3);
    goto L2(r4);
  L27():
    set8 = ld set;
    check L29() else D9();
  L28():
    r10 = dyn base1(<sym set>);
    goto L4(r10);
  D9():
    deopt 28 [set8];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L30() else L7();
  L29():
    set9 = force? set8;
    checkMissing(set9);
    r12 = seq_along(set9);
    goto L4(r12);
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    unlist = ldf unlist;
    check L31() else D10();
  L30():
    set14 = ld set;
    check L37() else D13();
  D10():
    deopt 32 [i2];
  D13():
    deopt 45 [set14];
  L31():
    p2 = prom<V +>{
      summary_connection = ldf `summary.connection`;
      p1 = prom<V +>{
        set10 = ld set;
        set11 = force? set10;
        checkMissing(set11);
        c3 = `is.object`(set11);
        if c3 then L1() else L2(set11);
      L0(dx4):
        return dx4;
      L1():
        dr2 = tryDispatchBuiltin.1("[", set11);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(set13):
        i5 = ld i;
        i6 = force? i5;
        __1 = ldf `[` in base;
        r13 = dyn __1(set13, i6);
        goto L0(r13);
      L3():
        dx3 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx3);
      };
      r15 = dyn summary_connection(p1);
      return r15;
    };
    r17 = dyn unlist(p2);
    check L32() else D11();
  L37():
    set15 = force? set14;
    checkMissing(set15);
    l4 = ld ans;
    rownames__ = ldf `rownames<-`;
    check L38() else D14();
  D11():
    deopt 34 [i2, r17];
  D14():
    deopt 48 [set15, l4, set15];
  L32():
    l1 = ld ans;
    c4 = `is.object`(l1);
    if c4 then L33() else L34(i2, r17, l1);
  L38():
    r23 = dyn rownames__(l4, NULL, set15);
    check L39() else D15();
  D15():
    deopt 50 [set15, r23];
  L6(i10, dx6):
    st ans = dx6;
    goto L5(i10);
  L33():
    dr4 = tryDispatchBuiltin.0("[<-", l1, r17);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L35() else L34(i2, r17, dr4);
  L34(i8, r19, l3):
    i11 = ld i;
    check L36() else D12();
  L39():
    st ans = r23;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  D12():
    deopt 36 [i8, r19, l3, r17, i11];
  L8(r25):
    l5 = ld ans;
    colnames__ = ldf `colnames<-`;
    check L43() else D17();
  L35():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L6(i2, dx5);
  L36():
    i12 = force? i11;
    ___ = ldf `[<-` in base;
    r22 = dyn ___(l1, i12, <missing>, r17);
    goto L6(i8, r22);
  L40():
    c5 = ldf c in base;
    r26 = dyn c5("description", "class", "mode", "text", "isopen", "can read", "can write");
    check L42() else D16();
  L41():
    r24 = dyn base2("description", "class", "mode", "text", "isopen", "can read", "can write");
    goto L8(r24);
  D16():
    deopt 62 [r26];
  D17():
    deopt 64 [r25, l5, r25];
  L42():
    goto L8(r26);
  L43():
    r27 = dyn colnames__(l5, NULL, r25);
    check L44() else D18();
  D18():
    deopt 66 [r25, r27];
  L44():
    st ans = r27;
    all3 = ld all;
    check L45() else D19();
  D19():
    deopt 68 [all3];
  L45():
    all4 = force? all3;
    checkMissing(all4);
    r28 = `!`(all4);
    c6 = `as.logical`(r28);
    if c6 then L46() else L9();
  L9():
    ans12 = ld ans;
    check L56() else D22();
  L46():
    ans = ld ans;
    check L47() else D20();
  D20():
    deopt 71 [ans];
  D22():
    deopt 86 [ans12];
  L47():
    ans1 = force? ans;
    checkMissing(ans1);
    c7 = `is.object`(ans1);
    if c7 then L48() else L49(ans1);
  L56():
    ans13 = force? ans12;
    checkMissing(ans13);
    c9 = `is.object`(ans13);
    if c9 then L57() else L58();
  L10(dx8):
    popenv;
    return dx8;
  L12(dx12):
    popenv;
    return dx12;
  L48():
    dr6 = tryDispatchBuiltin.1("[", ans1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L50() else L49(dr6);
  L49(ans3):
    ans4 = ld ans;
    check L51() else D21();
  L57():
    dr10 = tryDispatchBuiltin.1("[", ans13);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L59() else L58();
  L58():
    __4 = ldf `[` in base;
    r32 = dyn __4(ans13, <missing>, <missing>, FALSE);
    goto L12(r32);
  D21():
    deopt 73 [ans3, ans4];
  L50():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx7);
  L51():
    ans5 = force? ans4;
    checkMissing(ans5);
    c8 = `is.object`(ans5);
    if c8 then L52() else L53(ans3);
  L59():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx11);
  L11(dx10):
    r30 = `==`(dx10, "opened");
    __3 = ldf `[` in base;
    r31 = dyn __3(ans1, r30, <missing>, FALSE);
    goto L10(r31);
  L52():
    dr8 = tryDispatchBuiltin.1("[", ans5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L54() else L53(ans3);
  L53(ans8):
    __2 = ldf `[` in base;
    r29 = dyn __2(ans5, <missing>, 5);
    goto L11(r29);
  L54():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L11(dx9);
  }
}