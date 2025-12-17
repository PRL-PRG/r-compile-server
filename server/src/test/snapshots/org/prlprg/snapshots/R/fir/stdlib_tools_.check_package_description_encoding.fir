fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2124866908;
    st `.check_package_description_encoding` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2124866908(dfile) {
  (reg dfile:*) -+> V { var dfile:*, reg file_path_as_absolute:cls, reg dfile1:*, reg dfile2:V, reg p:p(V +), reg r1:V, reg _read_description:cls, reg dfile3:*, reg dfile4:V, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg list:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg _is_ASCII:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg db:*, reg db1:V, reg names:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg r14:V, reg any:cls, reg r15:V, reg c:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg db2:*, reg db3:V, reg names1:cls, reg r18:V, reg c1:L, reg r20:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r21:V, reg l:*, reg c2:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg r22:V, reg _notin_:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg db4:*, reg db5:V, reg names2:cls, reg r25:V, reg p3:p(V +), reg r27:V, reg c3:L, reg _is_ASCII1:cls, reg db6:*, reg db7:V, reg p4:p(V +), reg r29:V, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg ind2:*, reg ind3:V, reg any1:cls, reg r33:V, reg c4:L, reg l3:*, reg c5:L, reg r35:L, reg l5:*, reg dr4:V, reg dc2:L, reg dx9:V, reg dx10:V, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg db8:*, reg db9:V, reg names3:cls, reg r41:V, reg c6:L, reg r43:V, reg dr6:V, reg dc3:L, reg dx11:V, reg dx12:V, reg ind4:*, reg ind5:V, reg __1:cls, reg r44:V, reg l6:*, reg c7:L, reg dx14:V, reg l8:*, reg dr8:V, reg dc4:L, reg dx16:V, reg dx17:V, reg dx18:V, reg r45:V, reg dx19:V, reg db10:*, reg db11:V, reg c8:L, reg db13:V, reg dr10:V, reg dc5:L, reg dx21:V, reg dx22:V, reg __2:cls, reg r46:V, reg _notin_1:cls, reg enc:*, reg enc1:V, reg p5:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg c9:cls, reg r50:V, reg p6:p(V +), reg r52:V, reg c10:L, reg enc2:*, reg enc3:V, reg l9:*, reg c11:L, reg enc5:V, reg l11:*, reg dr12:V, reg dc6:L, reg dx23:V, reg enc7:V, reg dx24:V, reg r53:V, reg l12:*, reg class__:cls, reg r54:V, reg out:*, reg out1:V |
    mkenv;
    st dfile = dfile;
    file_path_as_absolute = ldf file_path_as_absolute;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      dfile1 = ld dfile;
      dfile2 = force? dfile1;
      checkMissing(dfile2);
      return dfile2;
    };
    r1 = dyn file_path_as_absolute(p);
    check L16() else D1();
  D1():
    deopt 3 [r1];
  L16():
    st dfile = r1;
    _read_description = ldf `.read_description`;
    check L17() else D2();
  D2():
    deopt 6 [];
  L17():
    p1 = prom<V +>{
      dfile3 = ld dfile;
      dfile4 = force? dfile3;
      checkMissing(dfile4);
      return dfile4;
    };
    r3 = dyn _read_description(p1);
    check L18() else D3();
  D3():
    deopt 8 [r3];
  L18():
    st db = r3;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r5):
    st out = r5;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L19():
    list = ldf list in base;
    r6 = dyn list();
    check L21() else D4();
  L20():
    r4 = dyn base();
    goto L0(r4);
  D4():
    deopt 13 [r6];
  L1(r8):
    c = `as.logical`(r8);
    if c then L27() else L2();
  L21():
    goto L0(r6);
  L22():
    _is_ASCII = ldf `.is_ASCII`;
    check L24() else D5();
  L23():
    r7 = dyn base1(<lang `<-`(ind, `!`(.is_ASCII(names(db))))>);
    goto L1(r7);
  D5():
    deopt 18 [];
  L2():
    goto L5();
  L5():
    _notin_ = ldf `%notin%`;
    check L41() else D11();
  L24():
    p2 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      names = ldf names in base;
      r11 = dyn names(db1);
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym db>);
      goto L0(r9);
    };
    r13 = dyn _is_ASCII(p2);
    check L25() else D6();
  L27():
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  D6():
    deopt 20 [r13];
  D11():
    deopt 40 [];
  L3(r17):
    c1 = `is.object`(r17);
    if c1 then L32() else L33(r17);
  L25():
    r14 = `!`(r13);
    st ind = r14;
    any = ldf any in base;
    r15 = dyn any(r14);
    check L26() else D7();
  L28():
    db2 = ld db;
    check L30() else D8();
  L29():
    r16 = dyn base3(<sym db>);
    goto L3(r16);
  L41():
    p3 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      names2 = ldf names in base;
      r25 = dyn names2(db5);
      goto L0(r25);
    L2():
      r23 = dyn base4(<sym db>);
      goto L0(r23);
    };
    r27 = dyn _notin_("Encoding", p3);
    check L42() else D12();
  D7():
    deopt 24 [r15];
  D8():
    deopt 27 [db2];
  D12():
    deopt 43 [r27];
  L4(dx1):
    l = ld out;
    c2 = `is.object`(l);
    if c2 then L37() else L38(dx1, l);
  L26():
    goto L1(r15);
  L30():
    db3 = force? db2;
    checkMissing(db3);
    names1 = ldf names in base;
    r18 = dyn names1(db3);
    check L31() else D9();
  L32():
    dr = tryDispatchBuiltin.1("[", r17);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(r20):
    ind = ld ind;
    check L35() else D10();
  L42():
    c3 = `as.logical`(r27);
    if c3 then L43() else L6();
  D9():
    deopt 30 [r18];
  D10():
    deopt 31 [r20, ind];
  L6():
    db10 = ld db;
    check L69() else D20();
  L12():
    l12 = ld out;
    class__ = ldf `class<-`;
    check L82() else D24();
  L31():
    goto L3(r18);
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L35():
    ind1 = force? ind;
    __ = ldf `[` in base;
    r21 = dyn __(r20, ind1);
    goto L4(r21);
  L36(dx6, dx7):
    st out = dx7;
    goto L5();
  L37():
    dr2 = tryDispatchBuiltin.0("$<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dx1, dr2);
  L38(dx3, l2):
    r22 = `$<-`(l2, <sym fields_with_non_ASCII_tags>, dx1);
    goto L36(dx3, r22);
  L43():
    _is_ASCII1 = ldf `.is_ASCII`;
    check L44() else D13();
  D13():
    deopt 45 [];
  D20():
    deopt 75 [db10];
  D24():
    deopt 96 ["check_package_description_encoding", l12, "check_package_description_encoding"];
  L39():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L36(dx1, dx5);
  L44():
    p4 = prom<V +>{
      db6 = ld db;
      db7 = force? db6;
      checkMissing(db7);
      return db7;
    };
    r29 = dyn _is_ASCII1(p4);
    check L45() else D14();
  L69():
    db11 = force? db10;
    checkMissing(db11);
    c8 = `is.object`(db11);
    if c8 then L70() else L71(db11);
  L82():
    r54 = dyn class__(l12, NULL, "check_package_description_encoding");
    check L83() else D25();
  D14():
    deopt 47 [r29];
  D25():
    deopt 98 ["check_package_description_encoding", r54];
  L13(dx22):
    st enc = dx22;
    _notin_1 = ldf `%notin%`;
    check L73() else D21();
  L45():
    r30 = `!`(r29);
    st ind = r30;
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L70():
    dr10 = tryDispatchBuiltin.1("[[", db11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L72() else L71(dr10);
  L71(db13):
    __2 = ldf `[[` in base;
    r46 = dyn __2(db13, "Encoding");
    goto L13(r46);
  L83():
    st out = r54;
    out = ld out;
    check L84() else D26();
  D21():
    deopt 82 [];
  D26():
    deopt 100 [out];
  L7(r32):
    c4 = `as.logical`(r32);
    if c4 then L50() else L8();
  L46():
    ind2 = ld ind;
    check L48() else D15();
  L47():
    r31 = dyn base5(<sym ind>);
    goto L7(r31);
  L72():
    dx21 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx21);
  L73():
    p5 = prom<V +>{
      enc = ld enc;
      enc1 = force? enc;
      checkMissing(enc1);
      return enc1;
    };
    p6 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r49):
      return r49;
    L1():
      c9 = ldf c in base;
      r50 = dyn c9("latin1", "latin2", "UTF-8");
      goto L0(r50);
    L2():
      r48 = dyn base7("latin1", "latin2", "UTF-8");
      goto L0(r48);
    };
    r52 = dyn _notin_1(p5, p6);
    check L74() else D22();
  L84():
    out1 = force? out;
    checkMissing(out1);
    popenv;
    return out1;
  D15():
    deopt 52 [ind2];
  D22():
    deopt 85 [r52];
  L8():
    goto L11(NULL);
  L11(dx19):
    goto L12();
  L48():
    ind3 = force? ind2;
    checkMissing(ind3);
    any1 = ldf any in base;
    r33 = dyn any1(ind3);
    check L49() else D16();
  L50():
    l3 = ld out;
    c5 = `is.object`(l3);
    if c5 then L52() else L53(TRUE, l3);
  L74():
    c10 = `as.logical`(r52);
    if c10 then L75() else L14();
  D16():
    deopt 55 [r33];
  L14():
    goto L12();
  L49():
    goto L7(r33);
  L51(dx10):
    st out = dx10;
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L55() else L56();
  L52():
    dr4 = tryDispatchBuiltin.0("$<-", l3, TRUE);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(TRUE, dr4);
  L53(r35, l5):
    r38 = `$<-`(l5, <sym missing_encoding>, TRUE);
    goto L51(r38);
  L75():
    enc2 = ld enc;
    check L76() else D23();
  D23():
    deopt 86 [enc2];
  L9(r40):
    c6 = `is.object`(r40);
    if c6 then L59() else L60(r40);
  L54():
    dx9 = getTryDispatchBuiltinValue(dr4);
    goto L51(dx9);
  L55():
    db8 = ld db;
    check L57() else D17();
  L56():
    r39 = dyn base6(<sym db>);
    goto L9(r39);
  L76():
    enc3 = force? enc2;
    checkMissing(enc3);
    l9 = ld out;
    c11 = `is.object`(l9);
    if c11 then L78() else L79(enc3, l9);
  D17():
    deopt 63 [db8];
  L10(dx12):
    l6 = ld out;
    c7 = `is.object`(l6);
    if c7 then L64() else L65(dx12, l6);
  L57():
    db9 = force? db8;
    checkMissing(db9);
    names3 = ldf names in base;
    r41 = dyn names3(db9);
    check L58() else D18();
  L59():
    dr6 = tryDispatchBuiltin.1("[", r40);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(dr6);
  L60(r43):
    ind4 = ld ind;
    check L62() else D19();
  L77(enc7, dx24):
    st out = dx24;
    goto L12();
  L78():
    dr12 = tryDispatchBuiltin.0("$<-", l9, enc3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L80() else L79(enc3, dr12);
  L79(enc5, l11):
    r53 = `$<-`(l11, <sym non_portable_encoding>, enc3);
    goto L77(enc5, r53);
  D18():
    deopt 66 [r41];
  D19():
    deopt 67 [r43, ind4];
  L58():
    goto L9(r41);
  L61():
    dx11 = getTryDispatchBuiltinValue(dr6);
    goto L10(dx11);
  L62():
    ind5 = force? ind4;
    __1 = ldf `[` in base;
    r44 = dyn __1(r43, ind5);
    goto L10(r44);
  L63(dx17, dx18):
    st out = dx18;
    goto L11(dx17);
  L64():
    dr8 = tryDispatchBuiltin.0("$<-", l6, dx12);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L66() else L65(dx12, dr8);
  L65(dx14, l8):
    r45 = `$<-`(l8, <sym fields_with_non_ASCII_values>, dx12);
    goto L63(dx14, r45);
  L80():
    dx23 = getTryDispatchBuiltinValue(dr12);
    goto L77(enc3, dx23);
  L66():
    dx16 = getTryDispatchBuiltinValue(dr8);
    goto L63(dx12, dx16);
  }
}