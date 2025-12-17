fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3506921061;
    st `summary.srcref` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3506921061(object, useSource, `...`) {
  (reg object:*, reg useSource:*, reg ddd:dots) -+> V { var object:*, var useSource:*, reg useSource_isMissing:L, reg useSource_orDefault:*, var `...`:dots?, reg cat:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg useSource1:*, reg useSource2:V, reg as_character:cls, reg r2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg object3:*, reg object4:V, reg invisible:cls, reg r7:V |
    mkenv;
    st object = object;
    useSource_isMissing = missing.0(useSource);
    if useSource_isMissing then L0(FALSE) else L0(useSource);
  L0(useSource_orDefault):
    st useSource = useSource_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      useSource1 = ld useSource;
      useSource2 = force? useSource1;
      checkMissing(useSource2);
      as_character = ldf `as.character` in base;
      r2 = dyn as_character(object2, useSource2);
      goto L0(r2);
    L2():
      r = dyn base[, useSource](<sym object>, <sym useSource>);
      goto L0(r);
    };
    r4 = dyn cat[, sep](p, "\n");
    check L3() else D1();
  D1():
    deopt 5 [r4];
  L3():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L1(r6):
    popenv;
    return r6;
  L4():
    object3 = ld object;
    check L6() else D2();
  L5():
    r5 = dyn base1(<sym object>);
    goto L1(r5);
  D2():
    deopt 8 [object3];
  L6():
    object4 = force? object3;
    checkMissing(object4);
    invisible = ldf invisible in base;
    r7 = dyn invisible(object4);
    check L7() else D3();
  D3():
    deopt 11 [r7];
  L7():
    goto L1(r7);
  }
}