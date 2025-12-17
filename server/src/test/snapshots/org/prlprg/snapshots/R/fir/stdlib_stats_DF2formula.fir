fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner668970690;
    st DF2formula = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner668970690(x, env) {
  (reg x:*, reg env:*) -+> V { var x:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg names:cls, reg r4:V, reg p1:p(V +), reg as_name:*, reg as_name1:V, reg p2:p(V +), reg r7:V, reg r8:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg nm:*, reg nm1:V, reg length:cls, reg r11:V, reg r12:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg call:cls, reg r15:V, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg nm2:*, reg nm3:V, reg length1:cls, reg r19:V, reg r20:V, reg c1:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg call1:cls, reg r23:V, reg stop:cls, reg r24:V, reg l:*, reg class__:cls, reg r25:V, reg env1:*, reg env2:V, reg l1:*, reg environment__:cls, reg r26:V, reg ff:*, reg ff1:V |
    mkenv;
    st x = x;
    env_isMissing = missing.0(env);
    if env_isMissing then L0() else L1(env);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(env_orDefault):
    st env = env_orDefault;
    lapply = ldf lapply;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p1 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      names = ldf names in base;
      r4 = dyn names(x2);
      goto L0(r4);
    L2():
      r2 = dyn base(<sym x>);
      goto L0(r2);
    };
    p2 = prom<V +>{
      as_name = ld `as.name`;
      as_name1 = force? as_name;
      checkMissing(as_name1);
      return as_name1;
    };
    r7 = dyn lapply(p1, p2);
    check L10() else D1();
  D1():
    deopt 4 [r7];
  L10():
    st nm = r7;
    r8 = clos inner259452048;
    st mkRHS = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(r10):
    r12 = `>`(r10, 1);
    c = `as.logical`(r12);
    if c then L15() else L3();
  L11():
    nm = ld nm;
    check L13() else D2();
  L12():
    r9 = dyn base1(<sym nm>);
    goto L2(r9);
  D2():
    deopt 11 [nm];
  L3():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L5(r16):
    st ff = r16;
    l = ld ff;
    class__ = ldf `class<-`;
    check L29() else D8();
  L13():
    nm1 = force? nm;
    checkMissing(nm1);
    length = ldf length in base;
    r11 = dyn length(nm1);
    check L14() else D3();
  L15():
    sym2 = ldf call;
    base2 = ldf call in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  D3():
    deopt 14 [r11];
  D8():
    deopt 39 ["formula", l, "formula"];
  L4(r14):
    goto L5(r14);
  L6(r18):
    r20 = `==`(r18, 1);
    c1 = `as.logical`(r20);
    if c1 then L23() else L7();
  L14():
    goto L2(r11);
  L16():
    call = ldf call in base;
    r15 = dyn call("~", <lang `[[`(nm, 1)>, <lang mkRHS(`[`(nm, `-`(1)))>);
    goto L4(r15);
  L17():
    r13 = dyn base2("~", <lang `[[`(nm, 1)>, <lang mkRHS(`[`(nm, `-`(1)))>);
    goto L4(r13);
  L19():
    nm2 = ld nm;
    check L21() else D4();
  L20():
    r17 = dyn base3(<sym nm>);
    goto L6(r17);
  L29():
    r25 = dyn class__(l, NULL, "formula");
    check L30() else D9();
  D4():
    deopt 22 [nm2];
  D9():
    deopt 41 ["formula", r25];
  L7():
    stop = ldf stop;
    check L27() else D6();
  L21():
    nm3 = force? nm2;
    checkMissing(nm3);
    length1 = ldf length in base;
    r19 = dyn length1(nm3);
    check L22() else D5();
  L23():
    sym4 = ldf call;
    base4 = ldf call in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L30():
    st ff = r25;
    env1 = ld env;
    check L31() else D10();
  D5():
    deopt 25 [r19];
  D6():
    deopt 32 [];
  D10():
    deopt 43 [env1];
  L8(r22):
    goto L5(r22);
  L22():
    goto L6(r19);
  L24():
    call1 = ldf call in base;
    r23 = dyn call1("~", <lang `[[`(nm, 1)>);
    goto L8(r23);
  L25():
    r21 = dyn base4("~", <lang `[[`(nm, 1)>);
    goto L8(r21);
  L27():
    r24 = dyn stop("cannot create a formula from a zero-column data frame");
    check L28() else D7();
  L31():
    env2 = force? env1;
    checkMissing(env2);
    l1 = ld ff;
    environment__ = ldf `environment<-`;
    check L32() else D11();
  D7():
    deopt 34 [r24];
  D11():
    deopt 46 [env2, l1, env2];
  L28():
    goto L5(r24);
  L32():
    r26 = dyn environment__(l1, NULL, env2);
    check L33() else D12();
  D12():
    deopt 48 [env2, r26];
  L33():
    st ff = r26;
    ff = ld ff;
    check L34() else D13();
  D13():
    deopt 50 [ff];
  L34():
    ff1 = force? ff;
    checkMissing(ff1);
    popenv;
    return ff1;
  }
}
fun inner259452048(nms) {
  (reg nms:*) -+> V { var nms:*, reg Reduce:cls, reg r:cls, reg p:p(V +), reg nms1:*, reg nms2:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st nms = nms;
    Reduce = ldf Reduce;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      r = clos inner799576941;
      return r;
    };
    p1 = prom<V +>{
      nms1 = ld nms;
      nms2 = force? nms1;
      checkMissing(nms2);
      return nms2;
    };
    r3 = dyn Reduce(p, p1);
    check L1() else D1();
  D1():
    deopt 4 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg call:cls, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf call;
    base = ldf call in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    call = ldf call in base;
    r2 = dyn call("+", <sym x>, <sym y>);
    goto L0(r2);
  L2():
    r = dyn base("+", <sym x>, <sym y>);
    goto L0(r);
  }
}