fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1965426005;
    st tag2id = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1965426005(tag, name, tagid) {
  (reg tag:*, reg name:*, reg tagid:*) -+> V { var tag:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, var tagid:*, reg tagid_isMissing:L, reg tagid_orDefault:*, reg section2id:*, reg section2id1:V, reg c:L, reg section2id3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg tag1:*, reg tag2:V, reg __:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c1:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg tagid1:*, reg tagid2:V, reg anyNA:cls, reg r7:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg name1:*, reg name2:V, reg c3:V, reg c4:L, reg tagid3:*, reg tagid4:V, reg tagid5:V, reg paste:cls, reg name2id:cls, reg name3:*, reg name4:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg tolower:cls, reg tagid6:*, reg tagid7:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg string2id:cls, reg gsub:cls, reg id:*, reg id1:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V |
    mkenv;
    st tag = tag;
    name_isMissing = missing.0(name);
    if name_isMissing then L0(NULL) else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    tagid_isMissing = missing.0(tagid);
    if tagid_isMissing then L1() else L2(tagid);
  L1():
    p = prom<V +>{
      section2id = ld section2id;
      section2id1 = force? section2id;
      checkMissing(section2id1);
      c = `is.object`(section2id1);
      if c then L1() else L2(section2id1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", section2id1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(section2id3):
      tag1 = ld tag;
      tag2 = force? tag1;
      __ = ldf `[` in base;
      r = dyn __(section2id3, tag2);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L2(p);
  L2(tagid_orDefault):
    st tagid = tagid_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L3(r3):
    st section2id = r3;
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L10():
    c1 = ldf c in base;
    r4 = dyn c1("_sec_description", "_sec_usage", "_sec_arguments", "_sec_format", "_sec_details", "_sec_note", "_sec_section", "_sec_author", "_sec_references", "_sec_source", "_sec_seealso", "_sec_examples", "_sec_value");
    check L12() else D0();
  L11():
    r2 = dyn base[`\\description`, `\\usage`, `\\arguments`, `\\format`, `\\details`, `\\note`, `\\section`, `\\author`, `\\references`, `\\source`, `\\seealso`, `\\examples`, `\\value`]("_sec_description", "_sec_usage", "_sec_arguments", "_sec_format", "_sec_details", "_sec_note", "_sec_section", "_sec_author", "_sec_references", "_sec_source", "_sec_seealso", "_sec_examples", "_sec_value");
    goto L3(r2);
  D0():
    deopt 29 [r4];
  L4(r6):
    c2 = `as.logical`(r6);
    if c2 then L17() else L5();
  L12():
    goto L3(r4);
  L13():
    tagid1 = ld tagid;
    check L15() else D1();
  L14():
    r5 = dyn base1(<sym tagid>);
    goto L4(r5);
  D1():
    deopt 33 [tagid1];
  L5():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L15():
    tagid2 = force? tagid1;
    checkMissing(tagid2);
    anyNA = ldf anyNA in base;
    r7 = dyn anyNA(tagid2);
    check L16() else D2();
  L17():
    popenv;
    return NULL;
  D2():
    deopt 36 [r7];
  L7(r11):
    c4 = `as.logical`(r11);
    if c4 then L23() else L8();
  L16():
    goto L4(r7);
  L20():
    name1 = ld name;
    check L22() else D3();
  L21():
    r10 = dyn base2(<sym name>);
    goto L7(r10);
  D3():
    deopt 43 [name1];
  L8():
    paste = ldf paste;
    check L26() else D5();
  L9(tagid5):
    st id = tagid5;
    string2id = ldf string2id;
    check L28() else D7();
  L22():
    name2 = force? name1;
    checkMissing(name2);
    c3 = `==`(name2, NULL);
    goto L7(c3);
  L23():
    tagid3 = ld tagid;
    check L24() else D4();
  D4():
    deopt 46 [tagid3];
  D5():
    deopt 49 [];
  D7():
    deopt 57 [];
  L24():
    tagid4 = force? tagid3;
    checkMissing(tagid4);
    goto L9(tagid4);
  L26():
    p2 = prom<V +>{
      name2id = ldf name2id;
      p1 = prom<V +>{
        name3 = ld name;
        name4 = force? name3;
        checkMissing(name4);
        return name4;
      };
      r13 = dyn name2id(p1);
      return r13;
    };
    p4 = prom<V +>{
      tolower = ldf tolower;
      p3 = prom<V +>{
        tagid6 = ld tagid;
        tagid7 = force? tagid6;
        checkMissing(tagid7);
        return tagid7;
      };
      r16 = dyn tolower(p3);
      return r16;
    };
    r18 = dyn paste[, , sep](p2, p4, "_:_");
    check L27() else D6();
  L28():
    p6 = prom<V +>{
      gsub = ldf gsub;
      p5 = prom<V +>{
        id = ld id;
        id1 = force? id;
        checkMissing(id1);
        return id1;
      };
      r20 = dyn gsub("[[:space:]]+", "-", p5);
      return r20;
    };
    r22 = dyn string2id(p6);
    check L29() else D8();
  D6():
    deopt 54 [r18];
  D8():
    deopt 59 [r22];
  L27():
    goto L9(r18);
  L29():
    popenv;
    return r22;
  }
}