fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-163966771`;
    st unlink = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-163966771`(x, recursive, force, expand) {
  (reg x:*, reg recursive:*, reg force:*, reg expand:*) -+> V { var x:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var force:*, reg force_isMissing:L, reg force_orDefault:*, var expand:*, reg expand_isMissing:L, reg expand_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg as_character:cls, reg r4:V, reg recursive1:*, reg recursive2:V, reg force1:*, reg force2:V, reg expand1:*, reg expand2:V, reg unlink:cls, reg r5:V |
    mkenv;
    st x = x;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    force_isMissing = missing.0(force);
    if force_isMissing then L1(FALSE) else L1(force);
  L1(force_orDefault):
    st force = force_orDefault;
    expand_isMissing = missing.0(expand);
    if expand_isMissing then L2(TRUE) else L2(expand);
  L2(expand_orDefault):
    st expand = expand_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L3(r1):
    popenv;
    return r1;
  L5():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang unlink(as.character(x), recursive, force, expand)>);
    goto L3(r);
  L4(r3):
    recursive1 = ld recursive;
    check L11() else D2();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r2 = dyn base1(<sym x>);
    goto L4(r2);
  D0():
    deopt 4 [x1];
  D2():
    deopt 8 [recursive1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(x2);
    check L10() else D1();
  L11():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    force1 = ld force;
    check L12() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 10 [force1];
  L10():
    goto L4(r4);
  L12():
    force2 = force? force1;
    checkMissing(force2);
    expand1 = ld expand;
    check L13() else D4();
  D4():
    deopt 12 [expand1];
  L13():
    expand2 = force? expand1;
    checkMissing(expand2);
    unlink = ldf unlink in base;
    r5 = dyn unlink(r3, recursive2, force2, expand2);
    check L14() else D5();
  D5():
    deopt 15 [r5];
  L14():
    goto L3(r5);
  }
}