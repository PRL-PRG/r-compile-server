fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4090028996;
    st get_IANA_character_sets = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4090028996(file) {
  (reg file:*) -+> V { var file:*, reg file_isMissing:L, reg file_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg file1:*, reg file2:V, reg c:V, reg c1:L, reg file_path:cls, reg R_home:cls, reg r2:V, reg p:p(V +), reg r4:V, reg readLines:cls, reg file3:*, reg file4:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg which:cls, reg startsWith:cls, reg lines:*, reg lines1:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg r13:V, reg min:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg which1:cls, reg startsWith1:cls, reg lines2:*, reg lines3:V, reg p4:p(V +), reg r18:V, reg p5:p(V +), reg r20:V, reg min1:cls, reg r21:V, reg r22:V, reg lines4:*, reg lines5:V, reg c2:L, reg lines7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg spos:*, reg spos1:V, reg epos:*, reg epos1:V, reg r23:V, reg __:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg grep:cls, reg lines8:*, reg lines9:V, reg p6:p(V +), reg r28:V, reg any:cls, reg r29:V, reg c3:L, reg lines10:*, reg lines11:V, reg c4:L, reg lines13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg r30:V, reg __1:cls, reg r31:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg grep1:cls, reg lines14:*, reg lines15:V, reg p7:p(V +), reg r35:V, reg any1:cls, reg r36:V, reg c5:L, reg lines16:*, reg lines17:V, reg c6:L, reg lines19:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg ind2:*, reg ind3:V, reg r37:V, reg __2:cls, reg r38:V, reg paste:cls, reg lines20:*, reg lines21:V, reg p8:p(V +), reg r40:V, reg textConnection:cls, reg entries:*, reg entries1:V, reg p9:p(V +), reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg on_exit:cls, reg r45:V, reg read_dcf:cls, reg con:*, reg con1:V, reg p10:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg r48:V, reg c7:cls, reg r49:V, reg p11:p(V +), reg r51:V, reg l:*, reg names:cls, reg r52:V, reg c8:L, reg r55:S, reg l2:*, reg r56:V, reg dr6:V, reg dc3:L, reg dx8:V, reg r58:S, reg l4:*, reg dx9:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:S, reg l7:*, reg r67:V, reg r68:S, reg r69:V, reg out:*, reg out1:V, reg names1:cls, reg r70:V, reg r71:V, reg ___:cls, reg r72:V, reg names__:cls, reg r73:V, reg sapply:cls, reg mapply:cls, reg c9:*, reg c10:V, reg p12:p(V +), reg out2:*, reg out3:V, reg c11:L, reg out5:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r75:V, reg p13:p(V +), reg out6:*, reg out7:V, reg c12:L, reg out9:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r77:V, reg p14:p(V +), reg r79:V, reg p15:p(V +), reg r81:cls, reg p16:p(V +), reg r83:V, reg MIME:*, reg MIME1:V, reg l8:*, reg c13:L, reg MIME3:V, reg l10:*, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r84:V, reg sub:cls, reg out10:*, reg out11:V, reg c14:L, reg out13:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg r85:V, reg p17:p(V +), reg r87:V, reg l11:*, reg c15:L, reg r89:V, reg l13:*, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r92:V, reg lapply:cls, reg out14:*, reg out15:V, reg c16:L, reg out17:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg r93:V, reg p18:p(V +), reg r95:cls, reg p19:p(V +), reg r97:V, reg l14:*, reg c17:L, reg r99:V, reg l16:*, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg r102:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r103:V, reg r104:V, reg out18:*, reg out19:V, reg c18:L, reg out21:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r105:V, reg as_integer:cls, reg r106:V, reg l17:*, reg c19:L, reg r108:V, reg l19:*, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg r111:V, reg out22:*, reg out23:V |
    mkenv;
    file_isMissing = missing.0(file);
    if file_isMissing then L0(NULL) else L0(file);
  L0(file_orDefault):
    st file = file_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L22() else L2();
  L19():
    file1 = ld file;
    check L21() else D0();
  L20():
    r = dyn base(<sym file>);
    goto L1(r);
  D0():
    deopt 1 [file1];
  L2():
    goto L3();
  L3():
    readLines = ldf readLines;
    check L26() else D3();
  L21():
    file2 = force? file1;
    checkMissing(file2);
    c = `==`(file2, NULL);
    goto L1(c);
  L22():
    file_path = ldf `file.path`;
    check L23() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 14 [];
  L23():
    p = prom<V +>{
      R_home = ldf `R.home`;
      r2 = dyn R_home("share");
      return r2;
    };
    r4 = dyn file_path(p, "encodings", "character-sets");
    check L24() else D2();
  L26():
    p1 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r7 = dyn readLines(p1);
    check L27() else D4();
  D2():
    deopt 9 [r4];
  D4():
    deopt 16 [r7];
  L24():
    st file = r4;
    goto L3();
  L27():
    st lines = r7;
    sym1 = ldf min;
    base1 = ldf min in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L4(r9):
    st spos = r9;
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L28():
    which = ldf which;
    check L30() else D5();
  L29():
    r8 = dyn base1(<lang which(startsWith(lines, "Name:"))>);
    goto L4(r8);
  D5():
    deopt 21 [];
  L5(r16):
    r22 = `-`(r16, 1.0);
    st epos = r22;
    lines4 = ld lines;
    check L38() else D11();
  L30():
    p3 = prom<V +>{
      startsWith = ldf startsWith;
      p2 = prom<V +>{
        lines = ld lines;
        lines1 = force? lines;
        checkMissing(lines1);
        return lines1;
      };
      r11 = dyn startsWith(p2, "Name:");
      return r11;
    };
    r13 = dyn which(p3);
    check L31() else D6();
  L33():
    which1 = ldf which;
    check L35() else D8();
  L34():
    r15 = dyn base2(<lang which(startsWith(lines, "REFERENCES"))>);
    goto L5(r15);
  D6():
    deopt 23 [r13];
  D8():
    deopt 30 [];
  D11():
    deopt 38 [lines4];
  L31():
    min = ldf min in base;
    r14 = dyn min(r13);
    check L32() else D7();
  L35():
    p5 = prom<V +>{
      startsWith1 = ldf startsWith;
      p4 = prom<V +>{
        lines2 = ld lines;
        lines3 = force? lines2;
        checkMissing(lines3);
        return lines3;
      };
      r18 = dyn startsWith1(p4, "REFERENCES");
      return r18;
    };
    r20 = dyn which1(p5);
    check L36() else D9();
  L38():
    lines5 = force? lines4;
    checkMissing(lines5);
    c2 = `is.object`(lines5);
    if c2 then L39() else L40(lines5);
  D7():
    deopt 25 [r14];
  D9():
    deopt 32 [r20];
  L6(dx1):
    st lines = dx1;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L32():
    goto L4(r14);
  L36():
    min1 = ldf min in base;
    r21 = dyn min1(r20);
    check L37() else D10();
  L39():
    dr = tryDispatchBuiltin.1("[", lines5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(dr);
  L40(lines7):
    spos = ld spos;
    check L42() else D12();
  D10():
    deopt 34 [r21];
  D12():
    deopt 40 [lines7, spos];
  L7(r26):
    c3 = `as.logical`(r26);
    if c3 then L49() else L8();
  L37():
    goto L5(r21);
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L42():
    spos1 = force? spos;
    checkMissing(spos1);
    epos = ld epos;
    check L43() else D13();
  L44():
    grep = ldf grep;
    check L46() else D14();
  L45():
    r25 = dyn base3(<lang `<-`(ind, grep("^[[:alnum:]]+:[[:space:]]+None[[:space:]]*$", lines))>);
    goto L7(r25);
  D13():
    deopt 41 [lines7, spos1, epos];
  D14():
    deopt 49 [];
  L8():
    goto L10();
  L10():
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L43():
    epos1 = force? epos;
    checkMissing(epos1);
    r23 = `:`(spos1, epos1);
    __ = ldf `[` in base;
    r24 = dyn __(lines7, r23);
    goto L6(r24);
  L46():
    p6 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      return lines9;
    };
    r28 = dyn grep("^[[:alnum:]]+:[[:space:]]+None[[:space:]]*$", p6);
    check L47() else D15();
  L49():
    lines10 = ld lines;
    check L50() else D17();
  D15():
    deopt 52 [r28];
  D17():
    deopt 56 [lines10];
  L11(r33):
    c5 = `as.logical`(r33);
    if c5 then L61() else L12();
  L47():
    st ind = r28;
    any = ldf any in base;
    r29 = dyn any(r28);
    check L48() else D16();
  L50():
    lines11 = force? lines10;
    checkMissing(lines11);
    c4 = `is.object`(lines11);
    if c4 then L51() else L52(lines11);
  L56():
    grep1 = ldf grep;
    check L58() else D19();
  L57():
    r32 = dyn base4(<lang `<-`(ind, grep("^[^[:blank:]][^:]*$", lines))>);
    goto L11(r32);
  D16():
    deopt 55 [r29];
  D19():
    deopt 68 [];
  L9(dx3):
    st lines = dx3;
    goto L10();
  L12():
    goto L14();
  L14():
    paste = ldf paste;
    check L68() else D24();
  L48():
    goto L7(r29);
  L51():
    dr2 = tryDispatchBuiltin.1("[", lines11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L53() else L52(dr2);
  L52(lines13):
    ind = ld ind;
    check L54() else D18();
  L58():
    p7 = prom<V +>{
      lines14 = ld lines;
      lines15 = force? lines14;
      checkMissing(lines15);
      return lines15;
    };
    r35 = dyn grep1("^[^[:blank:]][^:]*$", p7);
    check L59() else D20();
  L61():
    lines16 = ld lines;
    check L62() else D22();
  D18():
    deopt 58 [lines13, ind];
  D20():
    deopt 71 [r35];
  D22():
    deopt 75 [lines16];
  D24():
    deopt 85 [];
  L53():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L54():
    ind1 = force? ind;
    checkMissing(ind1);
    r30 = `-`(<missing>, ind1);
    __1 = ldf `[` in base;
    r31 = dyn __1(lines13, r30);
    goto L9(r31);
  L59():
    st ind = r35;
    any1 = ldf any in base;
    r36 = dyn any1(r35);
    check L60() else D21();
  L62():
    lines17 = force? lines16;
    checkMissing(lines17);
    c6 = `is.object`(lines17);
    if c6 then L63() else L64(lines17);
  L68():
    p8 = prom<V +>{
      lines20 = ld lines;
      lines21 = force? lines20;
      checkMissing(lines21);
      return lines21;
    };
    r40 = dyn paste[, collapse](p8, "\n");
    check L69() else D25();
  D21():
    deopt 74 [r36];
  D25():
    deopt 89 [r40];
  L13(dx6):
    st lines = dx6;
    goto L14();
  L60():
    goto L11(r36);
  L63():
    dr4 = tryDispatchBuiltin.1("[", lines17);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L65() else L64(dr4);
  L64(lines19):
    ind2 = ld ind;
    check L66() else D23();
  L69():
    st entries = r40;
    textConnection = ldf textConnection;
    check L70() else D26();
  D23():
    deopt 77 [lines19, ind2];
  D26():
    deopt 92 [];
  L65():
    dx5 = getTryDispatchBuiltinValue(dr4);
    goto L13(dx5);
  L66():
    ind3 = force? ind2;
    checkMissing(ind3);
    r37 = `-`(<missing>, ind3);
    __2 = ldf `[` in base;
    r38 = dyn __2(lines19, r37);
    goto L13(r38);
  L70():
    p9 = prom<V +>{
      entries = ld entries;
      entries1 = force? entries;
      checkMissing(entries1);
      return entries1;
    };
    r42 = dyn textConnection(p9);
    check L71() else D27();
  D27():
    deopt 94 [r42];
  L71():
    st con = r42;
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L15():
    read_dcf = ldf `read.dcf`;
    check L74() else D28();
  L72():
    on_exit = ldf `on.exit` in base;
    r45 = dyn on_exit(<lang close(con)>);
    goto L15();
  L73():
    r43 = dyn base5(<lang close(con)>);
    goto L15();
  D28():
    deopt 100 [];
  L74():
    p10 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    p11 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      c7 = ldf c in base;
      r49 = dyn c7("Name", "MIBenum", "Source", "Alias");
      goto L0(r49);
    L2():
      r47 = dyn base6("Name", "MIBenum", "Source", "Alias");
      goto L0(r47);
    };
    r51 = dyn read_dcf[, fields, all](p10, p11, TRUE);
    check L75() else D29();
  D29():
    deopt 106 [r51];
  L75():
    st out = r51;
    l = ld out;
    names = ldf names;
    check L76() else D30();
  D30():
    deopt 111 ["Aliases", l, "Aliases"];
  L76():
    r52 = dyn names("Aliases", NULL);
    check L77() else D31();
  D31():
    deopt 113 ["Aliases", l, "Aliases", r52];
  L77():
    c8 = `is.object`(r52);
    if c8 then L78() else L79("Aliases", l, r52);
  L16(r58, l4, dx9):
    names__ = ldf `names<-`;
    check L85() else D34();
  L78():
    dr6 = tryDispatchBuiltin.0("[<-", r52, "Aliases");
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L80() else L79("Aliases", l, dr6);
  L79(r55, l2, r56):
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L81() else L82();
  D34():
    deopt 124 [r58, l4, dx9];
  L17(r66, l7, r67, r68, r69):
    r71 = `==`(r69, "Alias");
    ___ = ldf `[<-` in base;
    r72 = dyn ___(r67, r68, r71);
    goto L16(r66, l7, r72);
  L80():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L16("Aliases", l, dx8);
  L81():
    out = ld out;
    check L83() else D32();
  L82():
    r65 = dyn base7(<sym out>);
    goto L17(r55, l2, r56, "Aliases", r65);
  L85():
    r73 = dyn names__(l4, NULL, dx9);
    check L86() else D35();
  D32():
    deopt 117 [r55, l2, r56, "Aliases", out];
  D35():
    deopt 126 [r58, r73];
  L83():
    out1 = force? out;
    checkMissing(out1);
    names1 = ldf names in base;
    r70 = dyn names1(out1);
    check L84() else D33();
  L86():
    st out = r73;
    sapply = ldf sapply;
    check L87() else D36();
  D33():
    deopt 120 [r55, l2, r56, "Aliases", r70];
  D36():
    deopt 129 [];
  L84():
    goto L17(r55, l2, r56, "Aliases", r70);
  L87():
    p15 = prom<V +>{
      mapply = ldf mapply;
      p12 = prom<V +>{
        c9 = ld c;
        c10 = force? c9;
        checkMissing(c10);
        return c10;
      };
      p13 = prom<V +>{
        out2 = ld out;
        out3 = force? out2;
        checkMissing(out3);
        c11 = `is.object`(out3);
        if c11 then L1() else L2(out3);
      L0(dx11):
        return dx11;
      L1():
        dr8 = tryDispatchBuiltin.1("$", out3);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(out5):
        r75 = `$`(out5, <sym Name>);
        goto L0(r75);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx10);
      };
      p14 = prom<V +>{
        out6 = ld out;
        out7 = force? out6;
        checkMissing(out7);
        c12 = `is.object`(out7);
        if c12 then L1() else L2(out7);
      L0(dx13):
        return dx13;
      L1():
        dr10 = tryDispatchBuiltin.1("$", out7);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(out9):
        r77 = `$`(out9, <sym Aliases>);
        goto L0(r77);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx12);
      };
      r79 = dyn mapply(p12, p13, p14);
      return r79;
    };
    p16 = prom<V +>{
      r81 = clos inner883694641;
      return r81;
    };
    r83 = dyn sapply(p15, p16);
    check L88() else D37();
  D37():
    deopt 132 [r83];
  L88():
    st MIME = r83;
    MIME = ld MIME;
    check L89() else D38();
  D38():
    deopt 134 [MIME];
  L89():
    MIME1 = force? MIME;
    checkMissing(MIME1);
    l8 = ld out;
    c13 = `is.object`(l8);
    if c13 then L91() else L92(MIME1, l8);
  L90(dx15):
    st out = dx15;
    sub = ldf sub;
    check L94() else D39();
  L91():
    dr12 = tryDispatchBuiltin.0("$<-", l8, MIME1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L93() else L92(MIME1, dr12);
  L92(MIME3, l10):
    r84 = `$<-`(l10, <sym MIME>, MIME1);
    goto L90(r84);
  D39():
    deopt 140 [];
  L93():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L90(dx14);
  L94():
    p17 = prom<V +>{
      out10 = ld out;
      out11 = force? out10;
      checkMissing(out11);
      c14 = `is.object`(out11);
      if c14 then L1() else L2(out11);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("$", out11);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(out13):
      r85 = `$`(out13, <sym Name>);
      goto L0(r85);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r87 = dyn sub(" +.*", "", p17);
    check L95() else D40();
  D40():
    deopt 144 [r87];
  L95():
    l11 = ld out;
    c15 = `is.object`(l11);
    if c15 then L97() else L98(r87, l11);
  L96(dx19):
    st out = dx19;
    lapply = ldf lapply;
    check L100() else D41();
  L97():
    dr16 = tryDispatchBuiltin.0("$<-", l11, r87);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L99() else L98(r87, dr16);
  L98(r89, l13):
    r92 = `$<-`(l13, <sym Name>, r87);
    goto L96(r92);
  D41():
    deopt 149 [];
  L99():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L96(dx18);
  L100():
    p18 = prom<V +>{
      out14 = ld out;
      out15 = force? out14;
      checkMissing(out15);
      c16 = `is.object`(out15);
      if c16 then L1() else L2(out15);
    L0(dx21):
      return dx21;
    L1():
      dr18 = tryDispatchBuiltin.1("$", out15);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(out17):
      r93 = `$`(out17, <sym Aliases>);
      goto L0(r93);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p19 = prom<V +>{
      r95 = clos inner1236783023;
      return r95;
    };
    r97 = dyn lapply(p18, p19);
    check L101() else D42();
  D42():
    deopt 152 [r97];
  L101():
    l14 = ld out;
    c17 = `is.object`(l14);
    if c17 then L103() else L104(r97, l14);
  L102(dx23):
    st out = dx23;
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L106() else L107();
  L103():
    dr20 = tryDispatchBuiltin.0("$<-", l14, r97);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L105() else L104(r97, dr20);
  L104(r99, l16):
    r102 = `$<-`(l16, <sym Aliases>, r97);
    goto L102(r102);
  L18(r104):
    l17 = ld out;
    c19 = `is.object`(l17);
    if c19 then L115() else L116(r104, l17);
  L105():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L102(dx22);
  L106():
    out18 = ld out;
    check L108() else D43();
  L107():
    r103 = dyn base8(<lang `$`(out, MIBenum)>);
    goto L18(r103);
  D43():
    deopt 158 [out18];
  L108():
    out19 = force? out18;
    checkMissing(out19);
    c18 = `is.object`(out19);
    if c18 then L110() else L111(out19);
  L114(dx27):
    st out = dx27;
    out22 = ld out;
    check L118() else D45();
  L115():
    dr24 = tryDispatchBuiltin.0("$<-", l17, r104);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L117() else L116(r104, dr24);
  L116(r108, l19):
    r111 = `$<-`(l19, <sym MIBenum>, r104);
    goto L114(r111);
  D45():
    deopt 166 [out22];
  L109(dx25):
    as_integer = ldf `as.integer` in base;
    r106 = dyn as_integer(dx25);
    check L113() else D44();
  L110():
    dr22 = tryDispatchBuiltin.1("$", out19);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L112() else L111(dr22);
  L111(out21):
    r105 = `$`(out21, <sym MIBenum>);
    goto L109(r105);
  L117():
    dx26 = getTryDispatchBuiltinValue(dr24);
    goto L114(dx26);
  L118():
    out23 = force? out22;
    checkMissing(out23);
    popenv;
    return out23;
  D44():
    deopt 162 [r106];
  L112():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L109(dx24);
  L113():
    goto L18(r106);
  }
}
fun inner883694641(u) {
  (reg u:*) -+> V { var u:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg grep:cls, reg u1:*, reg u2:V, reg p:p(V +), reg r3:V, reg any:cls, reg r4:V, reg c:L, reg sapply:cls, reg strsplit:cls, reg u3:*, reg u4:V, reg c1:L, reg u6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg __1:*, reg __2:V, reg p3:p(V +), reg r10:V, reg character:cls, reg r11:V |
    mkenv;
    st u = u;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L2():
    grep = ldf grep;
    check L4() else D0();
  L3():
    r = dyn base(<lang `<-`(ind, grep("preferred MIME name", u))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    character = ldf character;
    check L11() else D5();
  L4():
    p = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      return u2;
    };
    r3 = dyn grep("preferred MIME name", p);
    check L5() else D1();
  L7():
    sapply = ldf sapply;
    check L8() else D3();
  D1():
    deopt 6 [r3];
  D3():
    deopt 11 [];
  D5():
    deopt 17 [];
  L5():
    st ind = r3;
    any = ldf any in base;
    r4 = dyn any(r3);
    check L6() else D2();
  L8():
    p2 = prom<V +>{
      strsplit = ldf strsplit;
      p1 = prom<V +>{
        u3 = ld u;
        u4 = force? u3;
        checkMissing(u4);
        c1 = `is.object`(u4);
        if c1 then L1() else L2(u4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", u4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(u6):
        ind = ld ind;
        ind1 = force? ind;
        __ = ldf `[` in base;
        r5 = dyn __(u6, ind1);
        goto L0(r5);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r7 = dyn strsplit(p1, " +");
      return r7;
    };
    p3 = prom<V +>{
      __1 = ld `[[`;
      __2 = force? __1;
      checkMissing(__2);
      return __2;
    };
    r10 = dyn sapply(p2, p3, 1);
    check L9() else D4();
  L11():
    r11 = dyn character();
    check L12() else D6();
  D2():
    deopt 9 [r4];
  D4():
    deopt 15 [r10];
  D6():
    deopt 18 [r11];
  L6():
    goto L0(r4);
  L9():
    popenv;
    return r10;
  L12():
    popenv;
    return r11;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg sub:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st s = s;
    sub = ldf sub;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      return s2;
    };
    r1 = dyn sub(" +.*", "", p);
    check L1() else D1();
  D1():
    deopt 5 [r1];
  L1():
    popenv;
    return r1;
  }
}