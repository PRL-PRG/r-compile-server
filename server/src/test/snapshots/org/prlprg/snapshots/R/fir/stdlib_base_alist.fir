fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st alist = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg as_list:cls, reg sys_call:cls, reg r:V, reg p:p(V +), reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st `...` = ddd;
    as_list = ldf `as.list`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sys_call = ldf `sys.call`;
      r = dyn sys_call();
      return r;
    };
    r2 = dyn as_list(p);
    check L2() else D1();
  D1():
    deopt 3 [r2];
  L2():
    c = `is.object`(r2);
    if c then L3() else L4(r2);
  L0(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("[", r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r4):
    __ = ldf `[` in base;
    r5 = dyn __(r4, -1);
    goto L0(r5);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}