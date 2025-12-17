fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384943734;
    st printLog = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384943734(Log, `...`) {
  (reg Log:*, reg ddd:dots) -+> V { var Log:*, var `...`:dots?, reg r:cls, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg list:cls, reg ddd1:dots?, reg r3:V, reg p:p(V +), reg quotes:*, reg quotes1:V, reg p1:p(V +), reg r6:V, reg do_call:cls, reg cat:*, reg cat1:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg args:*, reg args1:V, reg c:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg Log1:*, reg Log2:V, reg c1:L, reg Log4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r13:V, reg r14:V, reg c2:L, reg do_call1:cls, reg cat2:*, reg cat3:V, reg p4:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg args2:*, reg args3:V, reg Log5:*, reg Log6:V, reg c3:L, reg Log8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg c4:cls, reg r19:V, reg p5:p(V +), reg r21:V |
    mkenv;
    st Log = Log;
    st `...` = ddd;
    r = clos inner2501545716;
    st quotes = r;
    lapply = ldf lapply;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r3 = dyn list[`...`](ddd1);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym ...>);
      goto L0(r1);
    };
    p1 = prom<V +>{
      quotes = ld quotes;
      quotes1 = force? quotes;
      checkMissing(quotes1);
      return quotes1;
    };
    r6 = dyn lapply(p, p1);
    check L2() else D1();
  D1():
    deopt 7 [r6];
  L2():
    st args = r6;
    do_call = ldf `do.call`;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p2 = prom<V +>{
      cat = ld cat;
      cat1 = force? cat;
      checkMissing(cat1);
      return cat1;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      c = ldf c in base;
      r10 = dyn c(args1, "");
      goto L0(r10);
    L2():
      r8 = dyn base1[, sep](<sym args>, "");
      goto L0(r8);
    };
    r12 = dyn do_call(p2, p3);
    check L4() else D3();
  D3():
    deopt 13 [r12];
  L4():
    Log1 = ld Log;
    check L5() else D4();
  D4():
    deopt 14 [Log1];
  L5():
    Log2 = force? Log1;
    checkMissing(Log2);
    c1 = `is.object`(Log2);
    if c1 then L7() else L8(Log2);
  L6(dx1):
    r14 = `>`(dx1, 0);
    c2 = `as.logical`(r14);
    if c2 then L10() else L0();
  L7():
    dr = tryDispatchBuiltin.1("$", Log2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(Log4):
    r13 = `$`(Log4, <sym con>);
    goto L6(r13);
  L0():
    invisible.0();
    popenv;
    return NULL;
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    do_call1 = ldf `do.call`;
    check L11() else D5();
  D5():
    deopt 20 [];
  L11():
    p4 = prom<V +>{
      cat2 = ld cat;
      cat3 = force? cat2;
      checkMissing(cat3);
      return cat3;
    };
    p5 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      Log5 = ld Log;
      Log6 = force? Log5;
      checkMissing(Log6);
      c3 = `is.object`(Log6);
      if c3 then L4() else L5(Log6);
    L2():
      r16 = dyn base2[, sep, file](<sym args>, "", <lang `$`(Log, con)>);
      goto L0(r16);
    L3(dx3):
      c4 = ldf c in base;
      r19 = dyn c4(args3, "", dx3);
      goto L0(r19);
    L4():
      dr2 = tryDispatchBuiltin.1("$", Log6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(Log8):
      r18 = `$`(Log8, <sym con>);
      goto L3(r18);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r21 = dyn do_call1(p4, p5);
    check L12() else D6();
  D6():
    deopt 23 [r21];
  L12():
    popenv;
    return r21;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg gsub:cls, reg sQuote:cls, reg r:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    gsub = ldf gsub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sQuote = ldf sQuote;
      r = dyn sQuote("\\1");
      return r;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn gsub("'([^']*)'", p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}