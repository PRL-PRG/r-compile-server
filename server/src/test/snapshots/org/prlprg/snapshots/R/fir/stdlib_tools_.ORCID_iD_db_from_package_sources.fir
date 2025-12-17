fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2523651142;
    st `.ORCID_iD_db_from_package_sources` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2523651142(dir, add) {
  (reg dir:*, reg add:*) -+> V { var dir:*, var add:*, reg add_isMissing:L, reg add_orDefault:*, reg _ORCID_iD_from_person:cls, reg _persons_from_metadata:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg ids1:*, reg ids2:V, reg c:L, reg ids4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg ids7:V, reg r5:V, reg ids8:*, reg ids9:V, reg is_na:cls, reg r6:V, reg r7:V, reg __:cls, reg r8:V, reg _ORCID_iD_from_person1:cls, reg _persons_from_citation:cls, reg dir3:*, reg dir4:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg ids10:*, reg ids11:V, reg c1:L, reg ids13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg ids16:V, reg r14:V, reg ids17:*, reg ids18:V, reg is_na1:cls, reg r15:V, reg r16:V, reg __1:cls, reg r17:V, reg data_frame:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg character:cls, reg r20:V, reg ids19:*, reg ids20:V, reg ids21:*, reg ids22:V, reg c2:cls, reg r21:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg ids23:*, reg ids24:V, reg length:cls, reg r29:V, reg rep_len:cls, reg r30:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r31:V, reg r32:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg ids25:*, reg ids26:V, reg length1:cls, reg r35:V, reg rep_len1:cls, reg r36:V, reg c3:cls, reg r37:V, reg p5:p(V +), reg r39:V, reg add1:*, reg add2:V, reg c4:L, reg file_path:cls, reg basename:cls, reg dir5:*, reg dir6:V, reg p6:p(V +), reg r41:V, reg p7:p(V +), reg db:*, reg db1:V, reg c5:L, reg db3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r43:V, reg p8:p(V +), reg r45:V, reg l:*, reg c6:L, reg r47:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r49:V, reg dx7:V, reg r50:V, reg db4:*, reg db5:V |
    mkenv;
    st dir = dir;
    add_isMissing = missing.0(add);
    if add_isMissing then L0(FALSE) else L0(add);
  L0(add_orDefault):
    st add = add_orDefault;
    _ORCID_iD_from_person = ldf `.ORCID_iD_from_person`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p1 = prom<V +>{
      _persons_from_metadata = ldf `.persons_from_metadata`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r1 = dyn _persons_from_metadata(p);
      return r1;
    };
    r3 = dyn _ORCID_iD_from_person(p1);
    check L8() else D1();
  D1():
    deopt 3 [r3];
  L8():
    st ids1 = r3;
    ids1 = ld ids1;
    check L9() else D2();
  D2():
    deopt 5 [ids1];
  L9():
    ids2 = force? ids1;
    checkMissing(ids2);
    c = `is.object`(ids2);
    if c then L10() else L11(ids2);
  L1(dx1):
    st ids1 = dx1;
    _ORCID_iD_from_person1 = ldf `.ORCID_iD_from_person`;
    check L17() else D5();
  L10():
    dr = tryDispatchBuiltin.1("[", ids2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(ids4):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  D5():
    deopt 17 [];
  L2(ids7, r5):
    r7 = `!`(r5);
    __ = ldf `[` in base;
    r8 = dyn __(ids7, r7);
    goto L1(r8);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L13():
    ids8 = ld ids1;
    check L15() else D3();
  L14():
    r4 = dyn base(<sym ids1>);
    goto L2(ids4, r4);
  L17():
    p3 = prom<V +>{
      _persons_from_citation = ldf `.persons_from_citation`;
      p2 = prom<V +>{
        dir3 = ld dir;
        dir4 = force? dir3;
        checkMissing(dir4);
        return dir4;
      };
      r10 = dyn _persons_from_citation(p2);
      return r10;
    };
    r12 = dyn _ORCID_iD_from_person1(p3);
    check L18() else D6();
  D3():
    deopt 9 [ids4, ids8];
  D6():
    deopt 19 [r12];
  L15():
    ids9 = force? ids8;
    checkMissing(ids9);
    is_na = ldf `is.na` in base;
    r6 = dyn is_na(ids9);
    check L16() else D4();
  L18():
    st ids2 = r12;
    ids10 = ld ids2;
    check L19() else D7();
  D4():
    deopt 12 [ids4, r6];
  D7():
    deopt 21 [ids10];
  L16():
    goto L2(ids4, r6);
  L19():
    ids11 = force? ids10;
    checkMissing(ids11);
    c1 = `is.object`(ids11);
    if c1 then L20() else L21(ids11);
  L3(dx3):
    st ids2 = dx3;
    data_frame = ldf `data.frame`;
    check L27() else D10();
  L20():
    dr2 = tryDispatchBuiltin.1("[", ids11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(ids13):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D10():
    deopt 33 [];
  L4(ids16, r14):
    r16 = `!`(r14);
    __1 = ldf `[` in base;
    r17 = dyn __1(ids16, r16);
    goto L3(r17);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L23():
    ids17 = ld ids2;
    check L25() else D8();
  L24():
    r13 = dyn base1(<sym ids2>);
    goto L4(ids13, r13);
  L27():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      character = ldf character;
      r20 = dyn character();
      ids19 = ld ids1;
      ids20 = force? ids19;
      checkMissing(ids20);
      ids21 = ld ids2;
      ids22 = force? ids21;
      checkMissing(ids22);
      c2 = ldf c in base;
      r21 = dyn c2(r20, ids20, ids22);
      goto L0(r21);
    L2():
      r18 = dyn base2(<lang character()>, <sym ids1>, <sym ids2>);
      goto L0(r18);
    };
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L5() else L6();
    L0(r24):
      return r24;
    L5():
      sym4 = ldf rep_len;
      base4 = ldf rep_len in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L7() else L8();
    L6():
      r23 = dyn base3(<lang rep_len("DESCRIPTION", length(ids1))>, <lang rep_len("inst/CITATION", length(ids2))>);
      goto L0(r23);
    L1(r26):
      sym6 = ldf rep_len;
      base6 = ldf rep_len in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L11() else L12();
    L7():
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L9() else L10();
    L8():
      r25 = dyn base4("DESCRIPTION", <lang length(ids1)>);
      goto L1(r25);
    L2(r28):
      rep_len = ldf rep_len in base;
      r30 = dyn rep_len("DESCRIPTION", r28);
      goto L1(r30);
    L3(r32):
      c3 = ldf c in base;
      r37 = dyn c3(r26, r32);
      goto L0(r37);
    L9():
      ids23 = ld ids1;
      ids24 = force? ids23;
      checkMissing(ids24);
      length = ldf length in base;
      r29 = dyn length(ids24);
      goto L2(r29);
    L10():
      r27 = dyn base5(<sym ids1>);
      goto L2(r27);
    L11():
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L13() else L14();
    L12():
      r31 = dyn base6("inst/CITATION", <lang length(ids2)>);
      goto L3(r31);
    L4(r34):
      rep_len1 = ldf rep_len in base;
      r36 = dyn rep_len1("inst/CITATION", r34);
      goto L3(r36);
    L13():
      ids25 = ld ids2;
      ids26 = force? ids25;
      checkMissing(ids26);
      length1 = ldf length in base;
      r35 = dyn length1(ids26);
      goto L4(r35);
    L14():
      r33 = dyn base7(<sym ids2>);
      goto L4(r33);
    };
    r39 = dyn data_frame[ID, Parent](p4, p5);
    check L28() else D11();
  D8():
    deopt 25 [ids13, ids17];
  D11():
    deopt 38 [r39];
  L25():
    ids18 = force? ids17;
    checkMissing(ids18);
    is_na1 = ldf `is.na` in base;
    r15 = dyn is_na1(ids18);
    check L26() else D9();
  L28():
    st db = r39;
    add1 = ld add;
    check L29() else D12();
  D9():
    deopt 28 [ids13, r15];
  D12():
    deopt 40 [add1];
  L26():
    goto L4(ids13, r15);
  L29():
    add2 = force? add1;
    checkMissing(add2);
    c4 = `as.logical`(add2);
    if c4 then L30() else L5();
  L5():
    goto L6();
  L6():
    db4 = ld db;
    check L38() else D15();
  L30():
    file_path = ldf `file.path`;
    check L31() else D13();
  D13():
    deopt 43 [];
  D15():
    deopt 52 [db4];
  L31():
    p7 = prom<V +>{
      basename = ldf basename;
      p6 = prom<V +>{
        dir5 = ld dir;
        dir6 = force? dir5;
        checkMissing(dir6);
        return dir6;
      };
      r41 = dyn basename(p6);
      return r41;
    };
    p8 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      c5 = `is.object`(db1);
      if c5 then L1() else L2(db1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", db1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(db3):
      r43 = `$`(db3, <sym Parent>);
      goto L0(r43);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r45 = dyn file_path(p7, p8);
    check L32() else D14();
  L38():
    db5 = force? db4;
    checkMissing(db5);
    popenv;
    return db5;
  D14():
    deopt 46 [r45];
  L32():
    l = ld db;
    c6 = `is.object`(l);
    if c6 then L34() else L35(r45, l);
  L33(r49, dx7):
    st db = dx7;
    goto L6();
  L34():
    dr6 = tryDispatchBuiltin.0("$<-", l, r45);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L36() else L35(r45, dr6);
  L35(r47, l2):
    r50 = `$<-`(l2, <sym Parent>, r45);
    goto L33(r47, r50);
  L36():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L33(r45, dx6);
  }
}