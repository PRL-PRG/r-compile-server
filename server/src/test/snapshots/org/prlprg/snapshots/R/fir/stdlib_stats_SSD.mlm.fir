fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `SSD.mlm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg stop:cls, reg r4:V, reg structure:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg object5:*, reg object6:V, reg c3:L, reg object8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg crossprod:cls, reg r11:V, reg object9:*, reg object10:V, reg c4:L, reg object12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg object13:*, reg object14:V, reg c5:L, reg object16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r13:V, reg list:cls, reg r14:V, reg p:p(V +), reg r16:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L10() else L1();
  L3():
    object1 = ld object;
    check L5() else D0();
  L4():
    r = dyn base(<lang `$`(object, weights)>);
    goto L0(r);
  D0():
    deopt 1 [object1];
  L1():
    goto L2();
  L2():
    structure = ldf structure;
    check L14() else D3();
  L5():
    object2 = force? object1;
    checkMissing(object2);
    c = `is.object`(object2);
    if c then L7() else L8(object2);
  L10():
    stop = ldf stop;
    check L11() else D1();
  D1():
    deopt 7 [];
  D3():
    deopt 13 [];
  L6(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L7():
    dr = tryDispatchBuiltin.1("$", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(object4):
    r2 = `$`(object4, <sym weights>);
    goto L6(r2);
  L11():
    r4 = dyn stop("'mlm' objects with weights are not supported");
    check L12() else D2();
  L14():
    p = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r7):
      return r7;
    L2():
      sym2 = ldf crossprod;
      base2 = ldf crossprod in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r6 = dyn base1[SSD, call, df](<lang crossprod(`$`(object, residuals))>, <lang `$`(object, call)>, <lang `$`(object, df.residual)>);
      goto L0(r6);
    L1(r9):
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c4 = `is.object`(object10);
      if c4 then L11() else L12(object10);
    L4():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      c3 = `is.object`(object6);
      if c3 then L7() else L8(object6);
    L5():
      r8 = dyn base2(<lang `$`(object, residuals)>);
      goto L1(r8);
    L6(dx3):
      crossprod = ldf crossprod in base;
      r11 = dyn crossprod(dx3);
      goto L1(r11);
    L7():
      dr2 = tryDispatchBuiltin.1("$", object6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L9() else L8(dr2);
    L8(object8):
      r10 = `$`(object8, <sym residuals>);
      goto L6(r10);
    L10(dx5):
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c5 = `is.object`(object14);
      if c5 then L15() else L16(object14);
    L11():
      dr4 = tryDispatchBuiltin.1("$", object10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L13() else L12(dr4);
    L12(object12):
      r12 = `$`(object12, <sym call>);
      goto L10(r12);
    L9():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L6(dx2);
    L13():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L10(dx4);
    L14(dx7):
      list = ldf list in base;
      r14 = dyn list(r9, dx5, dx7);
      goto L0(r14);
    L15():
      dr6 = tryDispatchBuiltin.1("$", object14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L17() else L16(dr6);
    L16(object16):
      r13 = `$`(object16, <sym df.residual>);
      goto L14(r13);
    L17():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L14(dx6);
    };
    r16 = dyn structure[, class](p, "SSD");
    check L15() else D4();
  D2():
    deopt 9 [r4];
  D4():
    deopt 17 [r16];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L12():
    goto L2();
  L15():
    popenv;
    return r16;
  }
}