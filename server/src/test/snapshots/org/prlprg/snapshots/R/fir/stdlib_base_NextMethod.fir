fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3110809430;
    st NextMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3110809430(generic, object, `...`) {
  (reg generic:*, reg object:*, reg ddd:dots) -+> V { var generic:*, reg generic_isMissing:L, reg generic_orDefault:*, var object:*, reg object_isMissing:L, reg object_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg r2:V |
    mkenv;
    generic_isMissing = missing.0(generic);
    if generic_isMissing then L0(NULL) else L0(generic);
  L0(generic_orDefault):
    st generic = generic_orDefault;
    object_isMissing = missing.0(object);
    if object_isMissing then L1(NULL) else L1(object);
  L1(object_orDefault):
    st object = object_orDefault;
    st `...` = ddd;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L2(r1):
    popenv;
    return r1;
  L3():
    _Internal = ldf `.Internal` in base;
    r2 = dyn _Internal(<lang NextMethod(generic, object, ...)>);
    goto L2(r2);
  L4():
    r = dyn base(<lang NextMethod(generic, object, ...)>);
    goto L2(r);
  }
}