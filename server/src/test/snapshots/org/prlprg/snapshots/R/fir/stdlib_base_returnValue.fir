fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3887543939;
    st returnValue = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3887543939(default) {
  (reg default:*) -+> V { var default:*, reg default_isMissing:L, reg default_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg default1:*, reg default2:V, reg returnValue:cls, reg r2:V |
    mkenv;
    default_isMissing = missing.0(default);
    if default_isMissing then L0(NULL) else L0(default);
  L0(default_orDefault):
    st default = default_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    default1 = ld default;
    check L4() else D0();
  L3():
    r = dyn base(<lang returnValue(default)>);
    goto L1(r);
  D0():
    deopt 2 [default1];
  L4():
    default2 = force? default1;
    checkMissing(default2);
    returnValue = ldf returnValue in base;
    r2 = dyn returnValue(default2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}