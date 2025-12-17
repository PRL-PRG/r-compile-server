fun main() {
  () -+> V { reg r:cls, reg str:cls, reg installed_packages:cls, reg _Library:*, reg _Library1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg ip:*, reg ip1:V, reg c:L, reg ip3:V, reg dr:V, reg dc:L, reg dx:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg c1:cls, reg r7:V, reg __:cls, reg r8:V, reg installed_packages1:cls, reg _Library2:*, reg _Library3:V, reg p2:p(V +), reg r10:V, reg table:cls, reg plic:*, reg plic1:V, reg c2:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg installed_packages2:cls, reg _Library4:*, reg _Library5:V, reg p4:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg pSys:*, reg pSys1:V, reg length:cls, reg r18:V, reg r19:V |
    mkenv;
    r = clos inner309447615;
    st `installed.packages` = r;
    str = ldf str;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    p1 = prom<V +>{
      installed_packages = ldf `installed.packages`;
      p = prom<V +>{
        _Library = ld `.Library`;
        _Library1 = force? _Library;
        checkMissing(_Library1);
        return _Library1;
      };
      r2 = dyn installed_packages[, priority](p, "high");
      st ip = r2;
      invisible.0();
      return r2;
    };
    r4 = dyn str(p1);
    check L4() else D1();
  D1():
    deopt 6 [r4];
  L4():
    ip = ld ip;
    check L5() else D2();
  D2():
    deopt 7 [ip];
  L5():
    ip1 = force? ip;
    checkMissing(ip1);
    c = `is.object`(ip1);
    if c then L6() else L7(ip1);
  L0():
    installed_packages1 = ldf `installed.packages`;
    check L12() else D4();
  L6():
    dr = tryDispatchBuiltin.1("[", ip1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(ip3):
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  D4():
    deopt 20 [];
  L1(r6):
    __ = ldf `[` in base;
    r8 = dyn __(ip1, <missing>, r6);
    goto L0();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0();
  L9():
    c1 = ldf c in base;
    r7 = dyn c1(1.0, <int 3, 4, 5>);
    check L11() else D3();
  L10():
    r5 = dyn base(1.0, <lang `:`(3.0, 5.0)>);
    goto L1(r5);
  L12():
    p2 = prom<V +>{
      _Library2 = ld `.Library`;
      _Library3 = force? _Library2;
      checkMissing(_Library3);
      return _Library3;
    };
    r10 = dyn installed_packages1[, priority, fields](p2, "high", "License");
    check L13() else D5();
  D3():
    deopt 16 [ip3, r7];
  D5():
    deopt 26 [r10];
  L11():
    goto L1(r7);
  L13():
    st plic = r10;
    table = ldf table;
    check L14() else D6();
  D6():
    deopt 29 [];
  L14():
    p3 = prom<V +>{
      plic = ld plic;
      plic1 = force? plic;
      checkMissing(plic1);
      c2 = `is.object`(plic1);
      if c2 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", plic1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r11 = dyn __1(plic1, <missing>, "License");
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn table(p3);
    check L15() else D7();
  D7():
    deopt 31 [r13];
  L15():
    installed_packages2 = ldf `installed.packages`;
    check L16() else D8();
  D8():
    deopt 33 [];
  L16():
    p4 = prom<V +>{
      _Library4 = ld `.Library`;
      _Library5 = force? _Library4;
      checkMissing(_Library5);
      return _Library5;
    };
    r15 = dyn installed_packages2[, priority](p4, NA_STR);
    check L17() else D9();
  D9():
    deopt 37 [r15];
  L17():
    st pSys = r15;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L2(r17):
    r19 = `==`(r17, 0.0);
    popenv;
    return r19;
  L18():
    pSys = ld pSys;
    check L20() else D10();
  L19():
    r16 = dyn base1(<sym pSys>);
    goto L2(r16);
  D10():
    deopt 41 [pSys];
  L20():
    pSys1 = force? pSys;
    checkMissing(pSys1);
    length = ldf length in base;
    r18 = dyn length(pSys1);
    check L21() else D11();
  D11():
    deopt 44 [r18];
  L21():
    goto L2(r18);
  }
}
fun inner309447615(`lib.loc`, priority, noCache, fields, subarch, `...`) {
  (reg lib_loc:*, reg priority:*, reg noCache:*, reg fields:*, reg subarch:*, reg ddd:dots) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var priority:*, reg priority_isMissing:L, reg priority_orDefault:*, var noCache:*, reg noCache_isMissing:L, reg noCache_orDefault:*, var fields:*, reg fields_isMissing:L, reg fields_orDefault:*, var subarch:*, reg subarch_isMissing:L, reg subarch_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg lib_loc1:*, reg lib_loc2:V, reg c1:V, reg c2:L, reg _libPaths:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg priority1:*, reg priority2:V, reg c3:V, reg r8:V, reg c4:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg priority3:*, reg priority4:V, reg c5:L, reg r11:V, reg c6:L, reg stop:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg _in_:cls, reg priority5:*, reg priority6:V, reg p1:p(V +), reg r17:V, reg any:cls, reg r18:V, reg c7:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg priority7:*, reg priority8:V, reg c8:L, reg priority10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg b:*, reg b1:V, reg r21:V, reg __:cls, reg r22:V, reg c9:cls, reg r23:V, reg r24:V, reg _instPkgFields:cls, reg fields1:*, reg fields2:V, reg p2:p(V +), reg r27:V, reg matrix:cls, reg character:cls, reg r28:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:I, reg r34:V, reg fields3:*, reg fields4:V, reg length:cls, reg r35:V, reg r36:V, reg p4:p(V +), reg r38:V, reg lib_loc3:*, reg lib_loc4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg noCache1:*, reg noCache2:V, reg c11:L, reg _readPkgDesc:cls, reg lib:*, reg lib1:V, reg p5:p(V +), reg fields5:*, reg fields6:V, reg p6:p(V +), reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg i9:I, reg r43:V, reg ret0:*, reg ret1:V, reg length1:cls, reg r44:V, reg c12:L, reg rbind:cls, reg retval:*, reg retval1:V, reg p7:p(V +), reg ret2:*, reg ret3:V, reg p8:p(V +), reg r47:V, reg i12:I, reg r48:V, reg i13:I, reg paste:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg r51:V, reg lib2:*, reg lib3:V, reg fields7:*, reg fields8:V, reg c13:cls, reg r52:V, reg p9:p(V +), reg r54:V, reg sprintf:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r55:V, reg r56:V, reg base9:*, reg base10:V, reg nchar:cls, reg r57:V, reg p10:p(V +), reg sym9:cls, reg base11:cls, reg guard9:L, reg r59:V, reg r60:V, reg C_crc64:*, reg C_crc65:V, reg base12:*, reg base13:V, reg vargs:dots, reg r61:V, reg p11:p(V +), reg r63:V, reg file_path:cls, reg tempdir:cls, reg r64:V, reg p12:p(V +), reg paste1:cls, reg enc:*, reg enc1:V, reg p13:p(V +), reg r67:V, reg p14:p(V +), reg r69:V, reg file_exists:cls, reg dest:*, reg dest1:V, reg p15:p(V +), reg r71:V, reg c14:L, reg i15:I, reg c16:V, reg file_mtime:cls, reg dest2:*, reg dest3:V, reg p16:p(V +), reg r73:V, reg file_mtime1:cls, reg lib4:*, reg lib5:V, reg p17:p(V +), reg r75:V, reg r76:V, reg c17:L, reg c18:V, reg c20:L, reg i18:I, reg c22:V, reg readRDS:cls, reg dest4:*, reg dest5:V, reg p18:p(V +), reg r78:V, reg c23:L, reg i20:I, reg c25:L, reg r80:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i22:I, reg c27:L, reg dx5:V, reg r81:V, reg base14:*, reg base15:V, reg r82:V, reg c28:L, reg c29:V, reg isTRUE:cls, reg as_vector:cls, reg test:*, reg test1:V, reg p19:p(V +), reg r84:V, reg p20:p(V +), reg r86:V, reg c31:L, reg rbind1:cls, reg retval2:*, reg retval3:V, reg p21:p(V +), reg val:*, reg val1:V, reg c32:L, reg val3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r88:V, reg p22:p(V +), reg r90:V, reg _readPkgDesc1:cls, reg lib6:*, reg lib7:V, reg p23:p(V +), reg fields9:*, reg fields10:V, reg p24:p(V +), reg r93:V, reg sym10:cls, reg base16:cls, reg guard10:L, reg r94:V, reg i28:I, reg r95:V, reg ret4:*, reg ret5:V, reg length2:cls, reg r96:V, reg c33:L, reg rbind2:cls, reg retval4:*, reg retval5:V, reg p25:p(V +), reg ret6:*, reg ret7:V, reg p26:p(V +), reg r99:V, reg saveRDS:cls, reg sym11:cls, reg base17:cls, reg guard11:L, reg r100:V, reg r101:V, reg base18:*, reg base19:V, reg ret8:*, reg ret9:V, reg list:cls, reg r102:V, reg p27:p(V +), reg dest6:*, reg dest7:V, reg p28:p(V +), reg r105:V, reg unlink:cls, reg dest8:*, reg dest9:V, reg p29:p(V +), reg r107:V, reg _fixupPkgMat:cls, reg retval6:*, reg retval7:V, reg p30:p(V +), reg fields11:*, reg fields12:V, reg p31:p(V +), reg priority11:*, reg priority12:V, reg p32:p(V +), reg subarch1:*, reg subarch2:V, reg p33:p(V +), reg r112:V |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    priority_isMissing = missing.0(priority);
    if priority_isMissing then L1(NULL) else L1(priority);
  L1(priority_orDefault):
    st priority = priority_orDefault;
    noCache_isMissing = missing.0(noCache);
    if noCache_isMissing then L2(FALSE) else L2(noCache);
  L2(noCache_orDefault):
    st noCache = noCache_orDefault;
    fields_isMissing = missing.0(fields);
    if fields_isMissing then L3(NULL) else L3(fields);
  L3(fields_orDefault):
    st fields = fields_orDefault;
    subarch_isMissing = missing.0(subarch);
    if subarch_isMissing then L4() else L5(subarch);
  L4():
    p = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r = `$`(_Platform3, <sym r_arch>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L5(p);
  L5(subarch_orDefault):
    st subarch = subarch_orDefault;
    st `...` = ddd;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L6(r3):
    c2 = `as.logical`(r3);
    if c2 then L35() else L7();
  L32():
    lib_loc1 = ld `lib.loc`;
    check L34() else D0();
  L33():
    r2 = dyn base(<sym lib.loc>);
    goto L6(r2);
  D0():
    deopt 1 [lib_loc1];
  L7():
    goto L8();
  L8():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L39() else L40();
  L34():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c1 = `==`(lib_loc2, NULL);
    goto L6(c1);
  L35():
    _libPaths = ldf `.libPaths`;
    check L36() else D1();
  D1():
    deopt 5 [];
  L9(r7):
    r8 = `!`(r7);
    c4 = `as.logical`(r8);
    if c4 then L42() else L10();
  L36():
    r4 = dyn _libPaths();
    check L37() else D2();
  L39():
    priority1 = ld priority;
    check L41() else D3();
  L40():
    r6 = dyn base1(<sym priority>);
    goto L9(r6);
  D2():
    deopt 6 [r4];
  D3():
    deopt 11 [priority1];
  L10():
    goto L19();
  L19():
    _instPkgFields = ldf `.instPkgFields`;
    check L66() else D13();
  L37():
    st `lib.loc` = r4;
    goto L8();
  L41():
    priority2 = force? priority1;
    checkMissing(priority2);
    c3 = `==`(priority2, NULL);
    goto L9(c3);
  L42():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  D13():
    deopt 54 [];
  L11(r10):
    r11 = `!`(r10);
    c6 = `as.logical`(r11);
    if c6 then L46() else L12();
  L43():
    priority3 = ld priority;
    check L45() else D4();
  L44():
    r9 = dyn base2(<sym priority>);
    goto L11(r9);
  L66():
    p2 = prom<V +>{
      fields1 = ld fields;
      fields2 = force? fields1;
      checkMissing(fields2);
      return fields2;
    };
    r27 = dyn _instPkgFields(p2);
    check L67() else D14();
  D4():
    deopt 16 [priority3];
  D14():
    deopt 56 [r27];
  L12():
    goto L13();
  L13():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L45():
    priority4 = force? priority3;
    checkMissing(priority4);
    c5 = `is.character`(priority4);
    goto L11(c5);
  L46():
    stop = ldf stop;
    check L47() else D5();
  L67():
    st fields = r27;
    matrix = ldf matrix;
    check L68() else D15();
  D5():
    deopt 21 [];
  D15():
    deopt 59 [];
  L14(r15):
    c7 = `as.logical`(r15);
    if c7 then L55() else L15();
  L47():
    r12 = dyn stop("'priority' must be character or NULL");
    check L48() else D6();
  L50():
    _in_ = ldf `%in%`;
    check L52() else D7();
  L51():
    r14 = dyn base3(<lang `<-`(b, `%in%`(priority, "high"))>);
    goto L14(r14);
  L68():
    p3 = prom<V +>{
      character = ldf character;
      r28 = dyn character();
      return r28;
    };
    p4 = prom<V +>{
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r33, r34):
      r36 = `+`(r33, r34);
      return r36;
    L1():
      fields3 = ld fields;
      fields4 = force? fields3;
      checkMissing(fields4);
      length = ldf length in base;
      r35 = dyn length(fields4);
      goto L0(2, r35);
    L2():
      r32 = dyn base5(<sym fields>);
      goto L0(2, r32);
    };
    r38 = dyn matrix(p3, 0, p4);
    check L69() else D16();
  D6():
    deopt 23 [r12];
  D7():
    deopt 29 [];
  D16():
    deopt 63 [r38];
  L15():
    goto L18(NULL);
  L18(r24):
    goto L19();
  L48():
    goto L13();
  L52():
    p1 = prom<V +>{
      priority5 = ld priority;
      priority6 = force? priority5;
      checkMissing(priority6);
      return priority6;
    };
    r17 = dyn _in_(p1, "high");
    check L53() else D8();
  L55():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L69():
    st retval = r38;
    lib_loc3 = ld `lib.loc`;
    check L70() else D17();
  D8():
    deopt 32 [r17];
  D17():
    deopt 65 [lib_loc3];
  L16(r20):
    st priority = r20;
    goto L18(r20);
  L53():
    st b = r17;
    any = ldf any in base;
    r18 = dyn any(r17);
    check L54() else D9();
  L56():
    priority7 = ld priority;
    check L58() else D10();
  L57():
    r19 = dyn base4(<lang `[`(priority, `!`(b))>, "recommended", "base");
    goto L16(r19);
  L70():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    s = toForSeq(lib_loc4);
    l = length(s);
    i = 0;
    goto L20(i);
  D9():
    deopt 35 [r18];
  D10():
    deopt 38 [priority7];
  L20(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l, i2);
    if c10 then L71() else L31();
  L54():
    goto L14(r18);
  L58():
    priority8 = force? priority7;
    checkMissing(priority8);
    c8 = `is.object`(priority8);
    if c8 then L59() else L60(priority8);
  L17(dx3):
    c9 = ldf c in base;
    r23 = dyn c9(dx3, "recommended", "base");
    check L63() else D12();
  L31():
    x = `[[`(s, i2, NULL, TRUE);
    st lib = x;
    noCache1 = ld noCache;
    check L72() else D18();
  L59():
    dr2 = tryDispatchBuiltin.1("[", priority8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L61() else L60(dr2);
  L60(priority10):
    b = ld b;
    check L62() else D11();
  L71():
    _fixupPkgMat = ldf `.fixupPkgMat`;
    check L128() else D54();
  D11():
    deopt 40 [priority10, b];
  D12():
    deopt 47 [r23];
  D18():
    deopt 67 [i2, noCache1];
  D54():
    deopt 177 [];
  L61():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L62():
    b1 = force? b;
    checkMissing(b1);
    r21 = `!`(b1);
    __ = ldf `[` in base;
    r22 = dyn __(priority10, r21);
    goto L17(r22);
  L63():
    goto L16(r23);
  L72():
    noCache2 = force? noCache1;
    checkMissing(noCache2);
    c11 = `as.logical`(noCache2);
    if c11 then L73() else L21();
  L128():
    p30 = prom<V +>{
      retval6 = ld retval;
      retval7 = force? retval6;
      checkMissing(retval7);
      return retval7;
    };
    p31 = prom<V +>{
      fields11 = ld fields;
      fields12 = force? fields11;
      checkMissing(fields12);
      return fields12;
    };
    p32 = prom<V +>{
      priority11 = ld priority;
      priority12 = force? priority11;
      checkMissing(priority12);
      return priority12;
    };
    p33 = prom<V +>{
      subarch1 = ld subarch;
      subarch2 = force? subarch1;
      checkMissing(subarch2);
      return subarch2;
    };
    r112 = dyn _fixupPkgMat(p30, p31, p32, p33);
    check L129() else D55();
  D55():
    deopt 182 [r112];
  L21():
    paste = ldf paste;
    check L85() else D25();
  L25(i13):
    goto L20(i13);
  L73():
    _readPkgDesc = ldf `.readPkgDesc`;
    check L74() else D19();
  L129():
    popenv;
    return r112;
  D19():
    deopt 70 [i2];
  D25():
    deopt 92 [i2];
  L74():
    p5 = prom<V +>{
      lib = ld lib;
      lib1 = force? lib;
      checkMissing(lib1);
      return lib1;
    };
    p6 = prom<V +>{
      fields5 = ld fields;
      fields6 = force? fields5;
      checkMissing(fields6);
      return fields6;
    };
    r41 = dyn _readPkgDesc(p5, p6);
    check L75() else D20();
  L85():
    p9 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      lib2 = ld lib;
      lib3 = force? lib2;
      checkMissing(lib3);
      fields7 = ld fields;
      fields8 = force? fields7;
      checkMissing(fields8);
      c13 = ldf c in base;
      r52 = dyn c13(lib3, fields8);
      goto L0(r52);
    L2():
      r50 = dyn base7(<sym lib>, <sym fields>);
      goto L0(r50);
    };
    r54 = dyn paste[, collapse](p9, ",");
    check L86() else D26();
  D20():
    deopt 73 [i2, r41];
  D26():
    deopt 96 [i2, r54];
  L75():
    st ret0 = r41;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  L86():
    st base = r54;
    sprintf = ldf sprintf;
    check L87() else D27();
  D27():
    deopt 99 [i2];
  L22(i9, r43):
    c12 = `as.logical`(r43);
    if c12 then L80() else L23();
  L76():
    ret0 = ld ret0;
    check L78() else D21();
  L77():
    r42 = dyn base6(<sym ret0>);
    goto L22(i2, r42);
  L87():
    p10 = prom<V +>{
      sym8 = ldf nchar;
      base8 = ldf nchar in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      base9 = ld base;
      base10 = force? base9;
      checkMissing(base10);
      nchar = ldf nchar in base;
      r57 = dyn nchar(base10, "chars", FALSE, NA_LGL);
      goto L0(r57);
    L2():
      r55 = dyn base8(<sym base>);
      goto L0(r55);
    };
    p11 = prom<V +>{
      sym9 = ldf `.Call`;
      base11 = ldf `.Call` in base;
      guard9 = `==`.4(sym9, base11);
      if guard9 then L1() else L2();
    L0(r60):
      return r60;
    L1():
      C_crc64 = ld C_crc64;
      C_crc65 = force? C_crc64;
      checkMissing(C_crc65);
      base12 = ld base;
      base13 = force? base12;
      checkMissing(base13);
      vargs = dots[base13];
      r61 = `.Call`(C_crc65, vargs, <missing>);
      goto L0(r61);
    L2():
      r59 = dyn base11(<sym C_crc64>, <sym base>);
      goto L0(r59);
    };
    r63 = dyn sprintf("%d_%s", p10, p11);
    check L88() else D28();
  D21():
    deopt 77 [i2, ret0];
  D28():
    deopt 103 [i2, r63];
  L23():
    goto L24(i9, NULL);
  L24(i12, r48):
    goto L25(i12);
  L78():
    ret1 = force? ret0;
    checkMissing(ret1);
    length1 = ldf length in base;
    r44 = dyn length1(ret1);
    check L79() else D22();
  L80():
    rbind = ldf rbind;
    check L81() else D23();
  L88():
    st enc = r63;
    file_path = ldf `file.path`;
    check L89() else D29();
  D22():
    deopt 80 [i2, r44];
  D23():
    deopt 82 [i9];
  D29():
    deopt 106 [i2];
  L79():
    goto L22(i2, r44);
  L81():
    p7 = prom<V +>{
      retval = ld retval;
      retval1 = force? retval;
      checkMissing(retval1);
      return retval1;
    };
    p8 = prom<V +>{
      ret2 = ld ret0;
      ret3 = force? ret2;
      checkMissing(ret3);
      return ret3;
    };
    r47 = dyn rbind[, , `deparse.level`](p7, p8, 0);
    check L82() else D24();
  L89():
    p12 = prom<V +>{
      tempdir = ldf tempdir;
      r64 = dyn tempdir();
      return r64;
    };
    p14 = prom<V +>{
      paste1 = ldf paste0;
      p13 = prom<V +>{
        enc = ld enc;
        enc1 = force? enc;
        checkMissing(enc1);
        return enc1;
      };
      r67 = dyn paste1("libloc_", p13, ".rds");
      return r67;
    };
    r69 = dyn file_path(p12, p14);
    check L90() else D30();
  D24():
    deopt 87 [i9, r47];
  D30():
    deopt 109 [i2, r69];
  L82():
    st retval = r47;
    goto L24(i9, r47);
  L90():
    st dest = r69;
    file_exists = ldf `file.exists`;
    check L91() else D31();
  D31():
    deopt 112 [i2];
  L91():
    p15 = prom<V +>{
      dest = ld dest;
      dest1 = force? dest;
      checkMissing(dest1);
      return dest1;
    };
    r71 = dyn file_exists(p15);
    check L92() else D32();
  D32():
    deopt 114 [i2, r71];
  L92():
    c14 = `as.logical`(r71);
    if c14 then L93() else L26(i2, c14);
  L26(i15, c16):
    c20 = `as.logical`(c16);
    if c20 then L99() else L27(i15, c20);
  L93():
    file_mtime = ldf `file.mtime`;
    check L94() else D33();
  D33():
    deopt 116 [i2, c14];
  L27(i18, c22):
    st test = c22;
    isTRUE = ldf isTRUE;
    check L108() else D40();
  L94():
    p16 = prom<V +>{
      dest2 = ld dest;
      dest3 = force? dest2;
      checkMissing(dest3);
      return dest3;
    };
    r73 = dyn file_mtime(p16);
    check L95() else D34();
  L99():
    readRDS = ldf readRDS;
    check L100() else D37();
  D34():
    deopt 118 [i2, c14, r73];
  D37():
    deopt 125 [i15, c20];
  D40():
    deopt 135 [i18];
  L95():
    file_mtime1 = ldf `file.mtime`;
    check L96() else D35();
  L100():
    p18 = prom<V +>{
      dest4 = ld dest;
      dest5 = force? dest4;
      checkMissing(dest5);
      return dest5;
    };
    r78 = dyn readRDS(p18);
    check L101() else D38();
  L108():
    p20 = prom<V +>{
      as_vector = ldf `as.vector`;
      p19 = prom<V +>{
        test = ld test;
        test1 = force? test;
        checkMissing(test1);
        return test1;
      };
      r84 = dyn as_vector(p19);
      return r84;
    };
    r86 = dyn isTRUE(p20);
    check L109() else D41();
  D35():
    deopt 119 [i2, c14, r73];
  D38():
    deopt 127 [i15, c20, r78];
  D41():
    deopt 137 [i18, r86];
  L96():
    p17 = prom<V +>{
      lib4 = ld lib;
      lib5 = force? lib4;
      checkMissing(lib5);
      return lib5;
    };
    r75 = dyn file_mtime1(p17);
    check L97() else D36();
  L101():
    st val = r78;
    c23 = `is.object`(r78);
    if c23 then L103() else L104(i15, c20, r78);
  L109():
    c31 = `as.logical`(r86);
    if c31 then L110() else L28();
  D36():
    deopt 121 [i2, c14, r73, r75];
  L28():
    _readPkgDesc1 = ldf `.readPkgDesc`;
    check L114() else D44();
  L97():
    r76 = `>`(r73, r75);
    c17 = `as.logical`(r76);
    c18 = `&&`(c14, c17);
    goto L26(i2, c18);
  L102(i22, c27, dx5):
    base14 = ld base;
    check L106() else D39();
  L103():
    dr4 = tryDispatchBuiltin.1("$", r78);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L105() else L104(i15, c20, dr4);
  L104(i20, c25, r80):
    r81 = `$`(r80, <sym base>);
    goto L102(i20, c25, r81);
  L110():
    rbind1 = ldf rbind;
    check L111() else D42();
  D39():
    deopt 129 [i22, c27, dx5, base14];
  D42():
    deopt 139 [i18];
  D44():
    deopt 145 [i18];
  L105():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L102(i15, c20, dx4);
  L106():
    base15 = force? base14;
    checkMissing(base15);
    r82 = `==`(dx5, base15);
    c28 = `as.logical`(r82);
    c29 = `&&`(c27, c28);
    goto L27(i22, c29);
  L111():
    p21 = prom<V +>{
      retval2 = ld retval;
      retval3 = force? retval2;
      checkMissing(retval3);
      return retval3;
    };
    p22 = prom<V +>{
      val = ld val;
      val1 = force? val;
      checkMissing(val1);
      c32 = `is.object`(val1);
      if c32 then L1() else L2(val1);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", val1);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(val3):
      r88 = `$`(val3, <sym value>);
      goto L0(r88);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r90 = dyn rbind1(p21, p22);
    check L112() else D43();
  L114():
    p23 = prom<V +>{
      lib6 = ld lib;
      lib7 = force? lib6;
      checkMissing(lib7);
      return lib7;
    };
    p24 = prom<V +>{
      fields9 = ld fields;
      fields10 = force? fields9;
      checkMissing(fields10);
      return fields10;
    };
    r93 = dyn _readPkgDesc1(p23, p24);
    check L115() else D45();
  D43():
    deopt 142 [i18, r90];
  D45():
    deopt 148 [i18, r93];
  L112():
    st retval = r90;
    goto L25(i18);
  L115():
    st ret0 = r93;
    sym10 = ldf length;
    base16 = ldf length in base;
    guard10 = `==`.4(sym10, base16);
    if guard10 then L116() else L117();
  L29(i28, r95):
    c33 = `as.logical`(r95);
    if c33 then L120() else L30();
  L116():
    ret4 = ld ret0;
    check L118() else D46();
  L117():
    r94 = dyn base16(<sym ret0>);
    goto L29(i18, r94);
  D46():
    deopt 152 [i18, ret4];
  L30():
    unlink = ldf unlink;
    check L126() else D52();
  L118():
    ret5 = force? ret4;
    checkMissing(ret5);
    length2 = ldf length in base;
    r96 = dyn length2(ret5);
    check L119() else D47();
  L120():
    rbind2 = ldf rbind;
    check L121() else D48();
  D47():
    deopt 155 [i18, r96];
  D48():
    deopt 157 [i28];
  D52():
    deopt 170 [i28];
  L119():
    goto L29(i18, r96);
  L121():
    p25 = prom<V +>{
      retval4 = ld retval;
      retval5 = force? retval4;
      checkMissing(retval5);
      return retval5;
    };
    p26 = prom<V +>{
      ret6 = ld ret0;
      ret7 = force? ret6;
      checkMissing(ret7);
      return ret7;
    };
    r99 = dyn rbind2[, , `deparse.level`](p25, p26, 0);
    check L122() else D49();
  L126():
    p29 = prom<V +>{
      dest8 = ld dest;
      dest9 = force? dest8;
      checkMissing(dest9);
      return dest9;
    };
    r107 = dyn unlink(p29);
    check L127() else D53();
  D49():
    deopt 162 [i28, r99];
  D53():
    deopt 172 [i28, r107];
  L122():
    st retval = r99;
    saveRDS = ldf saveRDS;
    check L123() else D50();
  L127():
    goto L25(i28);
  D50():
    deopt 165 [i28];
  L123():
    p27 = prom<V +>{
      sym11 = ldf list;
      base17 = ldf list in base;
      guard11 = `==`.4(sym11, base17);
      if guard11 then L1() else L2();
    L0(r101):
      return r101;
    L1():
      base18 = ld base;
      base19 = force? base18;
      checkMissing(base19);
      ret8 = ld ret0;
      ret9 = force? ret8;
      checkMissing(ret9);
      list = ldf list in base;
      r102 = dyn list(base19, ret9);
      goto L0(r102);
    L2():
      r100 = dyn base17[base, value](<sym base>, <sym ret0>);
      goto L0(r100);
    };
    p28 = prom<V +>{
      dest6 = ld dest;
      dest7 = force? dest6;
      checkMissing(dest7);
      return dest7;
    };
    r105 = dyn saveRDS(p27, p28);
    check L124() else D51();
  D51():
    deopt 168 [i28, r105];
  L124():
    goto L25(i28);
  }
}