fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3479400773;
    st CRAN_package_maintainers_info = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3479400773(packages, db, collapse) {
  (reg packages:*, reg db:*, reg collapse:*) -+> V { var packages:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, var collapse:*, reg collapse_isMissing:L, reg collapse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg db1:*, reg db2:V, reg c:V, reg c1:L, reg CRAN_package_maintainers_db:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg packages1:*, reg packages2:V, reg db3:*, reg db4:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg match:cls, reg r7:V, reg db7:*, reg db8:V, reg c3:L, reg db10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg __1:cls, reg r8:V, reg sort:cls, reg unique:cls, reg addresses:*, reg addresses1:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg to:*, reg to1:V, reg list:cls, reg r15:V, reg collapse1:*, reg collapse2:V, reg c4:L, reg paste:cls, reg head:*, reg head1:V, reg c5:L, reg head3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg p2:p(V +), reg r18:V, reg l:*, reg c6:L, reg r20:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r23:V, reg sprintf:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg head4:*, reg head5:V, reg names:cls, reg r26:V, reg p3:p(V +), reg unlist:cls, reg head6:*, reg head7:V, reg p4:p(V +), reg r29:V, reg p5:p(V +), reg r31:V, reg split:cls, reg db11:*, reg db12:V, reg c7:L, reg db14:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind2:*, reg ind3:V, reg __2:cls, reg r33:V, reg p6:p(V +), reg db15:*, reg db16:V, reg c8:L, reg db18:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind4:*, reg ind5:V, reg __3:cls, reg r35:V, reg p7:p(V +), reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg addresses2:*, reg addresses3:V, reg length:cls, reg r40:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg len:*, reg len1:V, reg r43:V, reg c9:L, reg r44:S, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg packages3:*, reg packages4:V, reg length1:cls, reg r47:V, reg r48:V, reg c10:L, reg r49:S, reg paste1:cls, reg strwrap:cls, reg paste2:cls, reg sort1:cls, reg packages5:*, reg packages6:V, reg p8:p(V +), reg r51:V, reg p9:p(V +), reg r53:V, reg p10:p(V +), reg r55:V, reg p11:p(V +), reg r57:V, reg paste3:cls, reg len2:*, reg len3:V, reg r58:V, reg c11:L, reg p12:p(V +), reg r60:V, reg paste4:cls, reg formatDL:cls, reg vapply:cls, reg lst:*, reg lst1:V, reg p13:p(V +), reg paste5:*, reg paste6:V, reg p14:p(V +), reg r63:V, reg p15:p(V +), reg r65:V, reg p16:p(V +), reg r67:V, reg c12:cls, reg r68:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r69:V, reg r70:V, reg head8:*, reg head9:V, reg body:*, reg body1:V, reg list1:cls, reg r71:V |
    mkenv;
    st packages = packages;
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
    if guard then L19() else L20();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L22() else L3();
  L19():
    db1 = ld db;
    check L21() else D0();
  L20():
    r = dyn base(<sym db>);
    goto L2(r);
  D0():
    deopt 1 [db1];
  L3():
    goto L4();
  L4():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L21():
    db2 = force? db1;
    checkMissing(db2);
    c = `==`(db2, NULL);
    goto L2(c);
  L22():
    CRAN_package_maintainers_db = ldf CRAN_package_maintainers_db;
    check L23() else D1();
  D1():
    deopt 5 [];
  L5(r5):
    st ind = r5;
    db7 = ld db;
    check L34() else D6();
  L23():
    r2 = dyn CRAN_package_maintainers_db();
    check L24() else D2();
  L26():
    packages1 = ld packages;
    check L28() else D3();
  L27():
    r4 = dyn base1(<sym packages>, <lang `[`(db, , "Package")>);
    goto L5(r4);
  D2():
    deopt 6 [r2];
  D3():
    deopt 12 [packages1];
  D6():
    deopt 25 [db7];
  L24():
    st db = r2;
    goto L4();
  L28():
    packages2 = force? packages1;
    checkMissing(packages2);
    db3 = ld db;
    check L29() else D4();
  L34():
    db8 = force? db7;
    checkMissing(db8);
    c3 = `is.object`(db8);
    if c3 then L35() else L36(db8);
  D4():
    deopt 14 [db3];
  L7(dx3):
    st addresses = dx3;
    sort = ldf sort;
    check L39() else D8();
  L29():
    db4 = force? db3;
    checkMissing(db4);
    c2 = `is.object`(db4);
    if c2 then L30() else L31();
  L35():
    dr2 = tryDispatchBuiltin.1("[", db8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(db10):
    ind = ld ind;
    check L38() else D7();
  D7():
    deopt 27 [db10, ind];
  D8():
    deopt 33 [];
  L6(dx1):
    match = ldf match in base;
    r7 = dyn match(packages2, dx1, NA_INT, NULL);
    check L33() else D5();
  L30():
    dr = tryDispatchBuiltin.1("[", db4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31();
  L31():
    __ = ldf `[` in base;
    r6 = dyn __(db4, <missing>, "Package");
    goto L6(r6);
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx2);
  L38():
    ind1 = force? ind;
    __1 = ldf `[` in base;
    r8 = dyn __1(db10, ind1, "Address");
    goto L7(r8);
  L39():
    p1 = prom<V +>{
      unique = ldf unique;
      p = prom<V +>{
        addresses = ld addresses;
        addresses1 = force? addresses;
        checkMissing(addresses1);
        return addresses1;
      };
      r10 = dyn unique(p);
      return r10;
    };
    r12 = dyn sort(p1);
    check L40() else D9();
  D5():
    deopt 23 [r7];
  D9():
    deopt 35 [r12];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L33():
    goto L5(r7);
  L40():
    st to = r12;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L8(r14):
    st head = r14;
    collapse1 = ld collapse;
    check L45() else D12();
  L41():
    to = ld to;
    check L43() else D10();
  L42():
    r13 = dyn base2[To, CC, Subject, `Reply-To`](<sym to>, "CRAN@R-project.org", "CRAN packages maintained by you", "CRAN@R-project.org");
    goto L8(r13);
  D10():
    deopt 39 [to];
  D12():
    deopt 51 [collapse1];
  L43():
    to1 = force? to;
    checkMissing(to1);
    list = ldf list in base;
    r15 = dyn list(to1, "CRAN@R-project.org", "CRAN packages maintained by you", "CRAN@R-project.org");
    check L44() else D11();
  L45():
    collapse2 = force? collapse1;
    checkMissing(collapse2);
    c4 = `as.logical`(collapse2);
    if c4 then L46() else L9();
  D11():
    deopt 49 [r15];
  L9():
    goto L10();
  L10():
    split = ldf split;
    check L56() else D17();
  L44():
    goto L8(r15);
  L46():
    paste = ldf paste;
    check L47() else D13();
  D13():
    deopt 54 [];
  D17():
    deopt 72 [];
  L47():
    p2 = prom<V +>{
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
      r16 = `$`(head3, <sym To>);
      goto L0(r16);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r18 = dyn paste[, collapse](p2, ",\n    ");
    check L48() else D14();
  L56():
    p6 = prom<V +>{
      db11 = ld db;
      db12 = force? db11;
      checkMissing(db12);
      c7 = `is.object`(db12);
      if c7 then L1() else L2(db12);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", db12);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(db14):
      ind2 = ld ind;
      ind3 = force? ind2;
      __2 = ldf `[` in base;
      r33 = dyn __2(db14, ind3, "Package");
      goto L0(r33);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p7 = prom<V +>{
      db15 = ld db;
      db16 = force? db15;
      checkMissing(db16);
      c8 = `is.object`(db16);
      if c8 then L1() else L2(db16);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", db16);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(db18):
      ind4 = ld ind;
      ind5 = force? ind4;
      __3 = ldf `[` in base;
      r35 = dyn __3(db18, ind5, "Maintainer");
      goto L0(r35);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r37 = dyn split(p6, p7);
    check L57() else D18();
  D14():
    deopt 58 [r18];
  D18():
    deopt 75 [r37];
  L48():
    l = ld head;
    c6 = `is.object`(l);
    if c6 then L50() else L51(r18, l);
  L57():
    st lst = r37;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  L11(r39):
    st len = r39;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L49(dx7):
    st head = dx7;
    sprintf = ldf sprintf;
    check L53() else D15();
  L50():
    dr6 = tryDispatchBuiltin.0("$<-", l, r18);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L52() else L51(r18, dr6);
  L51(r20, l2):
    r23 = `$<-`(l2, <sym To>, r18);
    goto L49(r23);
  L58():
    addresses2 = ld addresses;
    check L60() else D19();
  L59():
    r38 = dyn base4(<sym addresses>);
    goto L11(r38);
  D15():
    deopt 63 [];
  D19():
    deopt 79 [addresses2];
  L12(r42):
    st body = r42;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L80() else L81();
  L52():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L49(dx6);
  L53():
    p3 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      head4 = ld head;
      head5 = force? head4;
      checkMissing(head5);
      names = ldf names in base;
      r26 = dyn names(head5);
      goto L0(r26);
    L2():
      r24 = dyn base3(<sym head>);
      goto L0(r24);
    };
    p5 = prom<V +>{
      unlist = ldf unlist;
      p4 = prom<V +>{
        head6 = ld head;
        head7 = force? head6;
        checkMissing(head7);
        return head7;
      };
      r29 = dyn unlist(p4);
      return r29;
    };
    r31 = dyn sprintf("%s: %s", p3, p5);
    check L54() else D16();
  L60():
    addresses3 = force? addresses2;
    checkMissing(addresses3);
    length = ldf length in base;
    r40 = dyn length(addresses3);
    check L61() else D20();
  L62():
    len = ld len;
    check L64() else D21();
  L63():
    r41 = dyn base5(<lang if(`>`(len, 1), {
        "Dear maintainers,"
      }, {
        "Dear maintainer,"
      })>, "", <lang if(`>`(length(packages), 1), {
        "This concerns the CRAN packages"
      }, {
        "This concerns the CRAN package"
      })>, "", <lang paste(strwrap(paste(sort(packages), collapse=" "), indent=2, exdent=2), collapse="\n")>, "", <lang paste("maintained by", if(`>`(len, 1), "one of"), "you:")>, "", <lang paste0("  ", formatDL(vapply(lst, paste, "", collapse=" "), style="list"))>);
    goto L12(r41);
  D16():
    deopt 67 [r31];
  D20():
    deopt 82 [r40];
  D21():
    deopt 86 [len];
  L18(r70):
    popenv;
    return r70;
  L54():
    st head = r31;
    goto L10();
  L61():
    goto L11(r40);
  L64():
    len1 = force? len;
    checkMissing(len1);
    r43 = `>`(len1, 1);
    c9 = `as.logical`(r43);
    if c9 then L65() else L13();
  L80():
    head8 = ld head;
    check L82() else D31();
  L81():
    r69 = dyn base7[head, body](<sym head>, <sym body>);
    goto L18(r69);
  D31():
    deopt 132 [head8];
  L13():
    goto L14("Dear maintainer,");
  L14(r44):
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L67() else L68();
  L65():
    goto L14("Dear maintainers,");
  L82():
    head9 = force? head8;
    checkMissing(head9);
    body = ld body;
    check L83() else D32();
  D32():
    deopt 135 [body];
  L15(r46):
    r48 = `>`(r46, 1);
    c10 = `as.logical`(r48);
    if c10 then L71() else L16();
  L67():
    packages3 = ld packages;
    check L69() else D22();
  L68():
    r45 = dyn base6(<sym packages>);
    goto L15(r45);
  L83():
    body1 = force? body;
    checkMissing(body1);
    list1 = ldf list in base;
    r71 = dyn list1(head9, body1);
    check L84() else D33();
  D22():
    deopt 97 [packages3];
  D33():
    deopt 139 [r71];
  L16():
    goto L17("This concerns the CRAN package");
  L17(r49):
    paste1 = ldf paste;
    check L73() else D24();
  L69():
    packages4 = force? packages3;
    checkMissing(packages4);
    length1 = ldf length in base;
    r47 = dyn length1(packages4);
    check L70() else D23();
  L71():
    goto L17("This concerns the CRAN packages");
  L84():
    goto L18(r71);
  D23():
    deopt 100 [r47];
  D24():
    deopt 109 [];
  L70():
    goto L15(r47);
  L73():
    p11 = prom<V +>{
      strwrap = ldf strwrap;
      p10 = prom<V +>{
        paste2 = ldf paste;
        p9 = prom<V +>{
          sort1 = ldf sort;
          p8 = prom<V +>{
            packages5 = ld packages;
            packages6 = force? packages5;
            checkMissing(packages6);
            return packages6;
          };
          r51 = dyn sort1(p8);
          return r51;
        };
        r53 = dyn paste2[, collapse](p9, " ");
        return r53;
      };
      r55 = dyn strwrap[, indent, exdent](p10, 2, 2);
      return r55;
    };
    r57 = dyn paste1[, collapse](p11, "\n");
    check L74() else D25();
  D25():
    deopt 113 [r57];
  L74():
    paste3 = ldf paste;
    check L75() else D26();
  D26():
    deopt 116 [];
  L75():
    p12 = prom<V +>{
      len2 = ld len;
      len3 = force? len2;
      checkMissing(len3);
      r58 = `>`(len3, 1);
      c11 = `as.logical`(r58);
      if c11 then L1() else L0();
    L0():
      invisible.0();
      return NULL;
    L1():
      return "one of";
    };
    r60 = dyn paste3("maintained by", p12, "you:");
    check L76() else D27();
  D27():
    deopt 120 [r60];
  L76():
    paste4 = ldf paste0;
    check L77() else D28();
  D28():
    deopt 123 [];
  L77():
    p16 = prom<V +>{
      formatDL = ldf formatDL;
      p15 = prom<V +>{
        vapply = ldf vapply;
        p13 = prom<V +>{
          lst = ld lst;
          lst1 = force? lst;
          checkMissing(lst1);
          return lst1;
        };
        p14 = prom<V +>{
          paste5 = ld paste;
          paste6 = force? paste5;
          checkMissing(paste6);
          return paste6;
        };
        r63 = dyn vapply[, , , collapse](p13, p14, "", " ");
        return r63;
      };
      r65 = dyn formatDL[, style](p15, "list");
      return r65;
    };
    r67 = dyn paste4("  ", p16);
    check L78() else D29();
  D29():
    deopt 126 [r67];
  L78():
    c12 = ldf c in base;
    r68 = dyn c12(r44, "", r49, "", r57, "", r60, "", r67);
    check L79() else D30();
  D30():
    deopt 128 [r68];
  L79():
    goto L12(r68);
  }
}