fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2846847195;
    st find_missing_required_BibTeX_fields = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2846847195(entry, fields) {
  (reg entry:*, reg fields:*) -+> V { var entry:*, var fields:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg tolower:cls, reg entry1:*, reg entry2:V, reg p:p(V +), reg r3:V, reg tolower1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg BibTeX_entry_field_db:*, reg BibTeX_entry_field_db1:V, reg names:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg match:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r12:V, reg c:L, reg BibTeX_entry_field_db2:*, reg BibTeX_entry_field_db3:V, reg c1:L, reg BibTeX_entry_field_db5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos2:*, reg pos3:V, reg __:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg rfields:*, reg rfields1:V, reg length:cls, reg r18:V, reg r19:V, reg c2:L, reg character:cls, reg r20:V, reg tolower2:cls, reg fields1:*, reg fields2:V, reg p2:p(V +), reg r24:V, reg vapply:cls, reg strsplit:cls, reg rfields2:*, reg rfields3:V, reg p3:p(V +), reg r26:V, reg p4:p(V +), reg r28:cls, reg p5:p(V +), reg r30:V, reg rfields4:*, reg rfields5:V, reg c3:L, reg rfields7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ok:*, reg ok1:V, reg r31:V, reg __1:cls, reg r32:V |
    mkenv;
    st entry = entry;
    st fields = fields;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    st pos = r1;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L9():
    tolower = ldf tolower;
    check L11() else D0();
  L10():
    r = dyn base(<lang tolower(entry)>, <lang tolower(names(BibTeX_entry_field_db))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(r11):
    c = `as.logical`(r11);
    if c then L20() else L2();
  L11():
    p = prom<V +>{
      entry1 = ld entry;
      entry2 = force? entry1;
      checkMissing(entry2);
      return entry2;
    };
    r3 = dyn tolower(p);
    check L12() else D1();
  L16():
    pos = ld pos;
    check L18() else D5();
  L17():
    r10 = dyn base2(<sym pos>);
    goto L1(r10);
  D1():
    deopt 5 [r3];
  D5():
    deopt 17 [pos];
  L2():
    BibTeX_entry_field_db2 = ld BibTeX_entry_field_db;
    check L23() else D7();
  L12():
    tolower1 = ldf tolower;
    check L13() else D2();
  L18():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na = ldf `is.na` in base;
    r12 = dyn is_na(pos1);
    check L19() else D6();
  L20():
    popenv;
    return NA_STR;
  D2():
    deopt 7 [];
  D6():
    deopt 20 [r12];
  D7():
    deopt 26 [BibTeX_entry_field_db2];
  L13():
    p1 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      BibTeX_entry_field_db = ld BibTeX_entry_field_db;
      BibTeX_entry_field_db1 = force? BibTeX_entry_field_db;
      checkMissing(BibTeX_entry_field_db1);
      names = ldf names in base;
      r6 = dyn names(BibTeX_entry_field_db1);
      goto L0(r6);
    L2():
      r4 = dyn base1(<sym BibTeX_entry_field_db>);
      goto L0(r4);
    };
    r8 = dyn tolower1(p1);
    check L14() else D3();
  L19():
    goto L1(r12);
  L23():
    BibTeX_entry_field_db3 = force? BibTeX_entry_field_db2;
    checkMissing(BibTeX_entry_field_db3);
    c1 = `is.object`(BibTeX_entry_field_db3);
    if c1 then L24() else L25(BibTeX_entry_field_db3);
  D3():
    deopt 9 [r8];
  L4(dx1):
    st rfields = dx1;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L14():
    match = ldf match in base;
    r9 = dyn match(r3, r8, NA_INT, NULL);
    check L15() else D4();
  L24():
    dr = tryDispatchBuiltin.1("[[", BibTeX_entry_field_db3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(BibTeX_entry_field_db5):
    pos2 = ld pos;
    check L27() else D8();
  D4():
    deopt 13 [r9];
  D8():
    deopt 28 [BibTeX_entry_field_db5, pos2];
  L5(r17):
    r19 = `!`(r17);
    c2 = `as.logical`(r19);
    if c2 then L32() else L6();
  L15():
    goto L0(r9);
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L27():
    pos3 = force? pos2;
    __ = ldf `[[` in base;
    r15 = dyn __(BibTeX_entry_field_db5, pos3);
    goto L4(r15);
  L28():
    rfields = ld rfields;
    check L30() else D9();
  L29():
    r16 = dyn base3(<sym rfields>);
    goto L5(r16);
  D9():
    deopt 34 [rfields];
  L6():
    tolower2 = ldf tolower;
    check L37() else D13();
  L30():
    rfields1 = force? rfields;
    checkMissing(rfields1);
    length = ldf length in base;
    r18 = dyn length(rfields1);
    check L31() else D10();
  L32():
    character = ldf character;
    check L33() else D11();
  D10():
    deopt 37 [r18];
  D11():
    deopt 40 [];
  D13():
    deopt 46 [];
  L31():
    goto L5(r18);
  L33():
    r20 = dyn character();
    check L34() else D12();
  L37():
    p2 = prom<V +>{
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      return fields2;
    };
    r24 = dyn tolower2(p2);
    check L38() else D14();
  D12():
    deopt 41 [r20];
  D14():
    deopt 48 [r24];
  L34():
    popenv;
    return r20;
  L38():
    st fields = r24;
    vapply = ldf vapply;
    check L39() else D15();
  D15():
    deopt 51 [];
  L39():
    p4 = prom<V +>{
      strsplit = ldf strsplit;
      p3 = prom<V +>{
        rfields2 = ld rfields;
        rfields3 = force? rfields2;
        checkMissing(rfields3);
        return rfields3;
      };
      r26 = dyn strsplit[, , fixed](p3, "|", TRUE);
      return r26;
    };
    p5 = prom<V +>{
      r28 = clos inner1384373858;
      return r28;
    };
    r30 = dyn vapply(p4, p5, NA_LGL);
    check L40() else D16();
  D16():
    deopt 55 [r30];
  L40():
    st ok = r30;
    rfields4 = ld rfields;
    check L41() else D17();
  D17():
    deopt 57 [rfields4];
  L41():
    rfields5 = force? rfields4;
    checkMissing(rfields5);
    c3 = `is.object`(rfields5);
    if c3 then L42() else L43(rfields5);
  L8(dx3):
    popenv;
    return dx3;
  L42():
    dr2 = tryDispatchBuiltin.1("[", rfields5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(dr2);
  L43(rfields7):
    ok = ld ok;
    check L45() else D18();
  D18():
    deopt 59 [rfields7, ok];
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L45():
    ok1 = force? ok;
    checkMissing(ok1);
    r31 = `!`(ok1);
    __1 = ldf `[` in base;
    r32 = dyn __1(rfields7, r31);
    goto L8(r32);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg f1:*, reg f2:V, reg p:p(V +), reg fields:*, reg fields1:V, reg p1:p(V +), reg r4:V, reg any:cls, reg r5:V |
    mkenv;
    st f = f;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    _in_ = ldf `%in%`;
    check L3() else D0();
  L2():
    r = dyn base(<lang `%in%`(f, fields)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p1 = prom<V +>{
      fields = ld fields;
      fields1 = force? fields;
      checkMissing(fields1);
      return fields1;
    };
    r4 = dyn _in_(p, p1);
    check L4() else D1();
  D1():
    deopt 6 [r4];
  L4():
    any = ldf any in base;
    r5 = dyn any(r4);
    check L5() else D2();
  D2():
    deopt 8 [r5];
  L5():
    goto L0(r5);
  }
}