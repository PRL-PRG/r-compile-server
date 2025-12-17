fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.hclust.twins` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg sort:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg p:p(V +), reg r5:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r9:V, reg c4:V, reg r10:V, reg c5:L, reg lb:*, reg lb1:V, reg c6:L, reg lb3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sort_list:cls, reg x17:*, reg x18:V, reg c7:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r11:V, reg p1:p(V +), reg r13:V, reg __:cls, reg r14:V, reg dx12:V, reg rownames:cls, reg x21:*, reg x22:V, reg c8:L, reg x24:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg r15:V, reg p2:p(V +), reg r17:V, reg ____:cls, reg x25:*, reg x26:V, reg c9:L, reg x28:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg r18:V, reg p3:p(V +), reg match_call:cls, reg r20:V, reg p4:p(V +), reg r22:V, reg ____1:cls, reg x29:*, reg x30:V, reg c10:L, reg x32:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg r23:V, reg p5:p(V +), reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg x33:*, reg x34:V, reg c11:L, reg x36:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg r28:V, reg attr:cls, reg r29:V, reg list:cls, reg r30:V, reg l:*, reg class__:cls, reg r31:V, reg r32:*, reg r33:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st r = r1;
    l = ld r;
    class__ = ldf `class<-`;
    check L50() else D17();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base[merge, height, order, labels, call, method, `dist.method`](<lang `$`(x, merge)>, <lang sort(`$`(x, height))>, <lang `$`(x, order)>, <lang if(`!`(is.null(`<-`(lb, `$`(x, order.lab)))), {
        `[`(lb, sort.list(`$`(x, order)))
      }, rownames(`$`(x, data)))>, <lang `%||%`(`$`(x, call), match.call())>, <lang `%||%`(`$`(x, method), NA_LGL)>, <lang attr(`$`(x, diss), "Metric")>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D17():
    deopt 61 ["hclust", l, "hclust"];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L10() else L11(x2);
  L50():
    r31 = dyn class__(l, NULL, "hclust");
    check L51() else D18();
  D18():
    deopt 63 ["hclust", r31];
  L9(dx1):
    sort = ldf sort;
    check L13() else D1();
  L10():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x4):
    r2 = `$`(x4, <sym merge>);
    goto L9(r2);
  L51():
    st r = r31;
    r32 = ld r;
    check L52() else D19();
  D1():
    deopt 7 [];
  D19():
    deopt 65 [r32];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    p = prom<V +>{
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
      r3 = `$`(x8, <sym height>);
      goto L0(r3);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r5 = dyn sort(p);
    check L14() else D2();
  L52():
    r33 = force? r32;
    checkMissing(r33);
    popenv;
    return r33;
  D2():
    deopt 9 [r5];
  L14():
    x9 = ld x;
    check L15() else D3();
  D3():
    deopt 11 [x9];
  L15():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L17() else L18(x10);
  L16(dx5):
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L17():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(dr4);
  L18(x12):
    r6 = `$`(x12, <sym order>);
    goto L16(r6);
  L1(r8):
    r10 = `!`(r8);
    c5 = `as.logical`(r10);
    if c5 then L27() else L2();
  L19():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx4);
  L20():
    x13 = ld x;
    check L22() else D4();
  L21():
    r7 = dyn base1(<lang `<-`(lb, `$`(x, order.lab))>);
    goto L1(r7);
  D4():
    deopt 16 [x13];
  L2():
    rownames = ldf rownames;
    check L35() else D8();
  L4(dx12):
    ____ = ldf `%||%`;
    check L37() else D10();
  L22():
    x14 = force? x13;
    checkMissing(x14);
    c3 = `is.object`(x14);
    if c3 then L24() else L25(x14);
  L27():
    lb = ld lb;
    check L28() else D5();
  D5():
    deopt 22 [lb];
  D8():
    deopt 30 [];
  D10():
    deopt 35 [];
  L23(dx7):
    st lb = dx7;
    c4 = `==`(dx7, NULL);
    goto L1(c4);
  L24():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L26() else L25(dr6);
  L25(x16):
    r9 = `$`(x16, <sym order.lab>);
    goto L23(r9);
  L28():
    lb1 = force? lb;
    checkMissing(lb1);
    c6 = `is.object`(lb1);
    if c6 then L29() else L30(lb1);
  L35():
    p2 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c8 = `is.object`(x22);
      if c8 then L1() else L2(x22);
    L0(dx14):
      return dx14;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x22);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x24):
      r15 = `$`(x24, <sym data>);
      goto L0(r15);
    L3():
      dx13 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx13);
    };
    r17 = dyn rownames(p2);
    check L36() else D9();
  L37():
    p3 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c9 = `is.object`(x26);
      if c9 then L1() else L2(x26);
    L0(dx16):
      return dx16;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x26);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x28):
      r18 = `$`(x28, <sym call>);
      goto L0(r18);
    L3():
      dx15 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx15);
    };
    p4 = prom<V +>{
      match_call = ldf `match.call`;
      r20 = dyn match_call();
      return r20;
    };
    r22 = dyn ____(p3, p4);
    check L38() else D11();
  D9():
    deopt 32 [r17];
  D11():
    deopt 38 [r22];
  L3(dx9):
    goto L4(dx9);
  L26():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L23(dx6);
  L29():
    dr8 = tryDispatchBuiltin.1("[", lb1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L31() else L30(dr8);
  L30(lb3):
    sort_list = ldf `sort.list`;
    check L32() else D6();
  L36():
    goto L4(r17);
  L38():
    ____1 = ldf `%||%`;
    check L39() else D12();
  D6():
    deopt 25 [lb3];
  D12():
    deopt 41 [];
  L31():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L3(dx8);
  L32():
    p1 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c7 = `is.object`(x18);
      if c7 then L1() else L2(x18);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x18);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x20):
      r11 = `$`(x20, <sym order>);
      goto L0(r11);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r13 = dyn sort_list(p1);
    check L33() else D7();
  L39():
    p5 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c10 = `is.object`(x30);
      if c10 then L1() else L2(x30);
    L0(dx18):
      return dx18;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x30);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x32):
      r23 = `$`(x32, <sym method>);
      goto L0(r23);
    L3():
      dx17 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx17);
    };
    r25 = dyn ____1(p5, NA_LGL);
    check L40() else D13();
  D7():
    deopt 27 [lb3, r13];
  D13():
    deopt 44 [r25];
  L33():
    __ = ldf `[` in base;
    r14 = dyn __(lb3, r13);
    goto L3(r14);
  L40():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L5(r27):
    list = ldf list in base;
    r30 = dyn list(dx1, r5, dx5, dx12, r22, r25, r27);
    check L49() else D16();
  L41():
    x33 = ld x;
    check L43() else D14();
  L42():
    r26 = dyn base2(<lang `$`(x, diss)>, "Metric");
    goto L5(r26);
  D14():
    deopt 48 [x33];
  D16():
    deopt 56 [r30];
  L43():
    x34 = force? x33;
    checkMissing(x34);
    c11 = `is.object`(x34);
    if c11 then L45() else L46(x34);
  L49():
    goto L0(r30);
  L44(dx20):
    attr = ldf attr in base;
    r29 = dyn attr(dx20, "Metric");
    check L48() else D15();
  L45():
    dr18 = tryDispatchBuiltin.1("$", x34);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L47() else L46(dr18);
  L46(x36):
    r28 = `$`(x36, <sym diss>);
    goto L44(r28);
  D15():
    deopt 53 [r29];
  L47():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L44(dx19);
  L48():
    goto L5(r29);
  }
}