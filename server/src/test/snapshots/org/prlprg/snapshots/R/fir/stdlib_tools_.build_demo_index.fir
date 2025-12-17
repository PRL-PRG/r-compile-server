fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner714511398;
    st `.build_demo_index` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner714511398(demoDir) {
  (reg demoDir:*) -+> V { var demoDir:*, reg dir_exists:cls, reg demoDir1:*, reg demoDir2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg stop:cls, reg gettextf:cls, reg demoDir3:*, reg demoDir4:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg list_files_with_type:cls, reg demoDir5:*, reg demoDir6:V, reg p3:p(V +), reg r9:V, reg unique:cls, reg basename:cls, reg file_path_sans_ext:cls, reg demoFiles:*, reg demoFiles1:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg p6:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg demoTopics:*, reg demoTopics1:V, reg length:cls, reg r18:V, reg r19:V, reg c1:L, reg matrix:cls, reg r20:V, reg cbind:cls, reg demoTopics2:*, reg demoTopics3:V, reg p7:p(V +), reg r24:V, reg file_test:cls, reg file_path:cls, reg demoDir7:*, reg demoDir8:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg r28:V, reg c2:L, reg tryCatch:cls, reg read_00Index:cls, reg INDEX:*, reg INDEX1:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg identity:*, reg identity1:V, reg p12:p(V +), reg r33:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r34:V, reg r35:V, reg demoEntries:*, reg demoEntries1:V, reg inherits:cls, reg r36:V, reg c3:L, reg warning:cls, reg gettextf1:cls, reg INDEX2:*, reg INDEX3:V, reg p13:p(V +), reg r38:V, reg p14:p(V +), reg r40:V, reg r41:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r42:V, reg r43:V, reg demoTopics4:*, reg demoTopics5:V, reg demoEntries2:*, reg demoEntries3:V, reg c4:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r44:V, reg match:cls, reg r45:V, reg demoEntries6:*, reg demoEntries7:V, reg c5:L, reg demoEntries9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg idx:*, reg idx1:V, reg __1:cls, reg r46:V, reg l:*, reg c6:L, reg dx5:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg which:cls, reg idx2:*, reg idx3:V, reg r47:V, reg p15:p(V +), reg r49:V, reg ___:cls, reg r50:V, reg l3:*, reg dimnames__:cls, reg r52:V, reg demoIndex:*, reg demoIndex1:V |
    mkenv;
    st demoDir = demoDir;
    dir_exists = ldf `dir.exists`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    p = prom<V +>{
      demoDir1 = ld demoDir;
      demoDir2 = force? demoDir1;
      checkMissing(demoDir2);
      return demoDir2;
    };
    r1 = dyn dir_exists(p);
    check L15() else D1();
  D1():
    deopt 3 [r1];
  L15():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L16() else L0();
  L0():
    goto L1();
  L1():
    list_files_with_type = ldf list_files_with_type;
    check L20() else D4();
  L16():
    stop = ldf stop;
    check L17() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 14 [];
  L17():
    p2 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        demoDir3 = ld demoDir;
        demoDir4 = force? demoDir3;
        checkMissing(demoDir4);
        return demoDir4;
      };
      r4 = dyn gettextf("directory '%s' does not exist", p1);
      return r4;
    };
    r6 = dyn stop[, domain](p2, NA_LGL);
    check L18() else D3();
  L20():
    p3 = prom<V +>{
      demoDir5 = ld demoDir;
      demoDir6 = force? demoDir5;
      checkMissing(demoDir6);
      return demoDir6;
    };
    r9 = dyn list_files_with_type(p3, "demo");
    check L21() else D5();
  D3():
    deopt 10 [r6];
  D5():
    deopt 17 [r9];
  L18():
    goto L1();
  L21():
    st demoFiles = r9;
    unique = ldf unique;
    check L22() else D6();
  D6():
    deopt 20 [];
  L22():
    p6 = prom<V +>{
      basename = ldf basename;
      p5 = prom<V +>{
        file_path_sans_ext = ldf file_path_sans_ext;
        p4 = prom<V +>{
          demoFiles = ld demoFiles;
          demoFiles1 = force? demoFiles;
          checkMissing(demoFiles1);
          return demoFiles1;
        };
        r11 = dyn file_path_sans_ext(p4);
        return r11;
      };
      r13 = dyn basename(p5);
      return r13;
    };
    r15 = dyn unique(p6);
    check L23() else D7();
  D7():
    deopt 22 [r15];
  L23():
    st demoTopics = r15;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L2(r17):
    r19 = `!`(r17);
    c1 = `as.logical`(r19);
    if c1 then L28() else L3();
  L24():
    demoTopics = ld demoTopics;
    check L26() else D8();
  L25():
    r16 = dyn base(<sym demoTopics>);
    goto L2(r16);
  D8():
    deopt 26 [demoTopics];
  L3():
    cbind = ldf cbind;
    check L33() else D12();
  L26():
    demoTopics1 = force? demoTopics;
    checkMissing(demoTopics1);
    length = ldf length in base;
    r18 = dyn length(demoTopics1);
    check L27() else D9();
  L28():
    matrix = ldf matrix;
    check L29() else D10();
  D9():
    deopt 29 [r18];
  D10():
    deopt 32 [];
  D12():
    deopt 41 [];
  L27():
    goto L2(r18);
  L29():
    r20 = dyn matrix("", 0, 2);
    check L30() else D11();
  L33():
    p7 = prom<V +>{
      demoTopics2 = ld demoTopics;
      demoTopics3 = force? demoTopics2;
      checkMissing(demoTopics3);
      return demoTopics3;
    };
    r24 = dyn cbind(p7, "");
    check L34() else D13();
  D11():
    deopt 36 [r20];
  D13():
    deopt 44 [r24];
  L30():
    popenv;
    return r20;
  L34():
    st demoIndex = r24;
    file_test = ldf file_test;
    check L35() else D14();
  D14():
    deopt 47 [];
  L35():
    p9 = prom<V +>{
      file_path = ldf `file.path`;
      p8 = prom<V +>{
        demoDir7 = ld demoDir;
        demoDir8 = force? demoDir7;
        checkMissing(demoDir8);
        return demoDir8;
      };
      r26 = dyn file_path(p8, "00Index");
      st INDEX = r26;
      invisible.0();
      return r26;
    };
    r28 = dyn file_test("-f", p9);
    check L36() else D15();
  D15():
    deopt 50 [r28];
  L36():
    c2 = `as.logical`(r28);
    if c2 then L37() else L5();
  L5():
    goto L13();
  L13():
    l3 = ld demoIndex;
    dimnames__ = ldf `dimnames<-`;
    check L67() else D29();
  L37():
    tryCatch = ldf tryCatch;
    check L38() else D16();
  D16():
    deopt 52 [];
  D29():
    deopt 106 [NULL, l3, NULL];
  L38():
    p11 = prom<V +>{
      read_00Index = ldf `read.00Index`;
      p10 = prom<V +>{
        INDEX = ld INDEX;
        INDEX1 = force? INDEX;
        checkMissing(INDEX1);
        return INDEX1;
      };
      r30 = dyn read_00Index(p10);
      return r30;
    };
    p12 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r33 = dyn tryCatch[, error](p11, p12);
    check L39() else D17();
  L67():
    r52 = dyn dimnames__(l3, NULL, NULL);
    check L68() else D30();
  D17():
    deopt 56 [r33];
  D30():
    deopt 108 [NULL, r52];
  L39():
    st demoEntries = r33;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L40() else L41();
  L68():
    st demoIndex = r52;
    demoIndex = ld demoIndex;
    check L69() else D31();
  D31():
    deopt 110 [demoIndex];
  L6(r35):
    c3 = `as.logical`(r35);
    if c3 then L44() else L7();
  L40():
    demoEntries = ld demoEntries;
    check L42() else D18();
  L41():
    r34 = dyn base1(<sym demoEntries>, "error");
    goto L6(r34);
  L69():
    demoIndex1 = force? demoIndex;
    checkMissing(demoIndex1);
    popenv;
    return demoIndex1;
  D18():
    deopt 60 [demoEntries];
  L7():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L8(r41):
    goto L13();
  L42():
    demoEntries1 = force? demoEntries;
    checkMissing(demoEntries1);
    inherits = ldf inherits in base;
    r36 = dyn inherits(demoEntries1, "error", FALSE);
    check L43() else D19();
  L44():
    warning = ldf warning;
    check L45() else D20();
  D19():
    deopt 65 [r36];
  D20():
    deopt 67 [];
  L9(r43):
    st idx = r43;
    demoEntries6 = ld demoEntries;
    check L56() else D25();
  L43():
    goto L6(r36);
  L45():
    p14 = prom<V +>{
      gettextf1 = ldf gettextf;
      p13 = prom<V +>{
        INDEX2 = ld INDEX;
        INDEX3 = force? INDEX2;
        checkMissing(INDEX3);
        return INDEX3;
      };
      r38 = dyn gettextf1("cannot read index information in file '%s'", p13);
      return r38;
    };
    r40 = dyn warning[, domain](p14, NA_LGL);
    check L46() else D21();
  L48():
    demoTopics4 = ld demoTopics;
    check L50() else D22();
  L49():
    r42 = dyn base2(<sym demoTopics>, <lang `[`(demoEntries, , 1)>, 0);
    goto L9(r42);
  D21():
    deopt 71 [r40];
  D22():
    deopt 74 [demoTopics4];
  D25():
    deopt 87 [demoEntries6];
  L46():
    goto L8(r40);
  L50():
    demoTopics5 = force? demoTopics4;
    checkMissing(demoTopics5);
    demoEntries2 = ld demoEntries;
    check L51() else D23();
  L56():
    demoEntries7 = force? demoEntries6;
    checkMissing(demoEntries7);
    c5 = `is.object`(demoEntries7);
    if c5 then L57() else L58(demoEntries7);
  D23():
    deopt 76 [demoEntries2];
  L11(dx3):
    l = ld demoIndex;
    c6 = `is.object`(l);
    if c6 then L61() else L62(dx3, l);
  L51():
    demoEntries3 = force? demoEntries2;
    checkMissing(demoEntries3);
    c4 = `is.object`(demoEntries3);
    if c4 then L52() else L53();
  L57():
    dr2 = tryDispatchBuiltin.1("[", demoEntries7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dr2);
  L58(demoEntries9):
    idx = ld idx;
    check L60() else D26();
  D26():
    deopt 89 [demoEntries9, idx];
  L10(dx1):
    match = ldf match in base;
    r45 = dyn match(demoTopics5, dx1, 0, NULL);
    check L55() else D24();
  L12(dx8, dx9):
    st demoIndex = dx9;
    goto L8(dx8);
  L52():
    dr = tryDispatchBuiltin.1("[", demoEntries3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L54() else L53();
  L53():
    __ = ldf `[` in base;
    r44 = dyn __(demoEntries3, <missing>, 1);
    goto L10(r44);
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(dx2);
  L60():
    idx1 = force? idx;
    __1 = ldf `[` in base;
    r46 = dyn __1(demoEntries9, idx1, 2);
    goto L11(r46);
  L61():
    dr4 = tryDispatchBuiltin.0("[<-", l, dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(dx3, dr4);
  L62(dx5, l2):
    which = ldf which;
    check L64() else D27();
  D24():
    deopt 85 [r45];
  D27():
    deopt 95 [dx5, l2, dx3];
  L54():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L55():
    goto L9(r45);
  L63():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx3, dx7);
  L64():
    p15 = prom<V +>{
      idx2 = ld idx;
      idx3 = force? idx2;
      checkMissing(idx3);
      r47 = `!=`(idx3, 0);
      return r47;
    };
    r49 = dyn which(p15);
    check L65() else D28();
  D28():
    deopt 97 [dx5, l2, dx3, r49];
  L65():
    ___ = ldf `[<-` in base;
    r50 = dyn ___(l2, dx3, r49, 2);
    goto L12(dx5, r50);
  }
}