fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st iconvlist = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg iconv:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg int:*, reg int1:V, reg length:cls, reg r5:V, reg c:L, reg sort_int:cls, reg int2:*, reg int3:V, reg p:p(V +), reg r7:V, reg system_file:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg icfile:*, reg icfile1:V, reg nzchar:cls, reg r13:V, reg r14:V, reg c1:L, reg stop:cls, reg r15:V, reg readLines:cls, reg icfile2:*, reg icfile3:V, reg p1:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg ext:*, reg ext1:V, reg length1:cls, reg r21:V, reg r22:V, reg c2:L, reg stop1:cls, reg r23:V, reg grep:cls, reg ext2:*, reg ext3:V, reg p2:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg cnt:*, reg cnt1:V, reg length2:cls, reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg r34:V, reg ext4:*, reg ext5:V, reg length3:cls, reg r35:V, reg r36:V, reg r37:V, reg c3:L, reg grep1:cls, reg ext6:*, reg ext7:V, reg p3:p(V +), reg r39:V, reg sub:cls, reg ext8:*, reg ext9:V, reg p4:p(V +), reg r41:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg grepl:cls, reg ext10:*, reg ext11:V, reg p5:p(V +), reg r46:V, reg any:cls, reg r47:V, reg c4:L, reg gsub:cls, reg sub1:cls, reg ext12:*, reg ext13:V, reg p6:p(V +), reg r49:V, reg p7:p(V +), reg r51:V, reg sort_int1:cls, reg unlist:cls, reg strsplit:cls, reg ext14:*, reg ext15:V, reg p8:p(V +), reg r53:V, reg p9:p(V +), reg r55:V, reg p10:p(V +), reg r57:V |
    mkenv;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    st int = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L16():
    iconv = ldf iconv in base;
    r2 = dyn iconv(NULL, "", "", "", TRUE, FALSE);
    check L18() else D0();
  L17():
    r = dyn base(<lang iconv(NULL, "", "", "", TRUE, FALSE)>);
    goto L0(r);
  D0():
    deopt 9 [r2];
  L1(r4):
    c = `as.logical`(r4);
    if c then L23() else L2();
  L18():
    goto L0(r2);
  L19():
    int = ld int;
    check L21() else D1();
  L20():
    r3 = dyn base1(<sym int>);
    goto L1(r3);
  D1():
    deopt 13 [int];
  L2():
    system_file = ldf `system.file`;
    check L28() else D5();
  L21():
    int1 = force? int;
    checkMissing(int1);
    length = ldf length in base;
    r5 = dyn length(int1);
    check L22() else D2();
  L23():
    sort_int = ldf `sort.int`;
    check L24() else D3();
  D2():
    deopt 16 [r5];
  D3():
    deopt 18 [];
  D5():
    deopt 25 [];
  L22():
    goto L1(r5);
  L24():
    p = prom<V +>{
      int2 = ld int;
      int3 = force? int2;
      checkMissing(int3);
      return int3;
    };
    r7 = dyn sort_int(p);
    check L25() else D4();
  L28():
    r10 = dyn system_file[, package]("iconvlist", "utils");
    check L29() else D6();
  D4():
    deopt 20 [r7];
  D6():
    deopt 29 [r10];
  L25():
    popenv;
    return r7;
  L29():
    st icfile = r10;
    sym2 = ldf nzchar;
    base2 = ldf nzchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L4(r12):
    r14 = `!`(r12);
    c1 = `as.logical`(r14);
    if c1 then L34() else L5();
  L30():
    icfile = ld icfile;
    check L32() else D7();
  L31():
    r11 = dyn base2(<sym icfile>);
    goto L4(r11);
  D7():
    deopt 33 [icfile];
  L5():
    goto L6();
  L6():
    readLines = ldf readLines;
    check L38() else D11();
  L32():
    icfile1 = force? icfile;
    checkMissing(icfile1);
    nzchar = ldf nzchar in base;
    r13 = dyn nzchar(icfile1);
    check L33() else D8();
  L34():
    stop = ldf stop;
    check L35() else D9();
  D8():
    deopt 36 [r13];
  D9():
    deopt 39 [];
  D11():
    deopt 45 [];
  L33():
    goto L4(r13);
  L35():
    r15 = dyn stop("'iconvlist' is not available on this system");
    check L36() else D10();
  L38():
    p1 = prom<V +>{
      icfile2 = ld icfile;
      icfile3 = force? icfile2;
      checkMissing(icfile3);
      return icfile3;
    };
    r18 = dyn readLines(p1);
    check L39() else D12();
  D10():
    deopt 41 [r15];
  D12():
    deopt 47 [r18];
  L36():
    goto L6();
  L39():
    st ext = r18;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L7(r20):
    r22 = `!`(r20);
    c2 = `as.logical`(r22);
    if c2 then L44() else L8();
  L40():
    ext = ld ext;
    check L42() else D13();
  L41():
    r19 = dyn base3(<sym ext>);
    goto L7(r19);
  D13():
    deopt 51 [ext];
  L8():
    goto L9();
  L9():
    grep = ldf grep;
    check L48() else D17();
  L42():
    ext1 = force? ext;
    checkMissing(ext1);
    length1 = ldf length in base;
    r21 = dyn length1(ext1);
    check L43() else D14();
  L44():
    stop1 = ldf stop;
    check L45() else D15();
  D14():
    deopt 54 [r21];
  D15():
    deopt 57 [];
  D17():
    deopt 63 [];
  L43():
    goto L7(r21);
  L45():
    r23 = dyn stop1("'iconvlist' is not available on this system");
    check L46() else D16();
  L48():
    p2 = prom<V +>{
      ext2 = ld ext;
      ext3 = force? ext2;
      checkMissing(ext3);
      return ext3;
    };
    r26 = dyn grep("//$", p2);
    check L49() else D18();
  D16():
    deopt 59 [r23];
  D18():
    deopt 66 [r26];
  L46():
    goto L9();
  L49():
    st cnt = r26;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L10(r28):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L50():
    cnt = ld cnt;
    check L52() else D19();
  L51():
    r27 = dyn base4(<sym cnt>);
    goto L10(r27);
  D19():
    deopt 70 [cnt];
  L11(r33, r34):
    r36 = `/`(r33, r34);
    r37 = `>`(r36, 0.5);
    c3 = `as.logical`(r37);
    if c3 then L58() else L12();
  L52():
    cnt1 = force? cnt;
    checkMissing(cnt1);
    length2 = ldf length in base;
    r29 = dyn length2(cnt1);
    check L53() else D20();
  L54():
    ext4 = ld ext;
    check L56() else D21();
  L55():
    r32 = dyn base5(<sym ext>);
    goto L11(r28, r32);
  D20():
    deopt 73 [r29];
  D21():
    deopt 75 [r28, ext4];
  L12():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  L13():
    sort_int1 = ldf `sort.int`;
    check L73() else D32();
  L53():
    goto L10(r29);
  L56():
    ext5 = force? ext4;
    checkMissing(ext5);
    length3 = ldf length in base;
    r35 = dyn length3(ext5);
    check L57() else D22();
  L58():
    grep1 = ldf grep;
    check L59() else D23();
  D22():
    deopt 78 [r28, r35];
  D23():
    deopt 83 [];
  D32():
    deopt 118 [];
  L14(r44):
    c4 = `as.logical`(r44);
    if c4 then L69() else L15();
  L57():
    goto L11(r28, r35);
  L59():
    p3 = prom<V +>{
      ext6 = ld ext;
      ext7 = force? ext6;
      checkMissing(ext7);
      return ext7;
    };
    r39 = dyn grep1[, , value]("//$", p3, TRUE);
    check L60() else D24();
  L64():
    grepl = ldf grepl;
    check L66() else D27();
  L65():
    r43 = dyn base6(<lang grepl(",", ext, fixed=TRUE)>);
    goto L14(r43);
  L73():
    p10 = prom<V +>{
      unlist = ldf unlist;
      p9 = prom<V +>{
        strsplit = ldf strsplit;
        p8 = prom<V +>{
          ext14 = ld ext;
          ext15 = force? ext14;
          checkMissing(ext15);
          return ext15;
        };
        r53 = dyn strsplit(p8, "[[:space:]]");
        return r53;
      };
      r55 = dyn unlist(p9);
      return r55;
    };
    r57 = dyn sort_int1(p10);
    check L74() else D33();
  D24():
    deopt 88 [r39];
  D27():
    deopt 100 [];
  D33():
    deopt 120 [r57];
  L15():
    goto L13();
  L60():
    st ext = r39;
    sub = ldf sub;
    check L61() else D25();
  L66():
    p5 = prom<V +>{
      ext10 = ld ext;
      ext11 = force? ext10;
      checkMissing(ext11);
      return ext11;
    };
    r46 = dyn grepl[, , fixed](",", p5, TRUE);
    check L67() else D28();
  L69():
    gsub = ldf gsub;
    check L70() else D30();
  L74():
    popenv;
    return r57;
  D25():
    deopt 91 [];
  D28():
    deopt 105 [r46];
  D30():
    deopt 109 [];
  L61():
    p4 = prom<V +>{
      ext8 = ld ext;
      ext9 = force? ext8;
      checkMissing(ext9);
      return ext9;
    };
    r41 = dyn sub("//$", "", p4);
    check L62() else D26();
  L67():
    any = ldf any in base;
    r47 = dyn any(r46);
    check L68() else D29();
  L70():
    p7 = prom<V +>{
      sub1 = ldf sub;
      p6 = prom<V +>{
        ext12 = ld ext;
        ext13 = force? ext12;
        checkMissing(ext13);
        return ext13;
      };
      r49 = dyn sub1(",$", "", p6);
      return r49;
    };
    r51 = dyn gsub(",[[:space:]]", " ", p7);
    check L71() else D31();
  D26():
    deopt 95 [r41];
  D29():
    deopt 107 [r47];
  D31():
    deopt 113 [r51];
  L62():
    st ext = r41;
    goto L13();
  L68():
    goto L14(r47);
  L71():
    st ext = r51;
    goto L13();
  }
}