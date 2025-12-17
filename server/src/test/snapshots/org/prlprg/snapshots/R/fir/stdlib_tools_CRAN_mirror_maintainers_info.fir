fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4196396680;
    st CRAN_mirror_maintainers_info = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4196396680(mirrors, db, collapse) {
  (reg mirrors:*, reg db:*, reg collapse:*) -+> V { var mirrors:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg db1:*, reg db2:V, reg c:V, reg c1:L, reg __:cls, reg r2:V, reg r3:cls, reg r4:V, reg sort:cls, reg unique:cls, reg mirrors1:*, reg mirrors2:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg mirrors3:*, reg mirrors4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg db3:*, reg db4:V, reg c2:L, reg db6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg as_character:cls, reg r15:V, reg match:cls, reg r16:V, reg db7:*, reg db8:V, reg c3:L, reg db10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg __1:cls, reg r17:V, reg gsub:cls, reg addresses:*, reg addresses1:V, reg p2:p(V +), reg r19:V, reg unique1:cls, reg unlist:cls, reg strsplit:cls, reg addresses2:*, reg addresses3:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg to:*, reg to1:V, reg list:cls, reg r28:V, reg collapse1:*, reg collapse2:V, reg c4:L, reg paste:cls, reg head:*, reg head1:V, reg c5:L, reg head3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r29:V, reg p6:p(V +), reg r31:V, reg l:*, reg c6:L, reg r33:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r36:V, reg sprintf:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg r38:V, reg head4:*, reg head5:V, reg names:cls, reg r39:V, reg p7:p(V +), reg unlist1:cls, reg head6:*, reg head7:V, reg p8:p(V +), reg r42:V, reg p9:p(V +), reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r46:V, reg r47:V, reg addresses4:*, reg addresses5:V, reg length:cls, reg r48:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg len:*, reg len1:V, reg r51:V, reg c7:L, reg r52:S, reg strwrap:cls, reg paste1:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r53:V, reg r54:V, reg mirrors5:*, reg mirrors6:V, reg length1:cls, reg r55:V, reg r56:V, reg c8:L, reg p10:p(V +), reg len2:*, reg len3:V, reg r58:V, reg c9:L, reg p11:p(V +), reg r60:V, reg p12:p(V +), reg r62:V, reg paste2:cls, reg formatDL:cls, reg mirrors7:*, reg mirrors8:V, reg p13:p(V +), reg addresses6:*, reg addresses7:V, reg p14:p(V +), reg r65:V, reg p15:p(V +), reg r67:V, reg c10:cls, reg r68:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r69:V, reg r70:V, reg head8:*, reg head9:V, reg body:*, reg body1:V, reg list1:cls, reg r71:V |
    mkenv;
    st mirrors = mirrors;
    db_isMissing = missing.0(db);
    if db_isMissing then L0(NULL) else L0(db);
  L0(db_orDefault):
    st db = db_orDefault;
    collapse_isMissing = missing.0(collapse);
    if collapse_isMissing then L1(TRUE) else L1(collapse);
  L1(collapse_orDefault):
    st collapse = collapse_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L19() else L3();
  L16():
    db1 = ld db;
    check L18() else D0();
  L17():
    r = dyn base(<sym db>);
    goto L2(r);
  D0():
    deopt 1 [db1];
  L3():
    goto L4();
  L4():
    sort = ldf sort;
    check L24() else D4();
  L18():
    db2 = force? db1;
    checkMissing(db2);
    c = `==`(db2, NULL);
    goto L2(c);
  L19():
    __ = ldf `::`;
    check L20() else D1();
  D1():
    deopt 5 [];
  D4():
    deopt 17 [];
  L20():
    r2 = dyn __("utils", "getCRANmirrors");
    check L21() else D2();
  L24():
    p1 = prom<V +>{
      unique = ldf unique;
      p = prom<V +>{
        mirrors1 = ld mirrors;
        mirrors2 = force? mirrors1;
        checkMissing(mirrors2);
        return mirrors2;
      };
      r7 = dyn unique(p);
      return r7;
    };
    r9 = dyn sort(p1);
    check L25() else D5();
  D2():
    deopt 8 [r2];
  D5():
    deopt 19 [r9];
  L21():
    checkFun.0(r2);
    r3 = r2 as cls;
    r4 = dyn r3[all](TRUE);
    check L22() else D3();
  L25():
    st mirrors = r9;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  D3():
    deopt 12 [r4];
  L5(r11):
    st ind = r11;
    db7 = ld db;
    check L38() else D10();
  L22():
    st db = r4;
    goto L4();
  L26():
    mirrors3 = ld mirrors;
    check L28() else D6();
  L27():
    r10 = dyn base1(<sym mirrors>, <lang as.character(`$`(db, URL))>);
    goto L5(r10);
  D6():
    deopt 23 [mirrors3];
  D10():
    deopt 37 [db7];
  L28():
    mirrors4 = force? mirrors3;
    checkMissing(mirrors4);
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L38():
    db8 = force? db7;
    checkMissing(db8);
    c3 = `is.object`(db8);
    if c3 then L39() else L40(db8);
  L6(r13):
    match = ldf match in base;
    r16 = dyn match(mirrors4, r13, NA_INT, NULL);
    check L37() else D9();
  L7(dx3):
    st addresses = dx3;
    gsub = ldf gsub;
    check L43() else D12();
  L29():
    db3 = ld db;
    check L31() else D7();
  L30():
    r12 = dyn base2(<lang `$`(db, URL)>);
    goto L6(r12);
  L39():
    dr2 = tryDispatchBuiltin.1("[", db8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(dr2);
  L40(db10):
    ind = ld ind;
    check L42() else D11();
  D7():
    deopt 27 [db3];
  D9():
    deopt 35 [r16];
  D11():
    deopt 39 [db10, ind];
  D12():
    deopt 45 [];
  L31():
    db4 = force? db3;
    checkMissing(db4);
    c2 = `is.object`(db4);
    if c2 then L33() else L34(db4);
  L37():
    goto L5(r16);
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L42():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r17 = dyn __1(db10, ind1, "Maintainer");
    goto L7(r17);
  L43():
    p2 = prom<V +>{
      addresses = ld addresses;
      addresses1 = force? addresses;
      checkMissing(addresses1);
      return addresses1;
    };
    r19 = dyn gsub("[[:space:]]*#[[:space:]]*", "@", p2);
    check L44() else D13();
  D13():
    deopt 49 [r19];
  L32(dx1):
    as_character = ldf `as.character` in base;
    r15 = dyn as_character(dx1);
    check L36() else D8();
  L33():
    dr = tryDispatchBuiltin.1("$", db4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L35() else L34(dr);
  L34(db6):
    r14 = `$`(db6, <sym URL>);
    goto L32(r14);
  L44():
    st addresses = r19;
    unique1 = ldf unique;
    check L45() else D14();
  D8():
    deopt 31 [r15];
  D14():
    deopt 52 [];
  L35():
    dx = getTryDispatchBuiltinValue(dr);
    goto L32(dx);
  L36():
    goto L6(r15);
  L45():
    p5 = prom<V +>{
      unlist = ldf unlist;
      p4 = prom<V +>{
        strsplit = ldf strsplit;
        p3 = prom<V +>{
          addresses2 = ld addresses;
          addresses3 = force? addresses2;
          checkMissing(addresses3);
          return addresses3;
        };
        r21 = dyn strsplit(p3, "[[:space:]]*,[[:space:]]*");
        return r21;
      };
      r23 = dyn unlist(p4);
      return r23;
    };
    r25 = dyn unique1(p5);
    check L46() else D15();
  D15():
    deopt 54 [r25];
  L46():
    st to = r25;
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L47() else L48();
  L8(r27):
    st head = r27;
    collapse1 = ld collapse;
    check L51() else D18();
  L47():
    to = ld to;
    check L49() else D16();
  L48():
    r26 = dyn base3[To, CC, Subject, `Reply-To`](<sym to>, "CRAN@R-project.org", "CRAN mirrors maintained by you", "CRAN@R-project.org");
    goto L8(r26);
  D16():
    deopt 58 [to];
  D18():
    deopt 70 [collapse1];
  L49():
    to1 = force? to;
    checkMissing(to1);
    list = ldf list in base;
    r28 = dyn list(to1, "CRAN@R-project.org", "CRAN mirrors maintained by you", "CRAN@R-project.org");
    check L50() else D17();
  L51():
    collapse2 = force? collapse1;
    checkMissing(collapse2);
    c4 = `as.logical`(collapse2);
    if c4 then L52() else L9();
  D17():
    deopt 68 [r28];
  L9():
    goto L10();
  L10():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L50():
    goto L8(r28);
  L52():
    paste = ldf paste;
    check L53() else D19();
  D19():
    deopt 73 [];
  L11(r47):
    st len = r47;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L53():
    p6 = prom<V +>{
      head = ld head;
      head1 = force? head;
      checkMissing(head1);
      c5 = `is.object`(head1);
      if c5 then L1() else L2(head1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", head1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(head3):
      r29 = `$`(head3, <sym To>);
      goto L0(r29);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r31 = dyn paste[, collapse](p6, ",\n    ");
    check L54() else D20();
  L62():
    addresses4 = ld addresses;
    check L64() else D23();
  L63():
    r46 = dyn base5(<sym addresses>);
    goto L11(r46);
  D20():
    deopt 77 [r31];
  D23():
    deopt 92 [addresses4];
  L12(r50):
    st body = r50;
    sym8 = ldf list;
    base8 = ldf list in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  L54():
    l = ld head;
    c6 = `is.object`(l);
    if c6 then L56() else L57(r31, l);
  L64():
    addresses5 = force? addresses4;
    checkMissing(addresses5);
    length = ldf length in base;
    r48 = dyn length(addresses5);
    check L65() else D24();
  L66():
    len = ld len;
    check L68() else D25();
  L67():
    r49 = dyn base6(<lang if(`>`(len, 1), {
        "Dear maintainers,"
      }, {
        "Dear maintainer,"
      })>, "", <lang strwrap(paste(if(`>`(length(mirrors), 1), {
            "This concerns the following CRAN mirrors"
          }, {
            "This concerns the following CRAN mirror"
          }), "maintained by", if(`>`(len, 1), "one of"), "you:"))>, "", <lang paste0("  ", formatDL(mirrors, addresses, style="list"))>);
    goto L12(r49);
  D24():
    deopt 95 [r48];
  D25():
    deopt 99 [len];
  L15(r70):
    popenv;
    return r70;
  L55(dx7):
    st head = dx7;
    sprintf = ldf sprintf;
    check L59() else D21();
  L56():
    dr6 = tryDispatchBuiltin.0("$<-", l, r31);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(r31, dr6);
  L57(r33, l2):
    r36 = `$<-`(l2, <sym To>, r31);
    goto L55(r36);
  L65():
    goto L11(r48);
  L68():
    len1 = force? len;
    checkMissing(len1);
    r51 = `>`(len1, 1);
    c7 = `as.logical`(r51);
    if c7 then L69() else L13();
  L76():
    head8 = ld head;
    check L78() else D31();
  L77():
    r69 = dyn base8[head, body](<sym head>, <sym body>);
    goto L15(r69);
  D21():
    deopt 82 [];
  D31():
    deopt 123 [head8];
  L13():
    goto L14("Dear maintainer,");
  L14(r52):
    strwrap = ldf strwrap;
    check L71() else D26();
  L58():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L55(dx6);
  L59():
    p7 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r38):
      return r38;
    L1():
      head4 = ld head;
      head5 = force? head4;
      checkMissing(head5);
      names = ldf names in base;
      r39 = dyn names(head5);
      goto L0(r39);
    L2():
      r37 = dyn base4(<sym head>);
      goto L0(r37);
    };
    p9 = prom<V +>{
      unlist1 = ldf unlist;
      p8 = prom<V +>{
        head6 = ld head;
        head7 = force? head6;
        checkMissing(head7);
        return head7;
      };
      r42 = dyn unlist1(p8);
      return r42;
    };
    r44 = dyn sprintf("%s: %s", p7, p9);
    check L60() else D22();
  L69():
    goto L14("Dear maintainers,");
  L78():
    head9 = force? head8;
    checkMissing(head9);
    body = ld body;
    check L79() else D32();
  D22():
    deopt 86 [r44];
  D26():
    deopt 109 [];
  D32():
    deopt 126 [body];
  L60():
    st head = r44;
    goto L10();
  L71():
    p12 = prom<V +>{
      paste1 = ldf paste;
      p10 = prom<V +>{
        sym7 = ldf length;
        base7 = ldf length in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L2() else L3();
      L0(r54):
        r56 = `>`(r54, 1);
        c8 = `as.logical`(r56);
        if c8 then L4() else L1();
      L2():
        mirrors5 = ld mirrors;
        mirrors6 = force? mirrors5;
        checkMissing(mirrors6);
        length1 = ldf length in base;
        r55 = dyn length1(mirrors6);
        goto L0(r55);
      L3():
        r53 = dyn base7(<sym mirrors>);
        goto L0(r53);
      L1():
        return "This concerns the following CRAN mirror";
      L4():
        return "This concerns the following CRAN mirrors";
      };
      p11 = prom<V +>{
        len2 = ld len;
        len3 = force? len2;
        checkMissing(len3);
        r58 = `>`(len3, 1);
        c9 = `as.logical`(r58);
        if c9 then L1() else L0();
      L0():
        invisible.0();
        return NULL;
      L1():
        return "one of";
      };
      r60 = dyn paste1(p10, "maintained by", p11, "you:");
      return r60;
    };
    r62 = dyn strwrap(p12);
    check L72() else D27();
  L79():
    body1 = force? body;
    checkMissing(body1);
    list1 = ldf list in base;
    r71 = dyn list1(head9, body1);
    check L80() else D33();
  D27():
    deopt 111 [r62];
  D33():
    deopt 130 [r71];
  L72():
    paste2 = ldf paste0;
    check L73() else D28();
  L80():
    goto L15(r71);
  D28():
    deopt 114 [];
  L73():
    p15 = prom<V +>{
      formatDL = ldf formatDL;
      p13 = prom<V +>{
        mirrors7 = ld mirrors;
        mirrors8 = force? mirrors7;
        checkMissing(mirrors8);
        return mirrors8;
      };
      p14 = prom<V +>{
        addresses6 = ld addresses;
        addresses7 = force? addresses6;
        checkMissing(addresses7);
        return addresses7;
      };
      r65 = dyn formatDL[, , style](p13, p14, "list");
      return r65;
    };
    r67 = dyn paste2("  ", p15);
    check L74() else D29();
  D29():
    deopt 117 [r67];
  L74():
    c10 = ldf c in base;
    r68 = dyn c10(r52, "", r62, "", r67);
    check L75() else D30();
  D30():
    deopt 119 [r68];
  L75():
    goto L12(r68);
  }
}