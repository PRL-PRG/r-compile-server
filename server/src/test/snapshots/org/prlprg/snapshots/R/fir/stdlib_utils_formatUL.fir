fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2131642462;
    st formatUL = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2131642462(x, label, offset, width) {
  (reg x:*, reg label:*, reg offset:*, reg width:*) -+> V { var x:*, var label:*, reg label_isMissing:L, reg label_orDefault:*, var offset:*, reg offset_isMissing:L, reg offset_orDefault:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg character:cls, reg r7:V, reg _format_rl_table:cls, reg label1:*, reg label2:V, reg p1:p(V +), reg x3:*, reg x4:V, reg p2:p(V +), reg offset1:*, reg offset2:V, reg p3:p(V +), reg width1:*, reg width2:V, reg p4:p(V +), reg r14:V |
    mkenv;
    st x = x;
    label_isMissing = missing.0(label);
    if label_isMissing then L0("*") else L0(label);
  L0(label_orDefault):
    st label = label_orDefault;
    offset_isMissing = missing.0(offset);
    if offset_isMissing then L1(0.0) else L1(offset);
  L1(offset_orDefault):
    st offset = offset_orDefault;
    width_isMissing = missing.0(width);
    if width_isMissing then L2() else L3(width);
  L2():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `*`(0.9, r);
      return r1;
    };
    goto L3(p);
  L3(width_orDefault):
    st width = width_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L4(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L11() else L5();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r3 = dyn base(<sym x>);
    goto L4(r3);
  D0():
    deopt 2 [x1];
  L5():
    _format_rl_table = ldf `.format_rl_table`;
    check L16() else D4();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r5 = dyn length(x2);
    check L10() else D1();
  L11():
    character = ldf character;
    check L12() else D2();
  D1():
    deopt 5 [r5];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L10():
    goto L4(r5);
  L12():
    r7 = dyn character();
    check L13() else D3();
  L16():
    p1 = prom<V +>{
      label1 = ld label;
      label2 = force? label1;
      checkMissing(label2);
      return label2;
    };
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      offset1 = ld offset;
      offset2 = force? offset1;
      checkMissing(offset2);
      return offset2;
    };
    p4 = prom<V +>{
      width1 = ld width;
      width2 = force? width1;
      checkMissing(width2);
      return width2;
    };
    r14 = dyn _format_rl_table(p1, p2, p3, p4);
    check L17() else D5();
  D3():
    deopt 9 [r7];
  D5():
    deopt 19 [r14];
  L13():
    popenv;
    return r7;
  L17():
    popenv;
    return r14;
  }
}