fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner99280561;
    st fileSnapshot = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner99280561(path, `file.info`, timestamp, md5sum, digest, `full.names`, `...`) {
  (reg path:*, reg file_info:*, reg timestamp:*, reg md5sum:*, reg digest:*, reg full_names:*, reg ddd:dots) -+> V { var path:*, reg path_isMissing:L, reg path_orDefault:*, var `file.info`:*, reg file_info_isMissing:L, reg file_info_orDefault:*, var timestamp:*, reg timestamp_isMissing:L, reg timestamp_orDefault:*, var md5sum:*, reg md5sum_isMissing:L, reg md5sum_orDefault:*, var digest:*, reg digest_isMissing:L, reg digest_orDefault:*, var `full.names`:*, reg full_names_isMissing:L, reg full_names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg path1:*, reg path2:V, reg length:cls, reg r2:V, reg r3:V, reg p:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg path3:*, reg path4:V, reg length1:cls, reg r7:V, reg r8:V, reg c:L, reg c2:V, reg full_names1:*, reg full_names2:V, reg r9:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg timestamp1:*, reg timestamp2:V, reg length2:cls, reg r14:V, reg r15:V, reg c7:L, reg file_create:cls, reg timestamp3:*, reg timestamp4:V, reg p1:p(V +), reg r17:V, reg normalizePath:cls, reg path5:*, reg path6:V, reg p2:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg list:cls, reg ddd1:dots?, reg r23:V, reg character:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg path7:*, reg path8:V, reg r27:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c8:L, reg x:V, reg do_call:cls, reg list_files:*, reg list_files1:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg path9:*, reg path10:V, reg c9:L, reg path12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r31:V, reg full_names3:*, reg full_names4:V, reg args:*, reg args1:V, reg c10:cls, reg r32:V, reg p4:p(V +), reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg i9:I, reg r36:V, reg names:*, reg names1:V, reg newnames:*, reg newnames1:V, reg c11:cls, reg r37:V, reg full_names5:*, reg full_names6:V, reg c12:L, reg names2:*, reg names3:V, reg i12:I, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg i15:I, reg r39:V, reg fullnames:*, reg fullnames1:V, reg file_path:cls, reg path13:*, reg path14:V, reg c13:L, reg path16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i16:*, reg i17:V, reg __1:cls, reg r40:V, reg p5:p(V +), reg newnames2:*, reg newnames3:V, reg p6:p(V +), reg r43:V, reg c14:cls, reg r44:V, reg file_info1:*, reg file_info2:V, reg c15:L, reg file_info3:cls, reg fullnames2:*, reg fullnames3:V, reg p7:p(V +), reg r46:V, reg full_names7:*, reg full_names8:V, reg r47:V, reg c16:L, reg names5:*, reg names6:V, reg l1:*, reg rownames__:cls, reg r48:V, reg names7:V, reg data_frame:cls, reg names9:*, reg names10:V, reg p8:p(V +), reg r50:V, reg md5sum1:*, reg md5sum2:V, reg c17:L, reg data_frame1:cls, reg info:*, reg info1:V, reg p9:p(V +), reg suppressWarnings:cls, reg __2:cls, reg r52:V, reg r53:cls, reg fullnames4:*, reg fullnames5:V, reg p10:p(V +), reg r55:V, reg p11:p(V +), reg r57:V, reg p12:p(V +), reg r59:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r61:V, reg r62:V, reg digest1:*, reg digest2:V, reg c18:V, reg r63:V, reg c19:L, reg data_frame2:cls, reg info2:*, reg info3:V, reg p13:p(V +), reg digest3:cls, reg fullnames6:*, reg fullnames7:V, reg p14:p(V +), reg r66:V, reg p15:p(V +), reg r68:V, reg structure:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg r71:V, reg info4:*, reg info5:V, reg path17:*, reg path18:V, reg timestamp5:*, reg timestamp6:V, reg file_info4:*, reg file_info5:V, reg md5sum3:*, reg md5sum4:V, reg digest4:*, reg digest5:V, reg full_names9:*, reg full_names10:V, reg args2:*, reg args3:V, reg list1:cls, reg r72:V, reg p16:p(V +), reg r74:V |
    mkenv;
    path_isMissing = missing.0(path);
    if path_isMissing then L0(".") else L0(path);
  L0(path_orDefault):
    st path = path_orDefault;
    file_info_isMissing = missing.0(file_info);
    if file_info_isMissing then L1(TRUE) else L1(file_info);
  L1(file_info_orDefault):
    st `file.info` = file_info_orDefault;
    timestamp_isMissing = missing.0(timestamp);
    if timestamp_isMissing then L2(NULL) else L2(timestamp);
  L2(timestamp_orDefault):
    st timestamp = timestamp_orDefault;
    md5sum_isMissing = missing.0(md5sum);
    if md5sum_isMissing then L3(FALSE) else L3(md5sum);
  L3(md5sum_orDefault):
    st md5sum = md5sum_orDefault;
    digest_isMissing = missing.0(digest);
    if digest_isMissing then L4(NULL) else L4(digest);
  L4(digest_orDefault):
    st digest = digest_orDefault;
    full_names_isMissing = missing.0(full_names);
    if full_names_isMissing then L5() else L6(full_names);
  L5():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `>`(r1, 1.0);
      return r3;
    L1():
      path1 = ld path;
      path2 = force? path1;
      checkMissing(path2);
      length = ldf length in base;
      r2 = dyn length(path2);
      goto L0(r2);
    L2():
      r = dyn base(<sym path>);
      goto L0(r);
    };
    goto L6(p);
  L6(full_names_orDefault):
    st `full.names` = full_names_orDefault;
    st `...` = ddd;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L7(r6):
    r8 = `>`(r6, 1.0);
    c = `as.logical`(r8);
    if c then L35() else L8(c);
  L31():
    path3 = ld path;
    check L33() else D0();
  L32():
    r5 = dyn base1(<sym path>);
    goto L7(r5);
  D0():
    deopt 2 [path3];
  L8(c2):
    c6 = `as.logical`(c2);
    if c6 then L38() else L9();
  L33():
    path4 = force? path3;
    checkMissing(path4);
    length1 = ldf length in base;
    r7 = dyn length1(path4);
    check L34() else D1();
  L35():
    full_names1 = ld `full.names`;
    check L36() else D2();
  D1():
    deopt 5 [r7];
  D2():
    deopt 8 [c, full_names1];
  L9():
    goto L10();
  L10():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L34():
    goto L7(r7);
  L36():
    full_names2 = force? full_names1;
    checkMissing(full_names2);
    r9 = `!`(full_names2);
    c3 = `as.logical`(r9);
    c4 = `&&`(c, c3);
    goto L8(c4);
  L38():
    stop = ldf stop;
    check L39() else D3();
  D3():
    deopt 13 [];
  L11(r13):
    r15 = `==`(r13, 1.0);
    c7 = `as.logical`(r15);
    if c7 then L46() else L12();
  L39():
    r10 = dyn stop("'full.names' must be TRUE for multiple paths.");
    check L40() else D4();
  L42():
    timestamp1 = ld timestamp;
    check L44() else D5();
  L43():
    r12 = dyn base2(<sym timestamp>);
    goto L11(r12);
  D4():
    deopt 15 [r10];
  D5():
    deopt 20 [timestamp1];
  L12():
    goto L13();
  L13():
    normalizePath = ldf normalizePath;
    check L50() else D9();
  L40():
    goto L10();
  L44():
    timestamp2 = force? timestamp1;
    checkMissing(timestamp2);
    length2 = ldf length in base;
    r14 = dyn length2(timestamp2);
    check L45() else D6();
  L46():
    file_create = ldf `file.create`;
    check L47() else D7();
  D6():
    deopt 23 [r14];
  D7():
    deopt 27 [];
  D9():
    deopt 33 [];
  L45():
    goto L11(r14);
  L47():
    p1 = prom<V +>{
      timestamp3 = ld timestamp;
      timestamp4 = force? timestamp3;
      checkMissing(timestamp4);
      return timestamp4;
    };
    r17 = dyn file_create(p1);
    check L48() else D8();
  L50():
    p2 = prom<V +>{
      path5 = ld path;
      path6 = force? path5;
      checkMissing(path6);
      return path6;
    };
    r20 = dyn normalizePath(p2);
    check L51() else D10();
  D8():
    deopt 29 [r17];
  D10():
    deopt 35 [r20];
  L48():
    goto L13();
  L51():
    st path = r20;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L14(r22):
    st args = r22;
    character = ldf character;
    check L56() else D13();
  L52():
    list = ldf list;
    check L54() else D11();
  L53():
    r21 = dyn base3(<sym ...>);
    goto L14(r21);
  D11():
    deopt 39 [];
  D13():
    deopt 44 [];
  L54():
    ddd1 = ld `...`;
    r23 = dyn list[`...`](ddd1);
    check L55() else D12();
  L56():
    r24 = dyn character(0.0);
    check L57() else D14();
  D12():
    deopt 41 [r23];
  D14():
    deopt 46 [r24];
  L55():
    goto L14(r23);
  L57():
    st names = r24;
    st fullnames = r24;
    sym4 = ldf seq_along;
    base4 = ldf seq_along in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L15(r26):
    s = toForSeq(r26);
    l = length(s);
    i = 0;
    goto L16(i);
  L58():
    path7 = ld path;
    check L60() else D15();
  L59():
    r25 = dyn base4(<sym path>);
    goto L15(r25);
  D15():
    deopt 50 [path7];
  L16(i1):
    i2 = `+`.1(i1, 1);
    c8 = `<`.1(l, i2);
    if c8 then L61() else L21();
  L60():
    path8 = force? path7;
    checkMissing(path8);
    r27 = seq_along(path8);
    goto L15(r27);
  L21():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    do_call = ldf `do.call`;
    check L62() else D16();
  L61():
    file_info1 = ld `file.info`;
    check L79() else D27();
  D16():
    deopt 54 [i2];
  D27():
    deopt 88 [file_info1];
  L62():
    p3 = prom<V +>{
      list_files = ld `list.files`;
      list_files1 = force? list_files;
      checkMissing(list_files1);
      return list_files1;
    };
    p4 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r30):
      return r30;
    L2():
      path9 = ld path;
      path10 = force? path9;
      checkMissing(path10);
      c9 = `is.object`(path10);
      if c9 then L4() else L5(path10);
    L3():
      r29 = dyn base5[path, `full.names`, ](<lang `[`(path, i)>, <sym full.names>, <sym args>);
      goto L0(r29);
    L1(dx1):
      full_names3 = ld `full.names`;
      full_names4 = force? full_names3;
      checkMissing(full_names4);
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      c10 = ldf c in base;
      r32 = dyn c10(dx1, full_names4, args1);
      goto L0(r32);
    L4():
      dr = tryDispatchBuiltin.1("[", path10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L6() else L5(dr);
    L5(path12):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r31 = dyn __(path12, i6);
      goto L1(r31);
    L6():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    };
    r34 = dyn do_call(p3, p4);
    check L63() else D17();
  L79():
    file_info2 = force? file_info1;
    checkMissing(file_info2);
    c15 = `as.logical`(file_info2);
    if c15 then L80() else L22();
  D17():
    deopt 57 [i2, r34];
  L22():
    data_frame = ldf `data.frame`;
    check L90() else D34();
  L25():
    md5sum1 = ld md5sum;
    check L92() else D36();
  L63():
    st newnames = r34;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L80():
    file_info3 = ldf `file.info`;
    check L81() else D28();
  D28():
    deopt 91 [];
  D34():
    deopt 108 [];
  D36():
    deopt 113 [md5sum1];
  L17(i9, r36):
    st names = r36;
    full_names5 = ld `full.names`;
    check L69() else D21();
  L64():
    names = ld names;
    check L66() else D18();
  L65():
    r35 = dyn base6(<sym names>, <sym newnames>);
    goto L17(i2, r35);
  L81():
    p7 = prom<V +>{
      fullnames2 = ld fullnames;
      fullnames3 = force? fullnames2;
      checkMissing(fullnames3);
      return fullnames3;
    };
    r46 = dyn file_info3(p7);
    check L82() else D29();
  L90():
    p8 = prom<V +>{
      names9 = ld names;
      names10 = force? names9;
      checkMissing(names10);
      return names10;
    };
    r50 = dyn data_frame[`row.names`](p8);
    check L91() else D35();
  L92():
    md5sum2 = force? md5sum1;
    checkMissing(md5sum2);
    c17 = `as.logical`(md5sum2);
    if c17 then L93() else L26();
  D18():
    deopt 61 [i2, names];
  D21():
    deopt 68 [i9, full_names5];
  D29():
    deopt 93 [r46];
  D35():
    deopt 111 [r50];
  L26():
    goto L27();
  L27():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  L66():
    names1 = force? names;
    checkMissing(names1);
    newnames = ld newnames;
    check L67() else D19();
  L69():
    full_names6 = force? full_names5;
    checkMissing(full_names6);
    c12 = `as.logical`(full_names6);
    if c12 then L70() else L18();
  L82():
    st info = r46;
    full_names7 = ld `full.names`;
    check L83() else D30();
  L91():
    st info = r50;
    goto L25();
  L93():
    data_frame1 = ldf `data.frame`;
    check L94() else D37();
  D19():
    deopt 63 [i2, newnames];
  D30():
    deopt 95 [full_names7];
  D37():
    deopt 116 [];
  L18():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L73() else L74();
  L19(i12):
    goto L16(i12);
  L28(r62):
    r63 = `!`(r62);
    c19 = `as.logical`(r63);
    if c19 then L100() else L29();
  L67():
    newnames1 = force? newnames;
    checkMissing(newnames1);
    c11 = ldf c in base;
    r37 = dyn c11(names1, newnames1);
    check L68() else D20();
  L70():
    names2 = ld names;
    check L71() else D22();
  L83():
    full_names8 = force? full_names7;
    checkMissing(full_names8);
    r47 = `!`(full_names8);
    c16 = `as.logical`(r47);
    if c16 then L84() else L23();
  L94():
    p9 = prom<V +>{
      info = ld info;
      info1 = force? info;
      checkMissing(info1);
      return info1;
    };
    p12 = prom<V +>{
      suppressWarnings = ldf suppressWarnings;
      p11 = prom<V +>{
        __2 = ldf `::`;
        r52 = dyn __2("tools", "md5sum");
        checkFun.0(r52);
        r53 = r52 as cls;
        p10 = prom<V +>{
          fullnames4 = ld fullnames;
          fullnames5 = force? fullnames4;
          checkMissing(fullnames5);
          return fullnames5;
        };
        r55 = dyn r53(p10);
        return r55;
      };
      r57 = dyn suppressWarnings(p11);
      return r57;
    };
    r59 = dyn data_frame1[, md5sum, stringsAsFactors](p9, p12, FALSE);
    check L95() else D38();
  L97():
    digest1 = ld digest;
    check L99() else D39();
  L98():
    r61 = dyn base8(<sym digest>);
    goto L28(r61);
  D20():
    deopt 66 [i2, r37];
  D22():
    deopt 70 [i9, names2];
  D38():
    deopt 122 [r59];
  D39():
    deopt 127 [digest1];
  L20(i15, r39):
    st fullnames = r39;
    goto L19(i15);
  L23():
    goto L24(NULL);
  L24(names7):
    goto L25();
  L29():
    goto L30();
  L30():
    structure = ldf structure;
    check L104() else D42();
  L68():
    goto L17(i2, r37);
  L71():
    names3 = force? names2;
    checkMissing(names3);
    st fullnames = names3;
    goto L19(i9);
  L73():
    fullnames = ld fullnames;
    check L75() else D23();
  L74():
    r38 = dyn base7(<sym fullnames>, <lang file.path(`[`(path, i), newnames)>);
    goto L20(i9, r38);
  L84():
    names5 = ld names;
    check L85() else D31();
  L95():
    st info = r59;
    goto L27();
  L99():
    digest2 = force? digest1;
    checkMissing(digest2);
    c18 = `==`(digest2, NULL);
    goto L28(c18);
  L100():
    data_frame2 = ldf `data.frame`;
    check L101() else D40();
  D23():
    deopt 75 [i9, fullnames];
  D31():
    deopt 98 [names5];
  D40():
    deopt 132 [];
  D42():
    deopt 143 [];
  L75():
    fullnames1 = force? fullnames;
    checkMissing(fullnames1);
    file_path = ldf `file.path`;
    check L76() else D24();
  L85():
    names6 = force? names5;
    checkMissing(names6);
    l1 = ld info;
    rownames__ = ldf `rownames<-`;
    check L86() else D32();
  L101():
    p13 = prom<V +>{
      info2 = ld info;
      info3 = force? info2;
      checkMissing(info3);
      return info3;
    };
    p15 = prom<V +>{
      digest3 = ldf digest;
      p14 = prom<V +>{
        fullnames6 = ld fullnames;
        fullnames7 = force? fullnames6;
        checkMissing(fullnames7);
        return fullnames7;
      };
      r66 = dyn digest3(p14);
      return r66;
    };
    r68 = dyn data_frame2[, digest, stringsAsFactors](p13, p15, FALSE);
    check L102() else D41();
  L104():
    p16 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r71):
      return r71;
    L1():
      info4 = ld info;
      info5 = force? info4;
      checkMissing(info5);
      path17 = ld path;
      path18 = force? path17;
      checkMissing(path18);
      timestamp5 = ld timestamp;
      timestamp6 = force? timestamp5;
      checkMissing(timestamp6);
      file_info4 = ld `file.info`;
      file_info5 = force? file_info4;
      checkMissing(file_info5);
      md5sum3 = ld md5sum;
      md5sum4 = force? md5sum3;
      checkMissing(md5sum4);
      digest4 = ld digest;
      digest5 = force? digest4;
      checkMissing(digest5);
      full_names9 = ld `full.names`;
      full_names10 = force? full_names9;
      checkMissing(full_names10);
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      list1 = ldf list in base;
      r72 = dyn list1(info5, path18, timestamp6, file_info5, md5sum4, digest5, full_names10, args3);
      goto L0(r72);
    L2():
      r70 = dyn base9[info, path, timestamp, `file.info`, md5sum, digest, `full.names`, args](<sym info>, <sym path>, <sym timestamp>, <sym file.info>, <sym md5sum>, <sym digest>, <sym full.names>, <sym args>);
      goto L0(r70);
    };
    r74 = dyn structure[, class](p16, "fileSnapshot");
    check L105() else D43();
  D24():
    deopt 78 [i9];
  D32():
    deopt 101 [names6, l1, names6];
  D41():
    deopt 138 [r68];
  D43():
    deopt 147 [r74];
  L76():
    p5 = prom<V +>{
      path13 = ld path;
      path14 = force? path13;
      checkMissing(path14);
      c13 = `is.object`(path14);
      if c13 then L1() else L2(path14);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", path14);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(path16):
      i16 = ld i;
      i17 = force? i16;
      __1 = ldf `[` in base;
      r40 = dyn __1(path16, i17);
      goto L0(r40);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      newnames2 = ld newnames;
      newnames3 = force? newnames2;
      checkMissing(newnames3);
      return newnames3;
    };
    r43 = dyn file_path(p5, p6);
    check L77() else D25();
  L86():
    r48 = dyn rownames__(l1, NULL, names6);
    check L87() else D33();
  L102():
    st info = r68;
    goto L30();
  L105():
    popenv;
    return r74;
  D25():
    deopt 81 [i9, r43];
  D33():
    deopt 103 [names6, r48];
  L77():
    c14 = ldf c in base;
    r44 = dyn c14(fullnames1, r43);
    check L78() else D26();
  L87():
    st info = r48;
    goto L24(names6);
  D26():
    deopt 83 [i9, r44];
  L78():
    goto L20(i9, r44);
  }
}