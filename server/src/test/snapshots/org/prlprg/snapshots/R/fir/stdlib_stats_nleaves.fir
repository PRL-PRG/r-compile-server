fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3428017826;
    st nleaves = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3428017826(node) {
  (reg node:*) -+> V { var node:*, reg is_leaf:cls, reg node1:*, reg node2:V, reg p:p(V +), reg r1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg node3:*, reg node4:V, reg length:cls, reg r6:V, reg c1:L, reg node5:*, reg node6:V, reg c2:L, reg node8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg node9:*, reg node10:V, reg c3:L, reg node12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r8:V, reg is_leaf1:cls, reg child:*, reg child1:V, reg p1:p(V +), reg r10:V, reg c4:L, reg count:*, reg count1:V, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg child2:*, reg child3:V, reg todo:*, reg todo1:V, reg list:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg todo2:*, reg todo3:V, reg c5:V, reg c6:L, reg todo4:*, reg todo5:V, reg c7:L, reg todo7:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r19:V, reg todo8:*, reg todo9:V, reg c8:L, reg todo11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r20:V, reg count2:*, reg count3:V |
    mkenv;
    st node = node;
    is_leaf = ldf `is.leaf`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      node1 = ld node;
      node2 = force? node1;
      checkMissing(node2);
      return node2;
    };
    r1 = dyn is_leaf(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    c = `as.logical`(r1);
    if c then L16() else L0();
  L0():
    st todo = NULL;
    st count = 0;
    goto L9();
  L16():
    popenv;
    return 1;
  L9():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L23() else L3();
  L19():
    node3 = ld node;
    check L21() else D2();
  L20():
    r4 = dyn base(<sym node>);
    goto L2(r4);
  D2():
    deopt 17 [node3];
  L3():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L21():
    node4 = force? node3;
    checkMissing(node4);
    length = ldf length in base;
    r6 = dyn length(node4);
    check L22() else D3();
  L23():
    node5 = ld node;
    check L24() else D4();
  D3():
    deopt 20 [r6];
  D4():
    deopt 21 [node5];
  L10(r17):
    c6 = `as.logical`(r17);
    if c6 then L46() else L11();
  L22():
    goto L2(r6);
  L24():
    node6 = force? node5;
    checkMissing(node6);
    c2 = `is.object`(node6);
    if c2 then L25() else L26(node6);
  L43():
    todo2 = ld todo;
    check L45() else D12();
  L44():
    r16 = dyn base2(<sym todo>);
    goto L10(r16);
  D12():
    deopt 57 [todo2];
  L4(dx1):
    st child = dx1;
    node9 = ld node;
    check L28() else D5();
  L11():
    todo4 = ld todo;
    check L49() else D13();
  L25():
    dr = tryDispatchBuiltin.1("[[", node6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(node8):
    __ = ldf `[[` in base;
    r7 = dyn __(node8, 1);
    goto L4(r7);
  L45():
    todo3 = force? todo2;
    checkMissing(todo3);
    c5 = `==`(todo3, NULL);
    goto L10(c5);
  L46():
    count2 = ld count;
    check L60() else D15();
  D5():
    deopt 27 [node9];
  D13():
    deopt 62 [todo4];
  D15():
    deopt 73 [count2];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L28():
    node10 = force? node9;
    checkMissing(node10);
    c3 = `is.object`(node10);
    if c3 then L29() else L30(node10);
  L49():
    todo5 = force? todo4;
    checkMissing(todo5);
    c7 = `is.object`(todo5);
    if c7 then L51() else L52(todo5);
  L60():
    count3 = force? count2;
    checkMissing(count3);
    popenv;
    return count3;
  L5(dx3):
    st node = dx3;
    is_leaf1 = ldf `is.leaf`;
    check L32() else D6();
  L29():
    dr2 = tryDispatchBuiltin.1("[", node10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(node12):
    __1 = ldf `[` in base;
    r8 = dyn __1(node12, -1);
    goto L5(r8);
  L50(dx5):
    st node = dx5;
    todo8 = ld todo;
    check L54() else D14();
  L51():
    dr4 = tryDispatchBuiltin.1("$", todo5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L53() else L52(dr4);
  L52(todo7):
    r19 = `$`(todo7, <sym node>);
    goto L50(r19);
  D6():
    deopt 34 [];
  D14():
    deopt 66 [todo8];
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L32():
    p1 = prom<V +>{
      child = ld child;
      child1 = force? child;
      checkMissing(child1);
      return child1;
    };
    r10 = dyn is_leaf1(p1);
    check L33() else D7();
  L53():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L50(dx4);
  L54():
    todo9 = force? todo8;
    checkMissing(todo9);
    c8 = `is.object`(todo9);
    if c8 then L56() else L57(todo9);
  D7():
    deopt 36 [r10];
  L33():
    c4 = `as.logical`(r10);
    if c4 then L34() else L6();
  L55(dx7):
    st todo = dx7;
    goto L9();
  L56():
    dr6 = tryDispatchBuiltin.1("$", todo9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(dr6);
  L57(todo11):
    r20 = `$`(todo11, <sym todo>);
    goto L55(r20);
  L6():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L7():
    goto L9();
  L34():
    count = ld count;
    check L35() else D8();
  L58():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L55(dx6);
  D8():
    deopt 37 [count];
  L8(r14):
    st todo = r14;
    goto L7();
  L35():
    count1 = force? count;
    checkMissing(count1);
    r11 = `+`(count1, 1);
    st count = r11;
    goto L7();
  L37():
    child2 = ld child;
    check L39() else D9();
  L38():
    r13 = dyn base1[node, todo](<sym child>, <sym todo>);
    goto L8(r13);
  D9():
    deopt 44 [child2];
  L39():
    child3 = force? child2;
    checkMissing(child3);
    todo = ld todo;
    check L40() else D10();
  D10():
    deopt 47 [todo];
  L40():
    todo1 = force? todo;
    checkMissing(todo1);
    list = ldf list in base;
    r15 = dyn list(child3, todo1);
    check L41() else D11();
  D11():
    deopt 51 [r15];
  L41():
    goto L8(r15);
  }
}