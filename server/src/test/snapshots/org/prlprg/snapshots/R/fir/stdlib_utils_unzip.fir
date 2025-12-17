fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2905141943;
    st unzip = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2905141943(zipfile, files, list, overwrite, junkpaths, exdir, unzip, setTimes) {
  (reg zipfile:*, reg files:*, reg list:*, reg overwrite:*, reg junkpaths:*, reg exdir:*, reg unzip:*, reg setTimes:*) -+> V { var zipfile:*, var files:*, reg files_isMissing:L, reg files_orDefault:*, var list:*, reg list_isMissing:L, reg list_orDefault:*, var overwrite:*, reg overwrite_isMissing:L, reg overwrite_orDefault:*, var junkpaths:*, reg junkpaths_isMissing:L, reg junkpaths_orDefault:*, var exdir:*, reg exdir_isMissing:L, reg exdir_orDefault:*, var unzip:*, reg unzip_isMissing:L, reg unzip_orDefault:*, var setTimes:*, reg setTimes_isMissing:L, reg setTimes_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg unzip1:*, reg unzip2:V, reg identical:cls, reg r2:V, reg c:L, reg list1:*, reg list2:V, reg r3:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c6:L, reg r5:V, reg missing:cls, reg r6:V, reg r7:V, reg c7:L, reg c8:V, reg c10:L, reg dir_create:cls, reg exdir1:*, reg exdir2:V, reg p:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg C_unzip:*, reg C_unzip1:V, reg zipfile1:*, reg zipfile2:V, reg files1:*, reg files2:V, reg exdir3:*, reg exdir4:V, reg list3:*, reg list4:V, reg overwrite1:*, reg overwrite2:V, reg junkpaths1:*, reg junkpaths2:V, reg setTimes1:*, reg setTimes2:V, reg _External:cls, reg r13:V, reg list5:*, reg list6:V, reg c11:L, reg as_POSIXct:cls, reg res:*, reg res1:V, reg c12:L, reg res3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg data_frame:cls, reg res4:*, reg res5:V, reg c13:L, reg res7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg p2:p(V +), reg res8:*, reg res9:V, reg c14:L, reg res11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r19:V, reg p3:p(V +), reg dates:*, reg dates1:V, reg p4:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg res12:*, reg res13:V, reg attr:cls, reg r27:V, reg invisible:cls, reg r28:V, reg _Platform:*, reg _Platform1:V, reg c15:L, reg _Platform3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r29:V, reg r30:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r31:V, reg r32:V, reg unzip3:*, reg unzip4:V, reg c16:L, reg r33:V, reg c17:L, reg c18:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg c22:L, reg r35:V, reg unzip5:*, reg unzip6:V, reg length:cls, reg r36:V, reg r37:V, reg c23:L, reg c24:V, reg c26:L, reg c27:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg c31:L, reg r39:V, reg unzip7:*, reg unzip8:V, reg nzchar:cls, reg r40:V, reg r41:V, reg c32:L, reg c33:V, reg c35:L, reg stop:cls, reg gettextf:cls, reg r42:V, reg p5:p(V +), reg r44:V, reg list7:*, reg list8:V, reg c36:L, reg WINDOWS:*, reg WINDOWS1:V, reg c37:L, reg system2:cls, reg unzip9:*, reg unzip10:V, reg p6:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg shQuote:cls, reg zipfile3:*, reg zipfile4:V, reg p7:p(V +), reg r50:V, reg c38:cls, reg r51:V, reg p8:p(V +), reg r53:V, reg r54:V, reg system3:cls, reg unzip11:*, reg unzip12:V, reg p9:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r56:V, reg r57:V, reg shQuote1:cls, reg zipfile5:*, reg zipfile6:V, reg p10:p(V +), reg r59:V, reg c39:cls, reg r60:V, reg p11:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg r63:V, reg c40:cls, reg r64:V, reg p12:p(V +), reg r66:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r67:V, reg r68:V, reg res14:*, reg res15:V, reg length1:cls, reg r69:V, reg res16:*, reg res17:V, reg c41:L, reg res19:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg res22:V, reg r71:V, reg l:*, reg l1:V, reg r72:V, reg l2:*, reg l3:V, reg c42:cls, reg r73:V, reg r74:V, reg __3:cls, reg r75:V, reg gsub:cls, reg res23:*, reg res24:V, reg p13:p(V +), reg r77:V, reg textConnection:cls, reg res25:*, reg res26:V, reg p14:p(V +), reg r79:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r80:V, reg on_exit:cls, reg r82:V, reg read_table:cls, reg con:*, reg con1:V, reg p15:p(V +), reg r84:V, reg paste:cls, reg z:*, reg z1:V, reg c43:L, reg z3:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r85:V, reg p16:p(V +), reg z4:*, reg z5:V, reg c44:L, reg z7:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r87:V, reg p17:p(V +), reg r89:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r90:V, reg r91:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r92:V, reg r93:V, reg z8:*, reg z9:V, reg c45:L, reg z11:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r94:V, reg nchar:cls, reg r95:V, reg r96:V, reg max:cls, reg r97:V, reg c46:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r98:V, reg r99:V, reg c47:cls, reg r100:V, reg r101:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r102:V, reg c48:cls, reg r103:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r104:V, reg r105:V, reg grepl:cls, reg z12:*, reg z13:V, reg c49:L, reg z15:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r106:V, reg p18:p(V +), reg r108:V, reg any:cls, reg r109:V, reg slash:*, reg slash1:V, reg c50:L, reg gsub1:cls, reg formats:*, reg formats1:V, reg p19:p(V +), reg r111:V, reg paste1:cls, reg formats2:*, reg formats3:V, reg p20:p(V +), reg r114:V, reg formats4:*, reg formats5:V, reg s:V, reg l4:I, reg i:I, reg i1:I, reg i2:I, reg c51:L, reg x:V, reg as_POSIXct1:cls, reg dt:*, reg dt1:V, reg p21:p(V +), reg f:*, reg f1:V, reg p22:p(V +), reg r117:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r118:V, reg i7:I, reg r119:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r120:V, reg i10:I, reg r121:V, reg zz:*, reg zz1:V, reg is_na:cls, reg r122:V, reg r123:V, reg all:cls, reg r124:V, reg c52:L, reg zz2:*, reg zz3:V, reg l5:*, reg c53:L, reg zz5:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg ___:cls, reg r126:V, reg z16:*, reg z17:V, reg c54:L, reg z19:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r127:V, reg z22:V, reg r128:V, reg c55:cls, reg r129:V, reg __4:cls, reg r130:V, reg character:cls, reg r131:V, reg junkpaths3:*, reg junkpaths4:V, reg c56:L, reg sym22:cls, reg base22:cls, reg guard22:L, reg r132:V, reg r133:V, reg args:*, reg args1:V, reg c57:cls, reg r134:V, reg overwrite3:*, reg overwrite4:V, reg c58:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r136:V, reg r137:V, reg args2:*, reg args3:V, reg shQuote2:cls, reg zipfile7:*, reg zipfile8:V, reg p23:p(V +), reg r139:V, reg c59:cls, reg r140:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r142:V, reg r143:V, reg args4:*, reg args5:V, reg shQuote3:cls, reg zipfile9:*, reg zipfile10:V, reg p24:p(V +), reg r145:V, reg c60:cls, reg r146:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r147:V, reg r148:V, reg files3:*, reg files4:V, reg length2:cls, reg r149:V, reg c61:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r150:V, reg r151:V, reg args6:*, reg args7:V, reg shQuote4:cls, reg files5:*, reg files6:V, reg p25:p(V +), reg r153:V, reg c62:cls, reg r154:V, reg exdir5:*, reg exdir6:V, reg r156:V, reg c63:L, reg sym27:cls, reg base27:cls, reg guard27:L, reg r157:V, reg r158:V, reg args8:*, reg args9:V, reg shQuote5:cls, reg exdir7:*, reg exdir8:V, reg p26:p(V +), reg r160:V, reg c64:cls, reg r161:V, reg WINDOWS2:*, reg WINDOWS3:V, reg c65:L, reg system4:cls, reg unzip13:*, reg unzip14:V, reg p27:p(V +), reg args10:*, reg args11:V, reg p28:p(V +), reg r165:V, reg system5:cls, reg unzip15:*, reg unzip16:V, reg p29:p(V +), reg args12:*, reg args13:V, reg p30:p(V +), reg r169:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r170:V, reg r171:V, reg invisible1:cls, reg r172:V |
    mkenv;
    st zipfile = zipfile;
    files_isMissing = missing.0(files);
    if files_isMissing then L0(NULL) else L0(files);
  L0(files_orDefault):
    st files = files_orDefault;
    list_isMissing = missing.0(list);
    if list_isMissing then L1(FALSE) else L1(list);
  L1(list_orDefault):
    st list = list_orDefault;
    overwrite_isMissing = missing.0(overwrite);
    if overwrite_isMissing then L2(TRUE) else L2(overwrite);
  L2(overwrite_orDefault):
    st overwrite = overwrite_orDefault;
    junkpaths_isMissing = missing.0(junkpaths);
    if junkpaths_isMissing then L3(FALSE) else L3(junkpaths);
  L3(junkpaths_orDefault):
    st junkpaths = junkpaths_orDefault;
    exdir_isMissing = missing.0(exdir);
    if exdir_isMissing then L4(".") else L4(exdir);
  L4(exdir_orDefault):
    st exdir = exdir_orDefault;
    unzip_isMissing = missing.0(unzip);
    if unzip_isMissing then L5("internal") else L5(unzip);
  L5(unzip_orDefault):
    st unzip = unzip_orDefault;
    setTimes_isMissing = missing.0(setTimes);
    if setTimes_isMissing then L6(FALSE) else L6(setTimes);
  L6(setTimes_orDefault):
    st setTimes = setTimes_orDefault;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L66() else L67();
  L7(r1):
    c = `as.logical`(r1);
    if c then L70() else L8();
  L66():
    unzip1 = ld unzip;
    check L68() else D0();
  L67():
    r = dyn base(<sym unzip>, "internal");
    goto L7(r);
  D0():
    deopt 2 [unzip1];
  L8():
    _Platform = ld `.Platform`;
    check L106() else D22();
  L68():
    unzip2 = force? unzip1;
    checkMissing(unzip2);
    identical = ldf identical in base;
    r2 = dyn identical(unzip2, "internal", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L69() else D1();
  L70():
    list1 = ld list;
    check L71() else D2();
  D1():
    deopt 13 [r2];
  D2():
    deopt 14 [list1];
  D22():
    deopt 85 [_Platform];
  L69():
    goto L7(r2);
  L71():
    list2 = force? list1;
    checkMissing(list2);
    r3 = `!`(list2);
    c1 = `as.logical`(r3);
    if c1 then L72() else L9(c1);
  L106():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c15 = `is.object`(_Platform1);
    if c15 then L108() else L109(_Platform1);
  L9(c3):
    c10 = `as.logical`(c3);
    if c10 then L76() else L11();
  L72():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L73() else L74();
  L107(dx7):
    r30 = `==`(dx7, "windows");
    st WINDOWS = r30;
    sym5 = ldf `is.character`;
    base5 = ldf `is.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L111() else L112();
  L108():
    dr6 = tryDispatchBuiltin.1("$", _Platform1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L110() else L109(dr6);
  L109(_Platform3):
    r29 = `$`(_Platform3, <sym OS.type>);
    goto L107(r29);
  L10(c6, r5):
    r7 = `!`(r5);
    c7 = `as.logical`(r7);
    c8 = `&&`(c6, c7);
    goto L9(c8);
  L11():
    goto L12();
  L12():
    sym2 = ldf `.External`;
    base2 = ldf `.External` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L80() else L81();
  L17(r32):
    r33 = `!`(r32);
    c17 = `as.logical`(r33);
    if c17 then L18(c17) else L114();
  L73():
    missing = ldf missing in base;
    r6 = dyn missing(<sym exdir>);
    goto L10(c1, r6);
  L74():
    r4 = dyn base1(<sym exdir>);
    goto L10(c1, r4);
  L76():
    dir_create = ldf `dir.create`;
    check L77() else D3();
  L110():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L107(dx6);
  L111():
    unzip3 = ld unzip;
    check L113() else D23();
  L112():
    r31 = dyn base5(<sym unzip>);
    goto L17(r31);
  D3():
    deopt 23 [];
  D23():
    deopt 92 [unzip3];
  L13(r12):
    st res = r12;
    list5 = ld list;
    check L91() else D14();
  L18(c18):
    c26 = `as.logical`(c18);
    if c26 then L20(c26) else L120();
  L77():
    p = prom<V +>{
      exdir1 = ld exdir;
      exdir2 = force? exdir1;
      checkMissing(exdir2);
      return exdir2;
    };
    r9 = dyn dir_create[, showWarnings, recursive](p, FALSE, TRUE);
    check L78() else D4();
  L80():
    C_unzip = ld C_unzip;
    check L82() else D5();
  L81():
    r11 = dyn base2(<sym C_unzip>, <sym zipfile>, <sym files>, <sym exdir>, <sym list>, <sym overwrite>, <sym junkpaths>, <sym setTimes>);
    goto L13(r11);
  L113():
    unzip4 = force? unzip3;
    checkMissing(unzip4);
    c16 = `is.character`(unzip4);
    goto L17(c16);
  L114():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L115() else L116();
  D4():
    deopt 29 [r9];
  D5():
    deopt 34 [C_unzip];
  D14():
    deopt 53 [list5];
  L19(c22, r35):
    r37 = `!=`(r35, 1);
    c23 = `as.logical`(r37);
    c24 = `||`(c22, c23);
    goto L18(c24);
  L20(c27):
    c35 = `as.logical`(c27);
    if c35 then L126() else L22();
  L78():
    goto L12();
  L82():
    C_unzip1 = force? C_unzip;
    checkMissing(C_unzip1);
    zipfile1 = ld zipfile;
    check L83() else D6();
  L91():
    list6 = force? list5;
    checkMissing(list6);
    c11 = `as.logical`(list6);
    if c11 then L92() else L14();
  L115():
    unzip5 = ld unzip;
    check L117() else D24();
  L116():
    r34 = dyn base6(<sym unzip>);
    goto L19(c17, r34);
  L120():
    sym7 = ldf nzchar;
    base7 = ldf nzchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L121() else L122();
  D6():
    deopt 36 [zipfile1];
  D24():
    deopt 98 [c17, unzip5];
  L14():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L98() else L99();
  L21(c31, r39):
    r41 = `!`(r39);
    c32 = `as.logical`(r41);
    c33 = `||`(c31, c32);
    goto L20(c33);
  L22():
    goto L23();
  L23():
    list7 = ld list;
    check L130() else D30();
  L83():
    zipfile2 = force? zipfile1;
    checkMissing(zipfile2);
    files1 = ld files;
    check L84() else D7();
  L92():
    as_POSIXct = ldf `as.POSIXct`;
    check L93() else D15();
  L117():
    unzip6 = force? unzip5;
    checkMissing(unzip6);
    length = ldf length in base;
    r36 = dyn length(unzip6);
    check L118() else D25();
  L121():
    unzip7 = ld unzip;
    check L123() else D26();
  L122():
    r38 = dyn base7(<sym unzip>);
    goto L21(c26, r38);
  L126():
    stop = ldf stop;
    check L127() else D28();
  D7():
    deopt 38 [files1];
  D15():
    deopt 56 [];
  D25():
    deopt 101 [c17, r36];
  D26():
    deopt 107 [c26, unzip7];
  D28():
    deopt 114 [];
  D30():
    deopt 121 [list7];
  L15(r24):
    popenv;
    return r24;
  L84():
    files2 = force? files1;
    checkMissing(files2);
    exdir3 = ld exdir;
    check L85() else D8();
  L93():
    p1 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c12 = `is.object`(res1);
      if c12 then L1() else L2(res1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", res1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(res3):
      __ = ldf `[[` in base;
      r14 = dyn __(res3, 3.0);
      goto L0(r14);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r16 = dyn as_POSIXct[, , tz](p1, "%Y-%m-%d %H:%M", "UTC");
    check L94() else D16();
  L98():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L100() else L101();
  L99():
    r23 = dyn base3(<lang attr(res, "extracted")>);
    goto L15(r23);
  L118():
    goto L19(c17, r36);
  L123():
    unzip8 = force? unzip7;
    checkMissing(unzip8);
    nzchar = ldf nzchar in base;
    r40 = dyn nzchar(unzip8);
    check L124() else D27();
  L127():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      r42 = dyn gettextf("'%s' must be a non-empty character string", "unzip");
      return r42;
    };
    r44 = dyn stop[, domain](p5, NA_LGL);
    check L128() else D29();
  L130():
    list8 = force? list7;
    checkMissing(list8);
    c36 = `as.logical`(list8);
    if c36 then L131() else L24();
  D8():
    deopt 40 [exdir3];
  D16():
    deopt 61 [r16];
  D27():
    deopt 110 [c26, r40];
  D29():
    deopt 118 [r44];
  L16(r26):
    invisible = ldf invisible in base;
    r28 = dyn invisible(r26);
    check L104() else D21();
  L24():
    character = ldf character;
    check L219() else D72();
  L85():
    exdir4 = force? exdir3;
    checkMissing(exdir4);
    list3 = ld list;
    check L86() else D9();
  L94():
    st dates = r16;
    data_frame = ldf `data.frame`;
    check L95() else D17();
  L100():
    res12 = ld res;
    check L102() else D19();
  L101():
    r25 = dyn base4(<sym res>, "extracted");
    goto L16(r25);
  L124():
    goto L21(c26, r40);
  L128():
    goto L23();
  L131():
    WINDOWS = ld WINDOWS;
    check L132() else D31();
  D9():
    deopt 42 [list3];
  D17():
    deopt 64 [];
  D19():
    deopt 78 [res12];
  D21():
    deopt 84 [r28];
  D31():
    deopt 123 [WINDOWS];
  D72():
    deopt 303 [];
  L86():
    list4 = force? list3;
    checkMissing(list4);
    overwrite1 = ld overwrite;
    check L87() else D10();
  L95():
    p2 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      c13 = `is.object`(res5);
      if c13 then L1() else L2(res5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", res5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(res7):
      __1 = ldf `[[` in base;
      r17 = dyn __1(res7, 1.0);
      goto L0(r17);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      res8 = ld res;
      res9 = force? res8;
      checkMissing(res9);
      c14 = `is.object`(res9);
      if c14 then L1() else L2(res9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", res9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(res11):
      __2 = ldf `[[` in base;
      r19 = dyn __2(res11, 2.0);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p4 = prom<V +>{
      dates = ld dates;
      dates1 = force? dates;
      checkMissing(dates1);
      return dates1;
    };
    r22 = dyn data_frame[Name, Length, Date, stringsAsFactors](p2, p3, p4, FALSE);
    check L96() else D18();
  L102():
    res13 = force? res12;
    checkMissing(res13);
    attr = ldf attr in base;
    r27 = dyn attr(res13, "extracted");
    check L103() else D20();
  L104():
    goto L15(r28);
  L132():
    WINDOWS1 = force? WINDOWS;
    checkMissing(WINDOWS1);
    c37 = `as.logical`(WINDOWS1);
    if c37 then L133() else L25();
  L219():
    r131 = dyn character();
    check L220() else D73();
  D10():
    deopt 44 [overwrite1];
  D18():
    deopt 73 [r22];
  D20():
    deopt 82 [r27];
  D73():
    deopt 304 [r131];
  L25():
    system3 = ldf system2;
    check L137() else D34();
  L26(r54):
    st res = r54;
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L139() else L140();
  L87():
    overwrite2 = force? overwrite1;
    checkMissing(overwrite2);
    junkpaths1 = ld junkpaths;
    check L88() else D11();
  L96():
    popenv;
    return r22;
  L103():
    goto L16(r27);
  L133():
    system2 = ldf system2;
    check L134() else D32();
  L220():
    st args = r131;
    junkpaths3 = ld junkpaths;
    check L221() else D74();
  D11():
    deopt 46 [junkpaths1];
  D32():
    deopt 126 [];
  D34():
    deopt 133 [];
  D74():
    deopt 306 [junkpaths3];
  L27(r68):
    st l = r68;
    res16 = ld res;
    check L143() else D38();
  L88():
    junkpaths2 = force? junkpaths1;
    checkMissing(junkpaths2);
    setTimes1 = ld setTimes;
    check L89() else D12();
  L134():
    p6 = prom<V +>{
      unzip9 = ld unzip;
      unzip10 = force? unzip9;
      checkMissing(unzip10);
      return unzip10;
    };
    p8 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      shQuote = ldf shQuote;
      p7 = prom<V +>{
        zipfile3 = ld zipfile;
        zipfile4 = force? zipfile3;
        checkMissing(zipfile4);
        return zipfile4;
      };
      r50 = dyn shQuote(p7);
      c38 = ldf c in base;
      r51 = dyn c38("-ql", r50);
      goto L0(r51);
    L2():
      r47 = dyn base8("-ql", <lang shQuote(zipfile)>);
      goto L0(r47);
    };
    r53 = dyn system2[, , stdout](p6, p8, TRUE);
    check L135() else D33();
  L137():
    p9 = prom<V +>{
      unzip11 = ld unzip;
      unzip12 = force? unzip11;
      checkMissing(unzip12);
      return unzip12;
    };
    p11 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r57):
      return r57;
    L1():
      shQuote1 = ldf shQuote;
      p10 = prom<V +>{
        zipfile5 = ld zipfile;
        zipfile6 = force? zipfile5;
        checkMissing(zipfile6);
        return zipfile6;
      };
      r59 = dyn shQuote1(p10);
      c39 = ldf c in base;
      r60 = dyn c39("-ql", r59);
      goto L0(r60);
    L2():
      r56 = dyn base9("-ql", <lang shQuote(zipfile)>);
      goto L0(r56);
    };
    p12 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      c40 = ldf c in base;
      r64 = dyn c40("TZ=UTC");
      goto L0(r64);
    L2():
      r62 = dyn base10("TZ=UTC");
      goto L0(r62);
    };
    r66 = dyn system3[, , stdout, env](p9, p11, TRUE, p12);
    check L138() else D35();
  L139():
    res14 = ld res;
    check L141() else D36();
  L140():
    r67 = dyn base11(<sym res>);
    goto L27(r67);
  L221():
    junkpaths4 = force? junkpaths3;
    checkMissing(junkpaths4);
    c56 = `as.logical`(junkpaths4);
    if c56 then L222() else L49();
  D12():
    deopt 48 [setTimes1];
  D33():
    deopt 131 [r53];
  D35():
    deopt 140 [r66];
  D36():
    deopt 144 [res14];
  D38():
    deopt 149 [res16];
  L49():
    goto L51();
  L51():
    overwrite3 = ld overwrite;
    check L228() else D77();
  L89():
    setTimes2 = force? setTimes1;
    checkMissing(setTimes2);
    _External = ldf `.External` in base;
    r13 = dyn _External(C_unzip1, zipfile2, files2, exdir4, list4, overwrite2, junkpaths2, setTimes2);
    check L90() else D13();
  L135():
    goto L26(r53);
  L138():
    goto L26(r66);
  L141():
    res15 = force? res14;
    checkMissing(res15);
    length1 = ldf length in base;
    r69 = dyn length1(res15);
    check L142() else D37();
  L143():
    res17 = force? res16;
    checkMissing(res17);
    c41 = `is.object`(res17);
    if c41 then L144() else L145(res17);
  L222():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L223() else L224();
  D13():
    deopt 51 [r13];
  D37():
    deopt 147 [r69];
  D77():
    deopt 318 [overwrite3];
  L28(dx9):
    st res2 = dx9;
    gsub = ldf gsub;
    check L152() else D42();
  L50(r133):
    st args = r133;
    goto L51();
  L90():
    goto L13(r13);
  L142():
    goto L27(r69);
  L144():
    dr8 = tryDispatchBuiltin.1("[", res17);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L146() else L145(dr8);
  L145(res19):
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L147() else L148();
  L223():
    args = ld args;
    check L225() else D75();
  L224():
    r132 = dyn base22(<sym args>, "-j");
    goto L50(r132);
  L228():
    overwrite4 = force? overwrite3;
    checkMissing(overwrite4);
    c58 = `as.logical`(overwrite4);
    if c58 then L229() else L52();
  D42():
    deopt 166 [];
  D75():
    deopt 310 [args];
  L29(res22, r71):
    r74 = `-`(<missing>, r71);
    __3 = ldf `[` in base;
    r75 = dyn __3(res22, r74);
    goto L28(r75);
  L52():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L237() else L238();
  L54():
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L243() else L244();
  L146():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L28(dx8);
  L147():
    l = ld l;
    check L149() else D39();
  L148():
    r70 = dyn base12(2.0, <lang `-`(l, 1.0)>, <sym l>);
    goto L29(res19, r70);
  L152():
    p13 = prom<V +>{
      res23 = ld res2;
      res24 = force? res23;
      checkMissing(res24);
      return res24;
    };
    r77 = dyn gsub(" *([^ ]+) +([^ ]+) +([^ ]+) +(.*)", "\\1 \\2 \\3 \"\\4\"", p13);
    check L153() else D43();
  L225():
    args1 = force? args;
    checkMissing(args1);
    c57 = ldf c in base;
    r134 = dyn c57(args1, "-j");
    check L226() else D76();
  L229():
    sym23 = ldf c;
    base23 = ldf c in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L230() else L231();
  D39():
    deopt 154 [res19, l];
  D43():
    deopt 170 [r77];
  D76():
    deopt 314 [r134];
  L53(r137):
    st args = r137;
    goto L54();
  L55(r143):
    st args = r143;
    goto L54();
  L56(r148):
    c61 = `as.logical`(r148);
    if c61 then L247() else L57();
  L149():
    l1 = force? l;
    checkMissing(l1);
    r72 = `-`(l1, 1.0);
    l2 = ld l;
    check L150() else D40();
  L153():
    st res3 = r77;
    textConnection = ldf textConnection;
    check L154() else D44();
  L226():
    goto L50(r134);
  L230():
    args2 = ld args;
    check L232() else D78();
  L231():
    r136 = dyn base23(<sym args>, "-oq", <lang shQuote(zipfile)>);
    goto L53(r136);
  L237():
    args4 = ld args;
    check L239() else D82();
  L238():
    r142 = dyn base24(<sym args>, "-nq", <lang shQuote(zipfile)>);
    goto L55(r142);
  L243():
    files3 = ld files;
    check L245() else D86();
  L244():
    r147 = dyn base25(<sym files>);
    goto L56(r147);
  D40():
    deopt 158 [res19, l2];
  D44():
    deopt 173 [];
  D78():
    deopt 322 [args2];
  D82():
    deopt 334 [args4];
  D86():
    deopt 346 [files3];
  L57():
    goto L59();
  L59():
    exdir5 = ld exdir;
    check L255() else D92();
  L150():
    l3 = force? l2;
    checkMissing(l3);
    c42 = ldf c in base;
    r73 = dyn c42(2.0, r72, l3);
    check L151() else D41();
  L154():
    p14 = prom<V +>{
      res25 = ld res3;
      res26 = force? res25;
      checkMissing(res26);
      return res26;
    };
    r79 = dyn textConnection(p14);
    check L155() else D45();
  L232():
    args3 = force? args2;
    checkMissing(args3);
    shQuote2 = ldf shQuote;
    check L233() else D79();
  L239():
    args5 = force? args4;
    checkMissing(args5);
    shQuote3 = ldf shQuote;
    check L240() else D83();
  L245():
    files4 = force? files3;
    checkMissing(files4);
    length2 = ldf length in base;
    r149 = dyn length2(files4);
    check L246() else D87();
  L247():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L248() else L249();
  D41():
    deopt 161 [res19, r73];
  D45():
    deopt 175 [r79];
  D79():
    deopt 326 [];
  D83():
    deopt 338 [];
  D87():
    deopt 349 [r149];
  D92():
    deopt 363 [exdir5];
  L58(r151):
    st args = r151;
    goto L59();
  L151():
    goto L29(res19, r73);
  L155():
    st con = r79;
    sym13 = ldf `on.exit`;
    base13 = ldf `on.exit` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L156() else L157();
  L233():
    p23 = prom<V +>{
      zipfile7 = ld zipfile;
      zipfile8 = force? zipfile7;
      checkMissing(zipfile8);
      return zipfile8;
    };
    r139 = dyn shQuote2(p23);
    check L234() else D80();
  L240():
    p24 = prom<V +>{
      zipfile9 = ld zipfile;
      zipfile10 = force? zipfile9;
      checkMissing(zipfile10);
      return zipfile10;
    };
    r145 = dyn shQuote3(p24);
    check L241() else D84();
  L246():
    goto L56(r149);
  L248():
    args6 = ld args;
    check L250() else D88();
  L249():
    r150 = dyn base26(<sym args>, <lang shQuote(files)>);
    goto L58(r150);
  L255():
    exdir6 = force? exdir5;
    checkMissing(exdir6);
    r156 = `!=`(exdir6, ".");
    c63 = `as.logical`(r156);
    if c63 then L256() else L60();
  D80():
    deopt 328 [r139];
  D84():
    deopt 340 [r145];
  D88():
    deopt 352 [args6];
  L30():
    read_table = ldf `read.table`;
    check L158() else D46();
  L60():
    goto L62();
  L62():
    WINDOWS2 = ld WINDOWS;
    check L264() else D97();
  L156():
    on_exit = ldf `on.exit` in base;
    r82 = dyn on_exit(<lang close(con)>);
    goto L30();
  L157():
    r80 = dyn base13(<lang close(con)>);
    goto L30();
  L234():
    c59 = ldf c in base;
    r140 = dyn c59(args3, "-oq", r139);
    check L235() else D81();
  L241():
    c60 = ldf c in base;
    r146 = dyn c60(args5, "-nq", r145);
    check L242() else D85();
  L250():
    args7 = force? args6;
    checkMissing(args7);
    shQuote4 = ldf shQuote;
    check L251() else D89();
  L256():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L257() else L258();
  D46():
    deopt 181 [];
  D81():
    deopt 330 [r140];
  D85():
    deopt 342 [r146];
  D89():
    deopt 355 [];
  D97():
    deopt 381 [WINDOWS2];
  L61(r158):
    st args = r158;
    goto L62();
  L158():
    p15 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r84 = dyn read_table[, header, `as.is`](p15, TRUE, TRUE);
    check L159() else D47();
  L235():
    goto L53(r140);
  L242():
    goto L55(r146);
  L251():
    p25 = prom<V +>{
      files5 = ld files;
      files6 = force? files5;
      checkMissing(files6);
      return files6;
    };
    r153 = dyn shQuote4(p25);
    check L252() else D90();
  L257():
    args8 = ld args;
    check L259() else D93();
  L258():
    r157 = dyn base27(<sym args>, "-d", <lang shQuote(exdir)>);
    goto L61(r157);
  L264():
    WINDOWS3 = force? WINDOWS2;
    checkMissing(WINDOWS3);
    c65 = `as.logical`(WINDOWS3);
    if c65 then L265() else L63();
  D47():
    deopt 187 [r84];
  D90():
    deopt 357 [r153];
  D93():
    deopt 369 [args8];
  L63():
    system5 = ldf system2;
    check L269() else D100();
  L64():
    sym28 = ldf invisible;
    base28 = ldf invisible in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L271() else L272();
  L159():
    st z = r84;
    paste = ldf paste;
    check L160() else D48();
  L252():
    c62 = ldf c in base;
    r154 = dyn c62(args7, r153);
    check L253() else D91();
  L259():
    args9 = force? args8;
    checkMissing(args9);
    shQuote5 = ldf shQuote;
    check L260() else D94();
  L265():
    system4 = ldf system2;
    check L266() else D98();
  D48():
    deopt 190 [];
  D91():
    deopt 359 [r154];
  D94():
    deopt 373 [];
  D98():
    deopt 384 [];
  D100():
    deopt 395 [];
  L65(r171):
    popenv;
    return r171;
  L160():
    p16 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      c43 = `is.object`(z1);
      if c43 then L1() else L2(z1);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", z1);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(z3):
      r85 = `$`(z3, <sym Date>);
      goto L0(r85);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p17 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      c44 = `is.object`(z5);
      if c44 then L1() else L2(z5);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", z5);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(z7):
      r87 = `$`(z7, <sym Time>);
      goto L0(r87);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r89 = dyn paste(p16, p17);
    check L161() else D49();
  L253():
    goto L58(r154);
  L260():
    p26 = prom<V +>{
      exdir7 = ld exdir;
      exdir8 = force? exdir7;
      checkMissing(exdir8);
      return exdir8;
    };
    r160 = dyn shQuote5(p26);
    check L261() else D95();
  L266():
    p27 = prom<V +>{
      unzip13 = ld unzip;
      unzip14 = force? unzip13;
      checkMissing(unzip14);
      return unzip14;
    };
    p28 = prom<V +>{
      args10 = ld args;
      args11 = force? args10;
      checkMissing(args11);
      return args11;
    };
    r165 = dyn system4[, , stdout, stderr, invisible](p27, p28, NULL, NULL, TRUE);
    check L267() else D99();
  L269():
    p29 = prom<V +>{
      unzip15 = ld unzip;
      unzip16 = force? unzip15;
      checkMissing(unzip16);
      return unzip16;
    };
    p30 = prom<V +>{
      args12 = ld args;
      args13 = force? args12;
      checkMissing(args13);
      return args13;
    };
    r169 = dyn system5[, , stdout, stderr](p29, p30, NULL, NULL);
    check L270() else D101();
  L271():
    invisible1 = ldf invisible in base;
    r172 = dyn invisible1(NULL);
    check L273() else D102();
  L272():
    r170 = dyn base28(NULL);
    goto L65(r170);
  D49():
    deopt 193 [r89];
  D95():
    deopt 375 [r160];
  D99():
    deopt 393 [r165];
  D101():
    deopt 402 [r169];
  D102():
    deopt 407 [r172];
  L161():
    st dt = r89;
    sym14 = ldf max;
    base14 = ldf max in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L162() else L163();
  L261():
    c64 = ldf c in base;
    r161 = dyn c64(args9, "-d", r160);
    check L262() else D96();
  L267():
    goto L64();
  L270():
    goto L64();
  L273():
    goto L65(r172);
  D96():
    deopt 377 [r161];
  L31(r91):
    c46 = `as.logical`(r91);
    if c46 then L173() else L33();
  L162():
    sym15 = ldf nchar;
    base15 = ldf nchar in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L164() else L165();
  L163():
    r90 = dyn base14(<lang `>`(nchar(`$`(z, Date)), 8.0)>);
    goto L31(r90);
  L262():
    goto L61(r161);
  L32(r93):
    r96 = `>`(r93, 8.0);
    max = ldf max in base;
    r97 = dyn max(r96);
    check L172() else D52();
  L33():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L178() else L179();
  L35(r101):
    st formats = r101;
    sym18 = ldf any;
    base18 = ldf any in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L181() else L182();
  L164():
    z8 = ld z;
    check L166() else D50();
  L165():
    r92 = dyn base15(<lang `$`(z, Date)>);
    goto L32(r92);
  L173():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L174() else L175();
  D50():
    deopt 199 [z8];
  D52():
    deopt 210 [r97];
  L34(r99):
    goto L35(r99);
  L36(r105):
    st slash = r105;
    slash = ld slash;
    check L186() else D58();
  L166():
    z9 = force? z8;
    checkMissing(z9);
    c45 = `is.object`(z9);
    if c45 then L168() else L169(z9);
  L172():
    goto L31(r97);
  L174():
    c47 = ldf c in base;
    r100 = dyn c47("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y");
    check L176() else D53();
  L175():
    r98 = dyn base16("%Y-%m-%d", "%d-%m-%Y", "%m-%d-%Y");
    goto L34(r98);
  L178():
    c48 = ldf c in base;
    r103 = dyn c48("%m-%d-%y", "%d-%m-%y", "%y-%m-%d");
    check L180() else D54();
  L179():
    r102 = dyn base17("%m-%d-%y", "%d-%m-%y", "%y-%m-%d");
    goto L35(r102);
  L181():
    grepl = ldf grepl;
    check L183() else D55();
  L182():
    r104 = dyn base18(<lang grepl("/", `$`(z, Date))>);
    goto L36(r104);
  D53():
    deopt 217 [r100];
  D54():
    deopt 224 [r103];
  D55():
    deopt 229 [];
  D58():
    deopt 236 [slash];
  L167(dx15):
    nchar = ldf nchar in base;
    r95 = dyn nchar(dx15, "chars", FALSE, NA_LGL);
    check L171() else D51();
  L168():
    dr14 = tryDispatchBuiltin.1("$", z9);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L170() else L169(dr14);
  L169(z11):
    r94 = `$`(z11, <sym Date>);
    goto L167(r94);
  L176():
    goto L34(r100);
  L180():
    goto L35(r103);
  L183():
    p18 = prom<V +>{
      z12 = ld z;
      z13 = force? z12;
      checkMissing(z13);
      c49 = `is.object`(z13);
      if c49 then L1() else L2(z13);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", z13);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(z15):
      r106 = `$`(z15, <sym Date>);
      goto L0(r106);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r108 = dyn grepl("/", p18);
    check L184() else D56();
  L186():
    slash1 = force? slash;
    checkMissing(slash1);
    c50 = `as.logical`(slash1);
    if c50 then L187() else L37();
  D51():
    deopt 206 [r95];
  D56():
    deopt 232 [r108];
  L37():
    goto L38();
  L38():
    paste1 = ldf paste;
    check L191() else D61();
  L170():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L167(dx14);
  L171():
    goto L32(r95);
  L184():
    any = ldf any in base;
    r109 = dyn any(r108);
    check L185() else D57();
  L187():
    gsub1 = ldf gsub;
    check L188() else D59();
  D57():
    deopt 234 [r109];
  D59():
    deopt 239 [];
  D61():
    deopt 250 [];
  L185():
    goto L36(r109);
  L188():
    p19 = prom<V +>{
      formats = ld formats;
      formats1 = force? formats;
      checkMissing(formats1);
      return formats1;
    };
    r111 = dyn gsub1[, , , fixed]("-", "/", p19, TRUE);
    check L189() else D60();
  L191():
    p20 = prom<V +>{
      formats2 = ld formats;
      formats3 = force? formats2;
      checkMissing(formats3);
      return formats3;
    };
    r114 = dyn paste1(p20, "%H:%M");
    check L192() else D62();
  D60():
    deopt 245 [r111];
  D62():
    deopt 253 [r114];
  L189():
    st formats = r111;
    goto L38();
  L192():
    st formats = r114;
    formats4 = ld formats;
    check L193() else D63();
  D63():
    deopt 255 [formats4];
  L193():
    formats5 = force? formats4;
    checkMissing(formats5);
    s = toForSeq(formats5);
    l4 = length(s);
    i = 0;
    goto L39(i);
  L39(i1):
    i2 = `+`.1(i1, 1);
    c51 = `<`.1(l4, i2);
    if c51 then L194() else L45();
  L43():
    zz2 = ld zz;
    check L207() else D69();
  L45():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    as_POSIXct1 = ldf `as.POSIXct`;
    check L195() else D64();
  L194():
    goto L43();
  D64():
    deopt 258 [i2];
  D69():
    deopt 284 [zz2];
  L195():
    p21 = prom<V +>{
      dt = ld dt;
      dt1 = force? dt;
      checkMissing(dt1);
      return dt1;
    };
    p22 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r117 = dyn as_POSIXct1[, tz, format](p21, "UTC", p22);
    check L196() else D65();
  L207():
    zz3 = force? zz2;
    checkMissing(zz3);
    l5 = ld z;
    c53 = `is.object`(l5);
    if c53 then L208() else L209(zz3);
  D65():
    deopt 264 [i2, r117];
  L46(dx19):
    st z = dx19;
    z16 = ld z;
    check L211() else D70();
  L196():
    st zz = r117;
    sym19 = ldf all;
    base19 = ldf all in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L197() else L198();
  L208():
    dr18 = tryDispatchBuiltin.0("[<-", l5, zz3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L210() else L209(zz3);
  L209(zz5):
    ___ = ldf `[<-` in base;
    r126 = dyn ___(l5, <missing>, "Date", zz3);
    goto L46(r126);
  D70():
    deopt 292 [z16];
  L40(i7, r119):
    c52 = `as.logical`(r119);
    if c52 then L204() else L42();
  L197():
    sym20 = ldf `is.na`;
    base20 = ldf `is.na` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L199() else L200();
  L198():
    r118 = dyn base19(<lang `!`(is.na(zz))>);
    goto L40(i2, r118);
  L210():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L46(dx18);
  L211():
    z17 = force? z16;
    checkMissing(z17);
    c54 = `is.object`(z17);
    if c54 then L212() else L213(z17);
  L41(i10, r121):
    r123 = `!`(r121);
    all = ldf all in base;
    r124 = dyn all(r123);
    check L203() else D68();
  L42():
    goto L39(i7);
  L47(dx21):
    popenv;
    return dx21;
  L199():
    zz = ld zz;
    check L201() else D66();
  L200():
    r120 = dyn base20(<sym zz>);
    goto L41(i2, r120);
  L204():
    goto L43();
  L212():
    dr20 = tryDispatchBuiltin.1("[", z17);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L214() else L213(dr20);
  L213(z19):
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L215() else L216();
  D66():
    deopt 270 [i2, zz];
  D68():
    deopt 276 [i10, r124];
  L48(z22, r128):
    __4 = ldf `[` in base;
    r130 = dyn __4(z22, r128);
    goto L47(r130);
  L201():
    zz1 = force? zz;
    checkMissing(zz1);
    is_na = ldf `is.na` in base;
    r122 = dyn is_na(zz1);
    check L202() else D67();
  L203():
    goto L40(i10, r124);
  L214():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L47(dx20);
  L215():
    c55 = ldf c in base;
    r129 = dyn c55("Name", "Length", "Date");
    check L217() else D71();
  L216():
    r127 = dyn base21("Name", "Length", "Date");
    goto L48(z19, r127);
  D67():
    deopt 273 [i2, r122];
  D71():
    deopt 300 [z19, r129];
  L202():
    goto L41(i2, r122);
  L217():
    goto L48(z19, r129);
  }
}