fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3073759491;
    st add_datalist = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3073759491(pkgpath, force, `small.size`) {
  (reg pkgpath:*, reg force:*, reg small_size:*) -+> V { var pkgpath:*, var force:*, reg force_isMissing:L, reg force_orDefault:*, var `small.size`:*, reg small_size_isMissing:L, reg small_size_orDefault:*, reg p:p(V +), reg file_path:cls, reg pkgpath1:*, reg pkgpath2:V, reg p1:p(V +), reg r2:V, reg force1:*, reg force2:V, reg r3:V, reg c:L, reg c2:V, reg file_exists:cls, reg dlist:*, reg dlist1:V, reg p2:p(V +), reg r5:V, reg c3:L, reg c4:V, reg c6:L, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg file_size:cls, reg Sys_glob:cls, reg file_path1:cls, reg pkgpath3:*, reg pkgpath4:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg sum:cls, reg r16:V, reg size:*, reg size1:V, reg small_size1:*, reg small_size2:V, reg r17:V, reg c7:L, reg list_data_in_pkg:cls, reg pkgpath5:*, reg pkgpath6:V, reg p6:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg z:*, reg z1:V, reg length:cls, reg r24:V, reg r25:V, reg c8:L, reg file:cls, reg dlist2:*, reg dlist3:V, reg p7:p(V +), reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg z2:*, reg z3:V, reg names:cls, reg r32:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c9:L, reg x:V, reg z4:*, reg z5:V, reg c10:L, reg i6:I, reg z7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg nm:*, reg nm1:V, reg __:cls, reg r33:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r34:V, reg i11:I, reg r35:V, reg zz:*, reg zz1:V, reg length1:cls, reg r36:V, reg r37:V, reg c11:L, reg i13:I, reg c13:V, reg zz2:*, reg zz3:V, reg nm2:*, reg nm3:V, reg r38:V, reg c14:L, reg c15:V, reg c17:L, reg writeLines:cls, reg nm4:*, reg nm5:V, reg p8:p(V +), reg con:*, reg con1:V, reg p9:p(V +), reg r41:V, reg i17:I, reg cat:cls, reg nm6:*, reg nm7:V, reg p10:p(V +), reg paste:cls, reg zz4:*, reg zz5:V, reg p11:p(V +), reg r45:V, reg p12:p(V +), reg con2:*, reg con3:V, reg p13:p(V +), reg r48:V, reg close:cls, reg con4:*, reg con5:V, reg p14:p(V +), reg r50:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r51:V, reg r52:V, reg invisible:cls, reg r53:V |
    mkenv;
    st pkgpath = pkgpath;
    force_isMissing = missing.0(force);
    if force_isMissing then L0(FALSE) else L0(force);
  L0(force_orDefault):
    st force = force_orDefault;
    small_size_isMissing = missing.0(small_size);
    if small_size_isMissing then L1() else L2(small_size);
  L1():
    p = prom<V +>{
      return 1048576.0;
    };
    goto L2(p);
  L2(small_size_orDefault):
    st `small.size` = small_size_orDefault;
    file_path = ldf `file.path`;
    check L21() else D0();
  D0():
    deopt 1 [];
  L21():
    p1 = prom<V +>{
      pkgpath1 = ld pkgpath;
      pkgpath2 = force? pkgpath1;
      checkMissing(pkgpath2);
      return pkgpath2;
    };
    r2 = dyn file_path(p1, "data", "datalist");
    check L22() else D1();
  D1():
    deopt 5 [r2];
  L22():
    st dlist = r2;
    force1 = ld force;
    check L23() else D2();
  D2():
    deopt 7 [force1];
  L23():
    force2 = force? force1;
    checkMissing(force2);
    r3 = `!`(force2);
    c = `as.logical`(r3);
    if c then L24() else L3(c);
  L3(c2):
    c6 = `as.logical`(c2);
    if c6 then L28() else L4();
  L24():
    file_exists = ldf `file.exists`;
    check L25() else D3();
  D3():
    deopt 11 [c];
  L4():
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L25():
    p2 = prom<V +>{
      dlist = ld dlist;
      dlist1 = force? dlist;
      checkMissing(dlist1);
      return dlist1;
    };
    r5 = dyn file_exists(p2);
    check L26() else D4();
  L28():
    popenv;
    return NULL;
  D4():
    deopt 13 [c, r5];
  L6(r9):
    st size = r9;
    size = ld size;
    check L36() else D8();
  L26():
    c3 = `as.logical`(r5);
    c4 = `&&`(c, c3);
    goto L3(c4);
  L31():
    file_size = ldf `file.size`;
    check L33() else D5();
  L32():
    r8 = dyn base(<lang file.size(Sys.glob(file.path(pkgpath, "data", "*")))>);
    goto L6(r8);
  D5():
    deopt 23 [];
  D8():
    deopt 29 [size];
  L33():
    p5 = prom<V +>{
      Sys_glob = ldf `Sys.glob`;
      p4 = prom<V +>{
        file_path1 = ldf `file.path`;
        p3 = prom<V +>{
          pkgpath3 = ld pkgpath;
          pkgpath4 = force? pkgpath3;
          checkMissing(pkgpath4);
          return pkgpath4;
        };
        r11 = dyn file_path1(p3, "data", "*");
        return r11;
      };
      r13 = dyn Sys_glob(p4);
      return r13;
    };
    r15 = dyn file_size(p5);
    check L34() else D6();
  L36():
    size1 = force? size;
    checkMissing(size1);
    small_size1 = ld `small.size`;
    check L37() else D9();
  D6():
    deopt 25 [r15];
  D9():
    deopt 30 [size1, small_size1];
  L34():
    sum = ldf sum in base;
    r16 = dyn sum(r15);
    check L35() else D7();
  L37():
    small_size2 = force? small_size1;
    checkMissing(small_size2);
    r17 = `<=`(size1, small_size2);
    c7 = `as.logical`(r17);
    if c7 then L38() else L7();
  D7():
    deopt 27 [r16];
  L7():
    list_data_in_pkg = ldf list_data_in_pkg;
    check L41() else D10();
  L35():
    goto L6(r16);
  L38():
    popenv;
    return NULL;
  D10():
    deopt 39 [];
  L41():
    p6 = prom<V +>{
      pkgpath5 = ld pkgpath;
      pkgpath6 = force? pkgpath5;
      checkMissing(pkgpath6);
      return pkgpath6;
    };
    r21 = dyn list_data_in_pkg[dir, use_datalist](p6, FALSE);
    check L42() else D11();
  D11():
    deopt 44 [r21];
  L42():
    st z = r21;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  L9(r23):
    r25 = `!`(r23);
    c8 = `as.logical`(r25);
    if c8 then L47() else L10();
  L43():
    z = ld z;
    check L45() else D12();
  L44():
    r22 = dyn base1(<sym z>);
    goto L9(r22);
  D12():
    deopt 48 [z];
  L10():
    file = ldf file;
    check L50() else D14();
  L45():
    z1 = force? z;
    checkMissing(z1);
    length = ldf length in base;
    r24 = dyn length(z1);
    check L46() else D13();
  L47():
    popenv;
    return NULL;
  D13():
    deopt 51 [r24];
  D14():
    deopt 59 [];
  L46():
    goto L9(r24);
  L50():
    p7 = prom<V +>{
      dlist2 = ld dlist;
      dlist3 = force? dlist2;
      checkMissing(dlist3);
      return dlist3;
    };
    r29 = dyn file(p7, "w");
    check L51() else D15();
  D15():
    deopt 62 [r29];
  L51():
    st con = r29;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L52() else L53();
  L12(r31):
    s = toForSeq(r31);
    l = length(s);
    i = 0;
    goto L13(i);
  L52():
    z2 = ld z;
    check L54() else D16();
  L53():
    r30 = dyn base2(<sym z>);
    goto L12(r30);
  D16():
    deopt 66 [z2];
  L13(i1):
    i2 = `+`.1(i1, 1);
    c9 = `<`.1(l, i2);
    if c9 then L56() else L19();
  L54():
    z3 = force? z2;
    checkMissing(z3);
    names = ldf names in base;
    r32 = dyn names(z3);
    check L55() else D17();
  D17():
    deopt 69 [r32];
  L19():
    x = `[[`(s, i2, NULL, TRUE);
    st nm = x;
    z4 = ld z;
    check L57() else D18();
  L55():
    goto L12(r32);
  L56():
    close = ldf close;
    check L76() else D28();
  D18():
    deopt 70 [i2, z4];
  D28():
    deopt 109 [];
  L57():
    z5 = force? z4;
    checkMissing(z5);
    c10 = `is.object`(z5);
    if c10 then L58() else L59(i2, z5);
  L76():
    p14 = prom<V +>{
      con4 = ld con;
      con5 = force? con4;
      checkMissing(con5);
      return con5;
    };
    r50 = dyn close(p14);
    check L77() else D29();
  D29():
    deopt 111 [r50];
  L14(i8, dx1):
    st zz = dx1;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L58():
    dr = tryDispatchBuiltin.1("[[", z5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L60() else L59(i2, dr);
  L59(i6, z7):
    nm = ld nm;
    check L61() else D19();
  L77():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L78() else L79();
  D19():
    deopt 72 [i6, z7, nm];
  L15(i11, r35):
    r37 = `==`(r35, 1);
    c11 = `as.logical`(r37);
    if c11 then L66() else L16(i11, c11);
  L20(r52):
    popenv;
    return r52;
  L60():
    dx = getTryDispatchBuiltinValue(dr);
    goto L14(i2, dx);
  L61():
    nm1 = force? nm;
    __ = ldf `[[` in base;
    r33 = dyn __(z7, nm1);
    goto L14(i6, r33);
  L62():
    zz = ld zz;
    check L64() else D20();
  L63():
    r34 = dyn base3(<sym zz>);
    goto L15(i8, r34);
  L78():
    invisible = ldf invisible in base;
    r53 = dyn invisible();
    check L80() else D30();
  L79():
    r51 = dyn base4();
    goto L20(r51);
  D20():
    deopt 78 [i8, zz];
  D30():
    deopt 115 [r53];
  L16(i13, c13):
    c17 = `as.logical`(c13);
    if c17 then L70() else L17();
  L64():
    zz1 = force? zz;
    checkMissing(zz1);
    length1 = ldf length in base;
    r36 = dyn length1(zz1);
    check L65() else D21();
  L66():
    zz2 = ld zz;
    check L67() else D22();
  L80():
    goto L20(r53);
  D21():
    deopt 81 [i8, r36];
  D22():
    deopt 84 [i11, c11, zz2];
  L17():
    cat = ldf cat;
    check L74() else D26();
  L18(i17):
    goto L13(i17);
  L65():
    goto L15(i8, r36);
  L67():
    zz3 = force? zz2;
    checkMissing(zz3);
    nm2 = ld nm;
    check L68() else D23();
  L70():
    writeLines = ldf writeLines;
    check L71() else D24();
  D23():
    deopt 85 [i11, c11, zz3, nm2];
  D24():
    deopt 90 [i13];
  D26():
    deopt 95 [i13];
  L68():
    nm3 = force? nm2;
    checkMissing(nm3);
    r38 = `==`(zz3, nm3);
    c14 = `as.logical`(r38);
    c15 = `&&`(c11, c14);
    goto L16(i11, c15);
  L71():
    p8 = prom<V +>{
      nm4 = ld nm;
      nm5 = force? nm4;
      checkMissing(nm5);
      return nm5;
    };
    p9 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r41 = dyn writeLines(p8, p9);
    check L72() else D25();
  L74():
    p10 = prom<V +>{
      nm6 = ld nm;
      nm7 = force? nm6;
      checkMissing(nm7);
      return nm7;
    };
    p12 = prom<V +>{
      paste = ldf paste;
      p11 = prom<V +>{
        zz4 = ld zz;
        zz5 = force? zz4;
        checkMissing(zz5);
        return zz5;
      };
      r45 = dyn paste[, collapse](p11, " ");
      return r45;
    };
    p13 = prom<V +>{
      con2 = ld con;
      con3 = force? con2;
      checkMissing(con3);
      return con3;
    };
    r48 = dyn cat[, , , , sep, file](p10, ": ", p12, "\n", "", p13);
    check L75() else D27();
  D25():
    deopt 93 [i13, r41];
  D27():
    deopt 104 [i13, r48];
  L72():
    goto L18(i13);
  L75():
    goto L18(i13);
  }
}