fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.hashtab` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sub:cls, reg format:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V, reg numhash:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r11:V, reg typhash:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r13:V, reg sprintf:cls, reg addr:*, reg addr1:V, reg p4:p(V +), reg num:*, reg num1:V, reg p5:p(V +), reg type:*, reg type1:V, reg p6:p(V +), reg r17:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      format = ldf format;
      p = prom<V +>{
        sym = ldf unclass;
        base = ldf unclass in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r1):
        c = `is.object`(r1);
        if c then L4() else L5(r1);
      L2():
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        unclass = ldf unclass in base;
        r2 = dyn unclass(x2);
        goto L0(r2);
      L3():
        r = dyn base(<sym x>);
        goto L0(r);
      L1(dx1):
        return dx1;
      L4():
        dr = tryDispatchBuiltin.1("[[", r1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(r4):
        __ = ldf `[[` in base;
        r5 = dyn __(r4, 1.0);
        goto L1(r5);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r7 = dyn format(p);
      return r7;
    };
    r9 = dyn sub("<.*: (.*)>", "\\1", p1);
    check L1() else D1();
  D1():
    deopt 5 [r9];
  L1():
    st addr = r9;
    numhash = ldf numhash;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r11 = dyn numhash(p2);
    check L3() else D3();
  D3():
    deopt 10 [r11];
  L3():
    st num = r11;
    typhash = ldf typhash;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r13 = dyn typhash(p3);
    check L5() else D5();
  D5():
    deopt 15 [r13];
  L5():
    st type = r13;
    sprintf = ldf sprintf;
    check L6() else D6();
  D6():
    deopt 18 [];
  L6():
    p4 = prom<V +>{
      addr = ld addr;
      addr1 = force? addr;
      checkMissing(addr1);
      return addr1;
    };
    p5 = prom<V +>{
      num = ld num;
      num1 = force? num;
      checkMissing(num1);
      return num1;
    };
    p6 = prom<V +>{
      type = ld type;
      type1 = force? type;
      checkMissing(type1);
      return type1;
    };
    r17 = dyn sprintf("<hashtable %s: count = %d, type = \"%s\">", p4, p5, p6);
    check L7() else D7();
  D7():
    deopt 23 [r17];
  L7():
    popenv;
    return r17;
  }
}