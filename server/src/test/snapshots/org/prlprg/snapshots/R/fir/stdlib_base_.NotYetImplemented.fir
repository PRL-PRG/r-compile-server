fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st `.NotYetImplemented` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg stop:cls, reg gettextf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sys_call:cls, reg sys_parent:cls, reg r2:V, reg p:p(V +), reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r7:V, reg as_character:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V |
    mkenv;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sym = ldf `as.character`;
        base = ldf `as.character` in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r1):
        return r1;
      L2():
        sys_call = ldf `sys.call`;
        p = prom<V +>{
          sys_parent = ldf `sys.parent`;
          r2 = dyn sys_parent();
          return r2;
        };
        r4 = dyn sys_call(p);
        c = `is.object`(r4);
        if c then L4() else L5(r4);
      L3():
        r = dyn base(<lang `[[`(sys.call(sys.parent()), 1)>);
        goto L0(r);
      L1(dx1):
        as_character = ldf `as.character` in base;
        r8 = dyn as_character(dx1);
        goto L0(r8);
      L4():
        dr = tryDispatchBuiltin.1("[[", r4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L6() else L5(dr);
      L5(r6):
        __ = ldf `[[` in base;
        r7 = dyn __(r6, 1);
        goto L1(r7);
      L6():
        dx = getTryDispatchBuiltinValue(dr);
        goto L1(dx);
      };
      r10 = dyn gettextf("'%s' is not implemented yet", p1);
      return r10;
    };
    r12 = dyn stop[, `call.`](p2, FALSE);
    check L1() else D1();
  D1():
    deopt 5 [r12];
  L1():
    popenv;
    return r12;
  }
}