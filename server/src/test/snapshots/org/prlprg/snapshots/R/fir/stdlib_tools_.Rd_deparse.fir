fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner423579673;
    st `.Rd_deparse` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner423579673(x, tag) {
  (reg x:*, reg tag:*) -+> V { var x:*, var tag:*, reg tag_isMissing:L, reg tag_orDefault:*, reg tag1:*, reg tag2:V, reg r:V, reg c:L, reg l:*, reg attr__:cls, reg r1:V, reg paste:cls, reg as_character_Rd:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st x = x;
    tag_isMissing = missing.0(tag);
    if tag_isMissing then L0(TRUE) else L0(tag);
  L0(tag_orDefault):
    st tag = tag_orDefault;
    tag1 = ld tag;
    check L3() else D0();
  D0():
    deopt 0 [tag1];
  L3():
    tag2 = force? tag1;
    checkMissing(tag2);
    r = `!`(tag2);
    c = `as.logical`(r);
    if c then L4() else L1();
  L1():
    goto L2();
  L2():
    paste = ldf paste;
    check L8() else D3();
  L4():
    l = ld x;
    attr__ = ldf `attr<-`;
    check L5() else D1();
  D1():
    deopt 6 ["Rd", l, "Rd"];
  D3():
    deopt 14 [];
  L5():
    r1 = dyn attr__(l, NULL, "Rd_tag", "Rd");
    check L6() else D2();
  L8():
    p1 = prom<V +>{
      as_character_Rd = ldf `as.character.Rd`;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r4 = dyn as_character_Rd(p);
      return r4;
    };
    r6 = dyn paste[, collapse](p1, "");
    check L9() else D4();
  D2():
    deopt 9 ["Rd", r1];
  D4():
    deopt 18 [r6];
  L6():
    st x = r1;
    goto L2();
  L9():
    popenv;
    return r6;
  }
}