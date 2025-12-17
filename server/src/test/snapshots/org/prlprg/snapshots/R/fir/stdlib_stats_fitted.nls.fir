fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner64320599;
    st `fitted.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg as_vector:cls, reg object1:*, reg object2:V, reg c:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg r1:V, reg dx6:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg object5:*, reg object6:V, reg c2:L, reg object8:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg r7:V, reg c3:V, reg r8:V, reg c4:L, reg napredict:cls, reg object9:*, reg object10:V, reg c5:L, reg object12:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg r9:V, reg p1:p(V +), reg val:*, reg val1:V, reg p2:p(V +), reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg object13:*, reg object14:V, reg attr:cls, reg r18:V, reg c6:L, reg r20:V, reg dr8:V, reg dc4:L, reg dx11:V, reg dx12:V, reg r21:V, reg c7:V, reg r22:V, reg c8:L, reg paste:cls, reg lab:*, reg lab1:V, reg p3:p(V +), reg aux:*, reg aux1:V, reg p4:p(V +), reg r25:V, reg lab2:*, reg lab3:V, reg l:*, reg attr__:cls, reg r27:V, reg val2:*, reg val3:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    as_vector = ldf `as.vector`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      c = `is.object`(object2);
      if c then L1() else L2(object2);
    L0(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L1():
      dr = tryDispatchBuiltin.1("$", object2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object4):
      r = `$`(object4, <sym m>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    L4(dx5):
      checkFun.0(dx5);
      dx6 = dx5 as cls;
      r2 = dyn dx6();
      return r2;
    L5():
      dr2 = tryDispatchBuiltin.1("$", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      r1 = `$`(dx3, <sym fitted>);
      goto L4(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx4);
    };
    r4 = dyn as_vector(p);
    check L8() else D1();
  D1():
    deopt 3 [r4];
  L8():
    st val = r4;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r6):
    r8 = `!`(r6);
    c4 = `as.logical`(r8);
    if c4 then L16() else L1();
  L9():
    object5 = ld object;
    check L11() else D2();
  L10():
    r5 = dyn base(<lang `$`(object, na.action)>);
    goto L0(r5);
  D2():
    deopt 6 [object5];
  L1():
    goto L2();
  L2():
    st lab = "Fitted values";
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L11():
    object6 = force? object5;
    checkMissing(object6);
    c2 = `is.object`(object6);
    if c2 then L13() else L14(object6);
  L16():
    napredict = ldf napredict;
    check L17() else D3();
  D3():
    deopt 12 [];
  L3(r15):
    r22 = `!`(r15);
    c8 = `as.logical`(r22);
    if c8 then L30() else L5();
  L12(dx8):
    c3 = `==`(dx8, NULL);
    goto L0(c3);
  L13():
    dr4 = tryDispatchBuiltin.1("$", object6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L15() else L14(dr4);
  L14(object8):
    r7 = `$`(object8, <sym na.action>);
    goto L12(r7);
  L17():
    p1 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c5 = `is.object`(object10);
      if c5 then L1() else L2(object10);
    L0(dx10):
      return dx10;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object12):
      r9 = `$`(object12, <sym na.action>);
      goto L0(r9);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx9);
    };
    p2 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      return val1;
    };
    r12 = dyn napredict(p1, p2);
    check L18() else D4();
  L20():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L21():
    r14 = dyn base1(<lang `<-`(aux, `$`(attr(object, "units"), y))>);
    goto L3(r14);
  D4():
    deopt 15 [r12];
  L4(r17):
    c6 = `is.object`(r17);
    if c6 then L27() else L28(r17);
  L5():
    goto L6();
  L6():
    lab2 = ld lab;
    check L34() else D9();
  L15():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx7);
  L18():
    st val = r12;
    goto L2();
  L22():
    object13 = ld object;
    check L24() else D5();
  L23():
    r16 = dyn base2(<sym object>, "units");
    goto L4(r16);
  L30():
    paste = ldf paste;
    check L31() else D7();
  D5():
    deopt 25 [object13];
  D7():
    deopt 35 [];
  D9():
    deopt 42 [lab2];
  L24():
    object14 = force? object13;
    checkMissing(object14);
    attr = ldf attr in base;
    r18 = dyn attr(object14, "units");
    check L25() else D6();
  L26(dx12):
    st aux = dx12;
    c7 = `==`(dx12, NULL);
    goto L3(c7);
  L27():
    dr8 = tryDispatchBuiltin.1("$", r17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L29() else L28(dr8);
  L28(r20):
    r21 = `$`(r20, <sym y>);
    goto L26(r21);
  L31():
    p3 = prom<V +>{
      lab = ld lab;
      lab1 = force? lab;
      checkMissing(lab1);
      return lab1;
    };
    p4 = prom<V +>{
      aux = ld aux;
      aux1 = force? aux;
      checkMissing(aux1);
      return aux1;
    };
    r25 = dyn paste(p3, p4);
    check L32() else D8();
  L34():
    lab3 = force? lab2;
    checkMissing(lab3);
    l = ld val;
    attr__ = ldf `attr<-`;
    check L35() else D10();
  D6():
    deopt 29 [r18];
  D8():
    deopt 38 [r25];
  D10():
    deopt 45 [lab3, l, lab3];
  L25():
    goto L4(r18);
  L29():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L26(dx11);
  L32():
    st lab = r25;
    goto L6();
  L35():
    r27 = dyn attr__(l, NULL, "label", lab3);
    check L36() else D11();
  D11():
    deopt 48 [lab3, r27];
  L36():
    st val = r27;
    val2 = ld val;
    check L37() else D12();
  D12():
    deopt 50 [val2];
  L37():
    val3 = force? val2;
    checkMissing(val3);
    popenv;
    return val3;
  }
}