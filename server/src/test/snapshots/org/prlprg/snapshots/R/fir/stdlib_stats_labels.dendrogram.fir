fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `labels.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg is_list:cls, reg r2:V, reg c:L, reg rapply:cls, reg object3:*, reg object4:V, reg p:p(V +), reg attr:*, reg attr1:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg object5:*, reg object6:V, reg attr2:cls, reg r8:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(object2);
    check L6() else D1();
  L7():
    rapply = ldf rapply;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L2(r7):
    popenv;
    return r7;
  L6():
    goto L0(r2);
  L8():
    p = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p1 = prom<V +>{
      attr = ld attr;
      attr1 = force? attr;
      checkMissing(attr1);
      return attr1;
    };
    r5 = dyn rapply[, , which](p, p1, "label");
    check L9() else D3();
  L11():
    object5 = ld object;
    check L13() else D4();
  L12():
    r6 = dyn base1(<sym object>, "label");
    goto L2(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [object5];
  L9():
    popenv;
    return r5;
  L13():
    object6 = force? object5;
    checkMissing(object6);
    attr2 = ldf attr in base;
    r8 = dyn attr2(object6, "label");
    check L14() else D5();
  D5():
    deopt 19 [r8];
  L14():
    goto L2(r8);
  }
}