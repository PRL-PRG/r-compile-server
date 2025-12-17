fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2642835162;
    st news = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2642835162(query, package, `lib.loc`, format, reader, db) {
  (reg query:*, reg package:*, reg lib_loc:*, reg format:*, reg reader:*, reg db:*) -+> V { var query:*, var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var format:*, reg format_isMissing:L, reg format_orDefault:*, var reader:*, reg reader_isMissing:L, reg reader_orDefault:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg db1:*, reg db2:V, reg c:V, reg c1:L, reg package1:*, reg package2:V, reg r2:V, reg c2:L, reg ___:cls, reg r3:V, reg r4:cls, reg r5:V, reg r6:V, reg package3:*, reg package4:V, reg r7:V, reg c3:L, reg ___1:cls, reg r8:V, reg r9:cls, reg r10:V, reg package5:*, reg package6:V, reg r11:V, reg c4:L, reg ___2:cls, reg r12:V, reg r13:cls, reg r14:V, reg ___3:cls, reg r15:V, reg r16:cls, reg package7:*, reg package8:V, reg p:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p1:p(V +), reg format1:*, reg format2:V, reg p2:p(V +), reg reader1:*, reg reader2:V, reg p3:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r23:V, reg r24:V, reg db3:*, reg db4:V, reg c5:V, reg c6:L, reg new_db:*, reg new_db1:V, reg c7:L, reg package9:*, reg package10:V, reg l:*, reg attr__:cls, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg missing:cls, reg r30:V, reg c8:L, reg db5:*, reg db6:V, reg db7:*, reg db8:V, reg db9:*, reg db10:V, reg c9:L, reg db12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r33:V, reg regexpr:cls, reg sprintf:cls, reg _standard_regexps:cls, reg r34:V, reg c10:L, reg r36:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r37:V, reg p4:p(V +), reg r39:V, reg p5:p(V +), reg version:*, reg version1:V, reg p6:p(V +), reg r42:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r43:V, reg r44:V, reg pos:*, reg pos1:V, reg r45:V, reg any:cls, reg r46:V, reg c11:L, reg substring:cls, reg version2:*, reg version3:V, reg c12:L, reg version5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind:*, reg ind1:V, reg __:cls, reg r47:V, reg p7:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg r50:V, reg pos2:*, reg pos3:V, reg attr:cls, reg r51:V, reg c13:L, reg r53:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r54:V, reg p8:p(V +), reg r56:V, reg l1:*, reg c14:L, reg r58:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r60:V, reg dx9:V, reg ind4:*, reg ind5:V, reg ___4:cls, reg r61:V, reg numeric_version:cls, reg version6:*, reg version7:V, reg p9:p(V +), reg r64:V, reg l4:*, reg c15:L, reg r66:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r69:V, reg as_Date:cls, reg db13:*, reg db14:V, reg c16:L, reg db16:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r70:V, reg p10:p(V +), reg r72:V, reg l7:*, reg c17:L, reg r74:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r77:V, reg eval:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r78:V, reg r79:V, reg substitute:cls, reg r80:V, reg p11:p(V +), reg db17:*, reg db18:V, reg p12:p(V +), reg parent_frame:cls, reg r83:V, reg p13:p(V +), reg r85:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r86:V, reg r87:V, reg r88:*, reg r89:V, reg c18:V, reg r90:V, reg c19:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r91:V, reg r92:V, reg r93:*, reg r94:V, reg c20:L, reg r95:V, reg c21:L, reg c22:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r96:V, reg c26:L, reg r97:V, reg r98:*, reg r99:V, reg length:cls, reg r100:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r103:V, reg c29:L, reg r104:V, reg r105:V, reg version8:*, reg version9:V, reg length1:cls, reg r106:V, reg r107:V, reg c30:L, reg c31:V, reg c33:L, reg stop:cls, reg r108:V, reg r110:*, reg r111:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r114:V, reg r115:V, reg r116:V, reg r117:*, reg r118:V, reg is_na:cls, reg r119:V, reg r120:V, reg r121:V, reg db19:*, reg db20:V, reg c34:L, reg db22:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r122:*, reg r123:V, reg __2:cls, reg r124:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r125:V, reg r126:V, reg r127:*, reg r128:V, reg all:cls, reg r129:V, reg r130:V, reg c35:L, reg r131:*, reg r132:V, reg l10:*, reg attr__1:cls, reg r133:V, reg r134:V, reg db23:*, reg db24:V |
    mkenv;
    st query = query;
    package_isMissing = missing.0(package);
    if package_isMissing then L0("R") else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    format_isMissing = missing.0(format);
    if format_isMissing then L2(NULL) else L2(format);
  L2(format_orDefault):
    st format = format_orDefault;
    reader_isMissing = missing.0(reader);
    if reader_isMissing then L3(NULL) else L3(reader);
  L3(reader_orDefault):
    st reader = reader_orDefault;
    db_isMissing = missing.0(db);
    if db_isMissing then L4(NULL) else L4(db);
  L4(db_orDefault):
    st db = db_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L5(r1):
    st `new.db` = r1;
    c1 = `as.logical`(r1);
    if c1 then L41() else L6();
  L38():
    db1 = ld db;
    check L40() else D0();
  L39():
    r = dyn base(<sym db>);
    goto L5(r);
  D0():
    deopt 1 [db1];
  L6():
    goto L11();
  L11():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L64() else L65();
  L40():
    db2 = force? db1;
    checkMissing(db2);
    c = `==`(db2, NULL);
    goto L5(c);
  L41():
    package1 = ld package;
    check L42() else D1();
  D1():
    deopt 5 [package1];
  L12(r24):
    c6 = `as.logical`(r24);
    if c6 then L67() else L13();
  L42():
    package2 = force? package1;
    checkMissing(package2);
    r2 = `==`(package2, "R");
    c2 = `as.logical`(r2);
    if c2 then L43() else L7();
  L64():
    db3 = ld db;
    check L66() else D16();
  L65():
    r23 = dyn base1(<sym db>);
    goto L12(r23);
  D16():
    deopt 57 [db3];
  L7():
    package3 = ld package;
    check L48() else D5();
  L8(r6):
    st db = r6;
    goto L11();
  L13():
    new_db = ld `new.db`;
    check L70() else D17();
  L43():
    ___ = ldf `:::`;
    check L44() else D2();
  L66():
    db4 = force? db3;
    checkMissing(db4);
    c5 = `==`(db4, NULL);
    goto L12(c5);
  L67():
    popenv;
    return NULL;
  D2():
    deopt 10 [];
  D5():
    deopt 16 [package3];
  D17():
    deopt 65 [new_db];
  L44():
    r3 = dyn ___("tools", ".build_news_db_from_R_NEWS_Rd");
    check L45() else D3();
  L48():
    package4 = force? package3;
    checkMissing(package4);
    r7 = `==`(package4, "R-3");
    c3 = `as.logical`(r7);
    if c3 then L49() else L9();
  L70():
    new_db1 = force? new_db;
    checkMissing(new_db1);
    c7 = `as.logical`(new_db1);
    if c7 then L71() else L15();
  D3():
    deopt 13 [r3];
  L9():
    package5 = ld package;
    check L54() else D9();
  L15():
    goto L16();
  L16():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L76() else L77();
  L45():
    checkFun.0(r3);
    r4 = r3 as cls;
    r5 = dyn r4();
    check L46() else D4();
  L49():
    ___1 = ldf `:::`;
    check L50() else D6();
  L71():
    package9 = ld package;
    check L72() else D18();
  D4():
    deopt 15 [r5];
  D6():
    deopt 21 [];
  D9():
    deopt 29 [package5];
  D18():
    deopt 67 [package9];
  L17(r29):
    c8 = `as.logical`(r29);
    if c8 then L78() else L18();
  L46():
    goto L8(r5);
  L50():
    r8 = dyn ___1("tools", ".build_news_db_from_R_NEWS_Rd");
    check L51() else D7();
  L54():
    package6 = force? package5;
    checkMissing(package6);
    r11 = `==`(package6, "R-2");
    c4 = `as.logical`(r11);
    if c4 then L55() else L10();
  L72():
    package10 = force? package9;
    checkMissing(package10);
    l = ld db;
    attr__ = ldf `attr<-`;
    check L73() else D19();
  L76():
    missing = ldf missing in base;
    r30 = dyn missing(<sym query>);
    goto L17(r30);
  L77():
    r28 = dyn base2(<sym query>);
    goto L17(r28);
  D7():
    deopt 24 [r8];
  D19():
    deopt 70 [package10, l, package10];
  L10():
    ___3 = ldf `:::`;
    check L60() else D13();
  L18():
    db7 = ld db;
    check L82() else D22();
  L51():
    checkFun.0(r8);
    r9 = r8 as cls;
    r10 = dyn r9[Rfile]("NEWS.3.rds");
    check L52() else D8();
  L55():
    ___2 = ldf `:::`;
    check L56() else D10();
  L73():
    r27 = dyn attr__(l, NULL, "package", package10);
    check L74() else D20();
  L78():
    db5 = ld db;
    check L79() else D21();
  D8():
    deopt 28 [r10];
  D10():
    deopt 34 [];
  D13():
    deopt 43 [];
  D20():
    deopt 73 [package10, r27];
  D21():
    deopt 80 [db5];
  D22():
    deopt 85 [db7];
  L52():
    goto L8(r10);
  L56():
    r12 = dyn ___2("tools", ".build_news_db_from_R_NEWS_Rd");
    check L57() else D11();
  L60():
    r15 = dyn ___3("tools", ".build_news_db");
    check L61() else D14();
  L74():
    st db = r27;
    goto L16();
  L79():
    db6 = force? db5;
    checkMissing(db6);
    popenv;
    return db6;
  L82():
    db8 = force? db7;
    checkMissing(db8);
    st db1 = db8;
    db9 = ld db;
    check L83() else D23();
  D11():
    deopt 37 [r12];
  D14():
    deopt 46 [r15];
  D23():
    deopt 88 [db9];
  L57():
    checkFun.0(r12);
    r13 = r12 as cls;
    r14 = dyn r13[Rfile]("NEWS.2.rds");
    check L58() else D12();
  L61():
    checkFun.0(r15);
    r16 = r15 as cls;
    p = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    p1 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    p2 = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    p3 = prom<V +>{
      reader1 = ld reader;
      reader2 = force? reader1;
      checkMissing(reader2);
      return reader2;
    };
    r21 = dyn r16(p, p1, p2, p3);
    check L62() else D15();
  L83():
    db10 = force? db9;
    checkMissing(db10);
    c9 = `is.object`(db10);
    if c9 then L85() else L86(db10);
  D12():
    deopt 41 [r14];
  D15():
    deopt 52 [r21];
  L58():
    goto L8(r14);
  L62():
    goto L8(r21);
  L84(dx1):
    st version = dx1;
    regexpr = ldf regexpr;
    check L88() else D24();
  L85():
    dr = tryDispatchBuiltin.1("$", db10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L87() else L86(dr);
  L86(db12):
    r33 = `$`(db12, <sym Version>);
    goto L84(r33);
  D24():
    deopt 93 [];
  L87():
    dx = getTryDispatchBuiltinValue(dr);
    goto L84(dx);
  L88():
    p5 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        _standard_regexps = ldf `.standard_regexps`;
        r34 = dyn _standard_regexps();
        c10 = `is.object`(r34);
        if c10 then L1() else L2(r34);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", r34);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r36):
        r37 = `$`(r36, <sym valid_numeric_version>);
        goto L0(r37);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r39 = dyn sprintf("^%s", p4);
      return r39;
    };
    p6 = prom<V +>{
      version = ld version;
      version1 = force? version;
      checkMissing(version1);
      return version1;
    };
    r42 = dyn regexpr(p5, p6);
    check L89() else D25();
  D25():
    deopt 96 [r42];
  L89():
    st pos = r42;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L90() else L91();
  L20(r44):
    c11 = `as.logical`(r44);
    if c11 then L94() else L21();
  L90():
    pos = ld pos;
    check L92() else D26();
  L91():
    r43 = dyn base3(<lang `<-`(ind, `(`(`>`(pos, `-`(1))))>);
    goto L20(r43);
  D26():
    deopt 100 [pos];
  L21():
    goto L23();
  L23():
    numeric_version = ldf numeric_version;
    check L102() else D31();
  L92():
    pos1 = force? pos;
    checkMissing(pos1);
    r45 = `>`(pos1, -1);
    st ind = r45;
    any = ldf any in base;
    r46 = dyn any(r45);
    check L93() else D27();
  L94():
    substring = ldf substring;
    check L95() else D28();
  D27():
    deopt 106 [r46];
  D28():
    deopt 108 [];
  D31():
    deopt 121 [];
  L93():
    goto L20(r46);
  L95():
    p7 = prom<V +>{
      version2 = ld version;
      version3 = force? version2;
      checkMissing(version3);
      c12 = `is.object`(version3);
      if c12 then L1() else L2(version3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", version3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(version5):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r47 = dyn __(version5, ind1);
      goto L0(r47);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p8 = prom<V +>{
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r50):
      c13 = `is.object`(r50);
      if c13 then L4() else L5(r50);
    L2():
      pos2 = ld pos;
      pos3 = force? pos2;
      checkMissing(pos3);
      attr = ldf attr in base;
      r51 = dyn attr(pos3, "match.length");
      goto L0(r51);
    L3():
      r49 = dyn base4(<sym pos>, "match.length");
      goto L0(r49);
    L1(dx7):
      return dx7;
    L4():
      dr6 = tryDispatchBuiltin.1("[", r50);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L6() else L5(dr6);
    L5(r53):
      ind2 = ld ind;
      ind3 = force? ind2;
      __1 = ldf `[` in base;
      r54 = dyn __1(r53, ind3);
      goto L1(r54);
    L6():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    };
    r56 = dyn substring(p7, 1, p8);
    check L96() else D29();
  L102():
    p9 = prom<V +>{
      version6 = ld version;
      version7 = force? version6;
      checkMissing(version7);
      return version7;
    };
    r64 = dyn numeric_version[, strict](p9, FALSE);
    check L103() else D32();
  D29():
    deopt 112 [r56];
  D32():
    deopt 125 [r64];
  L96():
    l1 = ld version;
    c14 = `is.object`(l1);
    if c14 then L97() else L98(r56, l1);
  L103():
    l4 = ld db1;
    c15 = `is.object`(l4);
    if c15 then L105() else L106(r64, l4);
  L22(r60, dx9):
    st version = dx9;
    goto L23();
  L97():
    dr8 = tryDispatchBuiltin.0("[<-", l1, r56);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(r56, dr8);
  L98(r58, l3):
    ind4 = ld ind;
    check L100() else D30();
  L104(dx11):
    st db1 = dx11;
    as_Date = ldf `as.Date`;
    check L108() else D33();
  L105():
    dr10 = tryDispatchBuiltin.0("$<-", l4, r64);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L107() else L106(r64, dr10);
  L106(r66, l6):
    r69 = `$<-`(l6, <sym Version>, r64);
    goto L104(r69);
  D30():
    deopt 114 [r58, l3, r56, ind4];
  D33():
    deopt 130 [];
  L99():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L22(r56, dx8);
  L100():
    ind5 = force? ind4;
    ___4 = ldf `[<-` in base;
    r61 = dyn ___4(l3, r56, ind5);
    goto L22(r58, r61);
  L107():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L104(dx10);
  L108():
    p10 = prom<V +>{
      db13 = ld db;
      db14 = force? db13;
      checkMissing(db14);
      c16 = `is.object`(db14);
      if c16 then L1() else L2(db14);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", db14);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(db16):
      r70 = `$`(db16, <sym Date>);
      goto L0(r70);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r72 = dyn as_Date(p10);
    check L109() else D34();
  D34():
    deopt 132 [r72];
  L109():
    l7 = ld db1;
    c17 = `is.object`(l7);
    if c17 then L111() else L112(r72, l7);
  L110(dx15):
    st db1 = dx15;
    eval = ldf eval;
    check L114() else D35();
  L111():
    dr14 = tryDispatchBuiltin.0("$<-", l7, r72);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L113() else L112(r72, dr14);
  L112(r74, l9):
    r77 = `$<-`(l9, <sym Date>, r72);
    goto L110(r77);
  D35():
    deopt 137 [];
  L113():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L110(dx14);
  L114():
    p11 = prom<V +>{
      sym5 = ldf substitute;
      base5 = ldf substitute in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r79):
      return r79;
    L1():
      substitute = ldf substitute in base;
      r80 = dyn substitute(<sym query>);
      goto L0(r80);
    L2():
      r78 = dyn base5(<sym query>);
      goto L0(r78);
    };
    p12 = prom<V +>{
      db17 = ld db1;
      db18 = force? db17;
      checkMissing(db18);
      return db18;
    };
    p13 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r83 = dyn parent_frame();
      return r83;
    };
    r85 = dyn eval(p11, p12, p13);
    check L115() else D36();
  D36():
    deopt 141 [r85];
  L115():
    st r = r85;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L116() else L117();
  L24(r87):
    r90 = `!`(r87);
    c19 = `as.logical`(r90);
    if c19 then L119() else L25();
  L116():
    r88 = ld r;
    check L118() else D37();
  L117():
    r86 = dyn base6(<sym r>);
    goto L24(r86);
  D37():
    deopt 144 [r88];
  L25():
    goto L37();
  L37():
    db23 = ld db;
    check L157() else D55();
  L118():
    r89 = force? r88;
    checkMissing(r89);
    c18 = `==`(r89, NULL);
    goto L24(c18);
  L119():
    sym7 = ldf `is.logical`;
    base7 = ldf `is.logical` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L120() else L121();
  D55():
    deopt 209 [db23];
  L26(r92):
    r95 = `!`(r92);
    c21 = `as.logical`(r95);
    if c21 then L27(c21) else L123();
  L120():
    r93 = ld r;
    check L122() else D38();
  L121():
    r91 = dyn base7(<sym r>);
    goto L26(r91);
  L157():
    db24 = force? db23;
    checkMissing(db24);
    popenv;
    return db24;
  D38():
    deopt 149 [r93];
  L27(c22):
    c33 = `as.logical`(c22);
    if c33 then L133() else L30();
  L122():
    r94 = force? r93;
    checkMissing(r94);
    c20 = `is.logical`(r94);
    goto L26(c20);
  L123():
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L124() else L125();
  L28(c26, r97):
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L128() else L129();
  L30():
    goto L31();
  L31():
    r110 = ld r;
    check L137() else D45();
  L124():
    r98 = ld r;
    check L126() else D39();
  L125():
    r96 = dyn base8(<sym r>);
    goto L28(c21, r96);
  L133():
    stop = ldf stop;
    check L134() else D43();
  D39():
    deopt 155 [c21, r98];
  D43():
    deopt 167 [];
  D45():
    deopt 172 [r110];
  L29(c29, r104, r105):
    r107 = `!=`(r104, r105);
    c30 = `as.logical`(r107);
    c31 = `||`(c29, c30);
    goto L27(c31);
  L126():
    r99 = force? r98;
    checkMissing(r99);
    length = ldf length in base;
    r100 = dyn length(r99);
    check L127() else D40();
  L128():
    version8 = ld version;
    check L130() else D41();
  L129():
    r103 = dyn base9(<sym version>);
    goto L29(c26, r97, r103);
  L134():
    r108 = dyn stop("invalid query");
    check L135() else D44();
  L137():
    r111 = force? r110;
    checkMissing(r111);
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L138() else L139();
  D40():
    deopt 158 [c21, r100];
  D41():
    deopt 160 [c26, r97, version8];
  D44():
    deopt 169 [r108];
  L32(r115, r116):
    r120 = `!`(r116);
    r121 = `&&`(r115, r120);
    st r = r121;
    db19 = ld db;
    check L142() else D48();
  L127():
    goto L28(c21, r100);
  L130():
    version9 = force? version8;
    checkMissing(version9);
    length1 = ldf length in base;
    r106 = dyn length1(version9);
    check L131() else D42();
  L135():
    goto L31();
  L138():
    r117 = ld r;
    check L140() else D46();
  L139():
    r114 = dyn base10(<sym r>);
    goto L32(r111, r114);
  D42():
    deopt 163 [c26, r97, r106];
  D46():
    deopt 175 [r111, r117];
  D48():
    deopt 182 [db19];
  L131():
    goto L29(c26, r97, r106);
  L140():
    r118 = force? r117;
    checkMissing(r118);
    is_na = ldf `is.na` in base;
    r119 = dyn is_na(r118);
    check L141() else D47();
  L142():
    db20 = force? db19;
    checkMissing(db20);
    c34 = `is.object`(db20);
    if c34 then L143() else L144(db20);
  D47():
    deopt 178 [r111, r119];
  L33(dx17):
    st db = dx17;
    sym11 = ldf all;
    base11 = ldf all in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L147() else L148();
  L141():
    goto L32(r111, r119);
  L143():
    dr16 = tryDispatchBuiltin.1("[", db20);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L145() else L144(dr16);
  L144(db22):
    r122 = ld r;
    check L146() else D49();
  D49():
    deopt 184 [db22, r122];
  L34(r126):
    r130 = `!`(r126);
    c35 = `as.logical`(r130);
    if c35 then L151() else L35();
  L145():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L33(dx16);
  L146():
    r123 = force? r122;
    __2 = ldf `[` in base;
    r124 = dyn __2(db20, r123, <missing>);
    goto L33(r124);
  L147():
    r127 = ld r;
    check L149() else D50();
  L148():
    r125 = dyn base11(<sym r>);
    goto L34(r125);
  D50():
    deopt 192 [r127];
  L35():
    goto L36(NULL);
  L36(r134):
    goto L37();
  L149():
    r128 = force? r127;
    checkMissing(r128);
    all = ldf all in base;
    r129 = dyn all(r128);
    check L150() else D51();
  L151():
    r131 = ld r;
    check L152() else D52();
  D51():
    deopt 195 [r129];
  D52():
    deopt 197 [r131];
  L150():
    goto L34(r129);
  L152():
    r132 = force? r131;
    checkMissing(r132);
    l10 = ld db;
    attr__1 = ldf `attr<-`;
    check L153() else D53();
  D53():
    deopt 200 [r132, l10, r132];
  L153():
    r133 = dyn attr__1(l10, NULL, "subset", r132);
    check L154() else D54();
  D54():
    deopt 203 [r132, r133];
  L154():
    st db = r133;
    goto L36(r132);
  }
}