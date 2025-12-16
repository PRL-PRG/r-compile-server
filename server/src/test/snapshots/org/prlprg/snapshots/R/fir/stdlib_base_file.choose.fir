fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1169250173`;
    st `file.choose` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1169250173`(new) {
  (reg new:*) -+> V { var new:*, reg new_isMissing:L, reg new_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg new1:*, reg new2:V, reg file_choose:cls, reg r2:V |
    mkenv;
    new_isMissing = missing.0(new);
    if new_isMissing then L0(FALSE) else L0(new);
  L0(new_orDefault):
    st new = new_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    new1 = ld new;
    check L4() else D0();
  L3():
    r = dyn base(<lang file.choose(new)>);
    goto L1(r);
  D0():
    deopt 2 [new1];
  L4():
    new2 = force? new1;
    checkMissing(new2);
    file_choose = ldf `file.choose` in base;
    r2 = dyn file_choose(new2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}