fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1034026925;
    st makeVignetteTable = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1034026925(vignettes, depth) {
  (reg vignettes:*, reg depth:*) -+> V { var vignettes:*, var depth:*, reg depth_isMissing:L, reg depth_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg nrow:cls, reg vignettes1:*, reg vignettes2:V, reg p:p(V +), reg r6:V, reg r7:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg vignettes3:*, reg vignettes4:V, reg c2:L, reg i6:I, reg vignettes6:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r8:V, reg file_path_sans_ext:cls, reg Outfile:*, reg Outfile1:V, reg p1:p(V +), reg r10:V, reg vignettes7:*, reg vignettes8:V, reg c3:L, reg i12:I, reg vignettes10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg __1:cls, reg r11:V, reg vignettes11:*, reg vignettes12:V, reg c4:L, reg i18:I, reg vignettes14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i20:I, reg dx5:V, reg i21:*, reg i22:V, reg __2:cls, reg r12:V, reg vignettes15:*, reg vignettes16:V, reg c5:L, reg i24:I, reg vignettes18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i26:I, reg dx7:V, reg i27:*, reg i28:V, reg __3:cls, reg r13:V, reg vignettes19:*, reg vignettes20:V, reg c6:L, reg i30:I, reg vignettes22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg i32:I, reg dx9:V, reg i33:*, reg i34:V, reg __4:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg i37:I, reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg i40:I, reg r18:V, reg depth1:*, reg depth2:V, reg rep_int:cls, reg r19:V, reg pkg:*, reg pkg1:V, reg c7:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg i43:I, reg r22:V, reg root:*, reg root1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg i46:I, reg r24:V, reg Outfile2:*, reg Outfile3:V, reg nchar:cls, reg r25:V, reg c8:L, reg Outfile4:*, reg Outfile5:V, reg i49:I, reg Outfile6:V, reg File:*, reg File1:V, reg pkg2:*, reg pkg3:V, reg topic:*, reg topic1:V, reg c9:cls, reg r26:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg i52:I, reg r28:V, reg link:*, reg link1:V, reg Title:*, reg Title1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg i55:I, reg r30:V, reg Outfile7:*, reg Outfile8:V, reg nchar1:cls, reg r31:V, reg c10:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg i60:I, reg r33:V, reg root2:*, reg root3:V, reg Outfile9:*, reg Outfile10:V, reg vignette_type:cls, reg Outfile11:*, reg Outfile12:V, reg p2:p(V +), reg r35:V, reg c11:cls, reg r36:V, reg i61:I, reg r37:V, reg root4:*, reg root5:V, reg File2:*, reg File3:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r38:V, reg i64:I, reg r39:V, reg R:*, reg R1:V, reg nchar2:cls, reg r40:V, reg c12:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r41:V, reg i69:I, reg r42:V, reg root6:*, reg root7:V, reg R2:*, reg R3:V, reg c13:cls, reg r43:V, reg i70:I, reg r44:V, reg c14:cls, reg r45:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r46:V, reg i73:I, reg r47:V, reg out:*, reg out1:V, reg paste:cls, reg line:*, reg line1:V, reg p3:p(V +), reg r49:V, reg c15:cls, reg r50:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r51:V, reg r52:V, reg out2:*, reg out3:V, reg c16:cls, reg r53:V |
    mkenv;
    st vignettes = vignettes;
    depth_isMissing = missing.0(depth);
    if depth_isMissing then L0(2.0) else L0(depth);
  L0(depth_orDefault):
    st depth = depth_orDefault;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L1(r1):
    st out = r1;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L27():
    c = ldf c in base;
    r2 = dyn c("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 50%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />");
    check L29() else D0();
  L28():
    r = dyn base("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 50%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />");
    goto L1(r);
  D0():
    deopt 10 [r2];
  L2(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L3(i);
  L29():
    goto L1(r2);
  L30():
    nrow = ldf nrow;
    check L32() else D1();
  L31():
    r3 = dyn base1(<lang nrow(vignettes)>);
    goto L2(r3);
  D1():
    deopt 14 [];
  L3(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L34() else L25();
  L32():
    p = prom<V +>{
      vignettes1 = ld vignettes;
      vignettes2 = force? vignettes1;
      checkMissing(vignettes2);
      return vignettes2;
    };
    r6 = dyn nrow(p);
    check L33() else D2();
  D2():
    deopt 16 [r6];
  L25():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    vignettes3 = ld vignettes;
    check L35() else D3();
  L33():
    r7 = seq_len(r6);
    goto L2(r7);
  L34():
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L121() else L122();
  D3():
    deopt 18 [i2, vignettes3];
  L26(r52):
    popenv;
    return r52;
  L35():
    vignettes4 = force? vignettes3;
    checkMissing(vignettes4);
    c2 = `is.object`(vignettes4);
    if c2 then L36() else L37(i2, vignettes4);
  L121():
    out2 = ld out;
    check L123() else D48();
  L122():
    r51 = dyn base12(<sym out>, "</table>");
    goto L26(r51);
  D48():
    deopt 188 [out2];
  L4(i8, dx1):
    st Outfile = dx1;
    file_path_sans_ext = ldf file_path_sans_ext;
    check L40() else D5();
  L36():
    dr = tryDispatchBuiltin.1("[", vignettes4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(i2, dr);
  L37(i6, vignettes6):
    i9 = ld i;
    check L39() else D4();
  L123():
    out3 = force? out2;
    checkMissing(out3);
    c16 = ldf c in base;
    r53 = dyn c16(out3, "</table>");
    check L124() else D49();
  D4():
    deopt 20 [i6, vignettes6, i9];
  D5():
    deopt 26 [i8];
  D49():
    deopt 192 [r53];
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(i2, dx);
  L39():
    i10 = force? i9;
    __ = ldf `[` in base;
    r8 = dyn __(vignettes6, i10, "PDF");
    goto L4(i6, r8);
  L40():
    p1 = prom<V +>{
      Outfile = ld Outfile;
      Outfile1 = force? Outfile;
      checkMissing(Outfile1);
      return Outfile1;
    };
    r10 = dyn file_path_sans_ext(p1);
    check L41() else D6();
  L124():
    goto L26(r53);
  D6():
    deopt 28 [i8, r10];
  L41():
    st topic = r10;
    vignettes7 = ld vignettes;
    check L42() else D7();
  D7():
    deopt 30 [i8, vignettes7];
  L42():
    vignettes8 = force? vignettes7;
    checkMissing(vignettes8);
    c3 = `is.object`(vignettes8);
    if c3 then L43() else L44(i8, vignettes8);
  L5(i14, dx3):
    st Title = dx3;
    vignettes11 = ld vignettes;
    check L47() else D9();
  L43():
    dr2 = tryDispatchBuiltin.1("[", vignettes8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L45() else L44(i8, dr2);
  L44(i12, vignettes10):
    i15 = ld i;
    check L46() else D8();
  D8():
    deopt 32 [i12, vignettes10, i15];
  D9():
    deopt 37 [i14, vignettes11];
  L45():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(i8, dx2);
  L46():
    i16 = force? i15;
    __1 = ldf `[` in base;
    r11 = dyn __1(vignettes10, i16, "Title");
    goto L5(i12, r11);
  L47():
    vignettes12 = force? vignettes11;
    checkMissing(vignettes12);
    c4 = `is.object`(vignettes12);
    if c4 then L48() else L49(i14, vignettes12);
  L6(i20, dx5):
    st File = dx5;
    vignettes15 = ld vignettes;
    check L52() else D11();
  L48():
    dr4 = tryDispatchBuiltin.1("[", vignettes12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(i14, dr4);
  L49(i18, vignettes14):
    i21 = ld i;
    check L51() else D10();
  D10():
    deopt 39 [i18, vignettes14, i21];
  D11():
    deopt 44 [i20, vignettes15];
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(i14, dx4);
  L51():
    i22 = force? i21;
    __2 = ldf `[` in base;
    r12 = dyn __2(vignettes14, i22, "File");
    goto L6(i18, r12);
  L52():
    vignettes16 = force? vignettes15;
    checkMissing(vignettes16);
    c5 = `is.object`(vignettes16);
    if c5 then L53() else L54(i20, vignettes16);
  L7(i26, dx7):
    st R = dx7;
    vignettes19 = ld vignettes;
    check L57() else D13();
  L53():
    dr6 = tryDispatchBuiltin.1("[", vignettes16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L55() else L54(i20, dr6);
  L54(i24, vignettes18):
    i27 = ld i;
    check L56() else D12();
  D12():
    deopt 46 [i24, vignettes18, i27];
  D13():
    deopt 51 [i26, vignettes19];
  L55():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L7(i20, dx6);
  L56():
    i28 = force? i27;
    __3 = ldf `[` in base;
    r13 = dyn __3(vignettes18, i28, "R");
    goto L7(i24, r13);
  L57():
    vignettes20 = force? vignettes19;
    checkMissing(vignettes20);
    c6 = `is.object`(vignettes20);
    if c6 then L58() else L59(i26, vignettes20);
  L8(i32, dx9):
    st pkg = dx9;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L62() else L63();
  L58():
    dr8 = tryDispatchBuiltin.1("[", vignettes20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L60() else L59(i26, dr8);
  L59(i30, vignettes22):
    i33 = ld i;
    check L61() else D14();
  D14():
    deopt 53 [i30, vignettes22, i33];
  L9(i37, r16):
    st root = r16;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L60():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L8(i26, dx8);
  L61():
    i34 = force? i33;
    __4 = ldf `[` in base;
    r14 = dyn __4(vignettes22, i34, "Package");
    goto L8(i30, r14);
  L62():
    sym3 = ldf `rep.int`;
    base3 = ldf `rep.int` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L64() else L65();
  L63():
    r15 = dyn base2(<lang rep.int("../", depth)>, "library/", <sym pkg>, "/doc/");
    goto L9(i32, r15);
  L10(i40, r18):
    pkg = ld pkg;
    check L68() else D17();
  L11(i43, r22):
    st link = r22;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L84() else L85();
  L64():
    depth1 = ld depth;
    check L66() else D15();
  L65():
    r17 = dyn base3("../", <sym depth>);
    goto L10(i32, r17);
  L70():
    root = ld root;
    check L72() else D19();
  L71():
    r21 = dyn base4("<a href=\"", <sym root>, <lang if(nchar(Outfile), Outfile, File)>, "\">", <sym pkg>, "::", <sym topic>, "</a>");
    goto L11(i37, r21);
  D15():
    deopt 63 [i32, depth1];
  D17():
    deopt 68 [i40, pkg];
  D19():
    deopt 77 [i37, root];
  L15(i52, r28):
    st line = r28;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L115() else L116();
  L66():
    depth2 = force? depth1;
    checkMissing(depth2);
    rep_int = ldf `rep.int` in base;
    r19 = dyn rep_int("../", depth2);
    check L67() else D16();
  L68():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    c7 = ldf c in base;
    r20 = dyn c7(r18, "library/", pkg1, "/doc/");
    check L69() else D18();
  L72():
    root1 = force? root;
    checkMissing(root1);
    sym5 = ldf nchar;
    base5 = ldf nchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  L84():
    link = ld link;
    check L86() else D27();
  L85():
    r27 = dyn base6("<tr><td style=\"text-align: right; vertical-align: top;\">", <sym link>, "</td>\n<td></td><td style=\"vertical-align: top;\">", <sym Title>, "</td>\n<td style=\"vertical-align: top;\">", <lang if(nchar(Outfile), c("<a href=\"", root, Outfile, "\">", vignette_type(Outfile), "</a>"))>, "</td>\n<td style=\"vertical-align: top;\">", "<a href=\"", <sym root>, <sym File>, "\">source</a>", "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", <lang if(nchar(R), c("<a href=\"", root, R, "\">R code</a>"))>, "</td></tr>");
    goto L15(i43, r27);
  D16():
    deopt 66 [i32, r19];
  D18():
    deopt 72 [i40, r20];
  D27():
    deopt 105 [i43, link];
  L12(i46, r24):
    c8 = `as.logical`(r24);
    if c8 then L77() else L13();
  L24(i73, r47):
    st out = r47;
    goto L3(i73);
  L67():
    goto L10(i32, r19);
  L69():
    goto L9(i40, r20);
  L73():
    Outfile2 = ld Outfile;
    check L75() else D20();
  L74():
    r23 = dyn base5(<sym Outfile>);
    goto L12(i37, r23);
  L86():
    link1 = force? link;
    checkMissing(link1);
    Title = ld Title;
    check L87() else D28();
  L115():
    out = ld out;
    check L117() else D44();
  L116():
    r46 = dyn base11(<sym out>, <lang paste(line, collapse="")>);
    goto L24(i52, r46);
  D20():
    deopt 81 [i37, Outfile2];
  D28():
    deopt 108 [i43, Title];
  D44():
    deopt 172 [i52, out];
  L13():
    File = ld File;
    check L80() else D23();
  L14(i49, Outfile6):
    pkg2 = ld pkg;
    check L81() else D24();
  L75():
    Outfile3 = force? Outfile2;
    checkMissing(Outfile3);
    nchar = ldf nchar in base;
    r25 = dyn nchar(Outfile3, "chars", FALSE, NA_LGL);
    check L76() else D21();
  L77():
    Outfile4 = ld Outfile;
    check L78() else D22();
  L87():
    Title1 = force? Title;
    checkMissing(Title1);
    sym7 = ldf nchar;
    base7 = ldf nchar in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L88() else L89();
  L117():
    out1 = force? out;
    checkMissing(out1);
    paste = ldf paste;
    check L118() else D45();
  D21():
    deopt 87 [i37, r25];
  D22():
    deopt 88 [i46, Outfile4];
  D23():
    deopt 90 [i46, File];
  D24():
    deopt 93 [i49, pkg2];
  D45():
    deopt 175 [i52];
  L16(i55, r30):
    c10 = `as.logical`(r30);
    if c10 then L92() else L17();
  L76():
    goto L12(i37, r25);
  L78():
    Outfile5 = force? Outfile4;
    checkMissing(Outfile5);
    goto L14(i46, Outfile5);
  L80():
    File1 = force? File;
    checkMissing(File1);
    goto L14(i46, File1);
  L81():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    topic = ld topic;
    check L82() else D25();
  L88():
    Outfile7 = ld Outfile;
    check L90() else D29();
  L89():
    r29 = dyn base7(<sym Outfile>);
    goto L16(i43, r29);
  L118():
    p3 = prom<V +>{
      line = ld line;
      line1 = force? line;
      checkMissing(line1);
      return line1;
    };
    r49 = dyn paste[, collapse](p3, "");
    check L119() else D46();
  D25():
    deopt 96 [i49, topic];
  D29():
    deopt 113 [i43, Outfile7];
  D46():
    deopt 179 [i52, r49];
  L17():
    goto L19(i55, NULL);
  L19(i61, r37):
    root4 = ld root;
    check L101() else D36();
  L82():
    topic1 = force? topic;
    checkMissing(topic1);
    c9 = ldf c in base;
    r26 = dyn c9("<a href=\"", root1, Outfile6, "\">", pkg3, "::", topic1, "</a>");
    check L83() else D26();
  L90():
    Outfile8 = force? Outfile7;
    checkMissing(Outfile8);
    nchar1 = ldf nchar in base;
    r31 = dyn nchar1(Outfile8, "chars", FALSE, NA_LGL);
    check L91() else D30();
  L92():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L93() else L94();
  L119():
    c15 = ldf c in base;
    r50 = dyn c15(out1, r49);
    check L120() else D47();
  D26():
    deopt 100 [i49, r26];
  D30():
    deopt 119 [i43, r31];
  D36():
    deopt 139 [i61, root4];
  D47():
    deopt 181 [i52, r50];
  L18(i60, r33):
    goto L19(i60, r33);
  L83():
    goto L11(i49, r26);
  L91():
    goto L16(i43, r31);
  L93():
    root2 = ld root;
    check L95() else D31();
  L94():
    r32 = dyn base8("<a href=\"", <sym root>, <sym Outfile>, "\">", <lang vignette_type(Outfile)>, "</a>");
    goto L18(i55, r32);
  L101():
    root5 = force? root4;
    checkMissing(root5);
    File2 = ld File;
    check L102() else D37();
  L120():
    goto L24(i52, r50);
  D31():
    deopt 123 [i55, root2];
  D37():
    deopt 141 [i61, File2];
  L95():
    root3 = force? root2;
    checkMissing(root3);
    Outfile9 = ld Outfile;
    check L96() else D32();
  L102():
    File3 = force? File2;
    checkMissing(File3);
    sym9 = ldf nchar;
    base9 = ldf nchar in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L103() else L104();
  D32():
    deopt 125 [i55, Outfile9];
  L20(i64, r39):
    c12 = `as.logical`(r39);
    if c12 then L107() else L21();
  L96():
    Outfile10 = force? Outfile9;
    checkMissing(Outfile10);
    vignette_type = ldf vignette_type;
    check L97() else D33();
  L103():
    R = ld R;
    check L105() else D38();
  L104():
    r38 = dyn base9(<sym R>);
    goto L20(i61, r38);
  D33():
    deopt 129 [i55];
  D38():
    deopt 147 [i61, R];
  L21():
    goto L23(i64, NULL);
  L23(i70, r44):
    c14 = ldf c in base;
    r45 = dyn c14("<tr><td style=\"text-align: right; vertical-align: top;\">", link1, "</td>\n<td></td><td style=\"vertical-align: top;\">", Title1, "</td>\n<td style=\"vertical-align: top;\">", r37, "</td>\n<td style=\"vertical-align: top;\">", "<a href=\"", root5, File3, "\">source</a>", "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", r44, "</td></tr>");
    check L114() else D43();
  L97():
    p2 = prom<V +>{
      Outfile11 = ld Outfile;
      Outfile12 = force? Outfile11;
      checkMissing(Outfile12);
      return Outfile12;
    };
    r35 = dyn vignette_type(p2);
    check L98() else D34();
  L105():
    R1 = force? R;
    checkMissing(R1);
    nchar2 = ldf nchar in base;
    r40 = dyn nchar2(R1, "chars", FALSE, NA_LGL);
    check L106() else D39();
  L107():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L108() else L109();
  D34():
    deopt 131 [i55, r35];
  D39():
    deopt 153 [i61, r40];
  D43():
    deopt 168 [i70, r45];
  L22(i69, r42):
    goto L23(i69, r42);
  L98():
    c11 = ldf c in base;
    r36 = dyn c11("<a href=\"", root3, Outfile10, "\">", r35, "</a>");
    check L99() else D35();
  L106():
    goto L20(i61, r40);
  L108():
    root6 = ld root;
    check L110() else D40();
  L109():
    r41 = dyn base10("<a href=\"", <sym root>, <sym R>, "\">R code</a>");
    goto L22(i64, r41);
  L114():
    goto L15(i70, r45);
  D35():
    deopt 134 [i55, r36];
  D40():
    deopt 157 [i64, root6];
  L99():
    goto L18(i55, r36);
  L110():
    root7 = force? root6;
    checkMissing(root7);
    R2 = ld R;
    check L111() else D41();
  D41():
    deopt 159 [i64, R2];
  L111():
    R3 = force? R2;
    checkMissing(R3);
    c13 = ldf c in base;
    r43 = dyn c13("<a href=\"", root7, R3, "\">R code</a>");
    check L112() else D42();
  D42():
    deopt 163 [i64, r43];
  L112():
    goto L22(i64, r43);
  }
}