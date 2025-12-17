fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner744013057;
    st `.check_package_datasets` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner744013057(pkgDir) {
  (reg pkgDir:*) -+> V { var pkgDir:*, reg Sys_getlocale:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg Sys_setlocale:cls, reg r4:V, reg options:cls, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg on_exit1:cls, reg r9:V, reg r10:cls, reg sink:cls, reg tempfile:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg on_exit2:cls, reg r16:V, reg list_files_with_type:cls, reg file_path:cls, reg pkgDir1:*, reg pkgDir2:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg r20:V, reg unique:cls, reg basename:cls, reg file_path_sans_ext:cls, reg files:*, reg files1:V, reg p4:p(V +), reg r22:V, reg p5:p(V +), reg r24:V, reg p6:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg files2:*, reg files3:V, reg length:cls, reg r31:V, reg vector:cls, reg r32:V, reg new_env:cls, reg r33:V, reg files4:*, reg files5:V, reg l:*, reg names__:cls, reg r34:V, reg setwd:cls, reg pkgDir3:*, reg pkgDir4:V, reg p7:p(V +), reg r36:V, reg r37:cls, reg files6:*, reg files7:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg sprintf:cls, reg sQuote:cls, reg f:*, reg f1:V, reg p8:p(V +), reg r39:V, reg p9:p(V +), reg r41:V, reg _try:cls, reg __:cls, reg r42:V, reg r43:cls, reg f2:*, reg f3:V, reg p10:p(V +), reg character:cls, reg r45:V, reg p11:p(V +), reg dataEnv:*, reg dataEnv1:V, reg p12:p(V +), reg r48:V, reg p13:p(V +), reg msg:*, reg msg1:V, reg p14:p(V +), reg r51:V, reg setwd1:cls, reg old:*, reg old1:V, reg p15:p(V +), reg r53:V, reg character1:cls, reg r54:V, reg ls:cls, reg dataEnv2:*, reg dataEnv3:V, reg p16:p(V +), reg r56:V, reg s1:V, reg l2:I, reg i5:I, reg i6:I, reg i7:I, reg c1:L, reg x1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg i12:I, reg r58:V, reg suppressWarnings:cls, reg suppressMessages:cls, reg try:cls, reg check_one:cls, reg get:cls, reg ds:*, reg ds1:V, reg p17:p(V +), reg dataEnv4:*, reg dataEnv5:V, reg p18:p(V +), reg r61:V, reg p19:p(V +), reg ds2:*, reg ds3:V, reg p20:p(V +), reg r64:V, reg p21:p(V +), reg r66:V, reg p22:p(V +), reg r68:V, reg p23:p(V +), reg r70:V, reg inherits:cls, reg r71:V, reg c2:L, reg sprintf1:cls, reg sQuote1:cls, reg ds4:*, reg ds5:V, reg p24:p(V +), reg r73:V, reg p25:p(V +), reg r75:V, reg message:cls, reg msg2:*, reg msg3:V, reg p26:p(V +), reg geterrmessage:cls, reg r77:V, reg p27:p(V +), reg r79:V, reg i15:I, reg unique1:cls, reg cbind:cls, reg non_ASCII:*, reg non_ASCII1:V, reg p28:p(V +), reg where:*, reg where1:V, reg p29:p(V +), reg r83:V, reg p30:p(V +), reg r85:V, reg structure:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r86:V, reg r87:V, reg latin1:*, reg latin2:V, reg utf8:*, reg utf9:V, reg bytes:*, reg bytes1:V, reg unknown:*, reg unknown1:V, reg list:cls, reg r88:V, reg p31:p(V +), reg r90:V |
    mkenv;
    st pkgDir = pkgDir;
    Sys_getlocale = ldf `Sys.getlocale`;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    r = dyn Sys_getlocale("LC_CTYPE");
    check L13() else D1();
  D1():
    deopt 3 [r];
  L13():
    st oLC_ct = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0():
    Sys_setlocale = ldf `Sys.setlocale`;
    check L16() else D2();
  L14():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang Sys.setlocale("LC_CTYPE", oLC_ct)>);
    goto L0();
  L15():
    r1 = dyn base(<lang Sys.setlocale("LC_CTYPE", oLC_ct)>);
    goto L0();
  D2():
    deopt 9 [];
  L16():
    r4 = dyn Sys_setlocale("LC_CTYPE", "C");
    check L17() else D3();
  D3():
    deopt 12 [r4];
  L17():
    options = ldf options;
    check L18() else D4();
  D4():
    deopt 14 [];
  L18():
    p = prom<V +>{
      return -1.0;
    };
    r6 = dyn options[warn](p);
    check L19() else D5();
  D5():
    deopt 17 [r6];
  L19():
    st oop = r6;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L1():
    r10 = clos inner3308368823;
    st check_one = r10;
    sink = ldf sink;
    check L22() else D6();
  L20():
    on_exit1 = ldf `on.exit` in base;
    r9 = dyn on_exit1(<lang options(oop)>, TRUE);
    goto L1();
  L21():
    r7 = dyn base1[, add](<lang options(oop)>, TRUE);
    goto L1();
  D6():
    deopt 26 [];
  L22():
    p1 = prom<V +>{
      tempfile = ldf tempfile;
      r11 = dyn tempfile();
      return r11;
    };
    r13 = dyn sink(p1);
    check L23() else D7();
  D7():
    deopt 28 [r13];
  L23():
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L2():
    list_files_with_type = ldf list_files_with_type;
    check L26() else D8();
  L24():
    on_exit2 = ldf `on.exit` in base;
    r16 = dyn on_exit2(<lang sink()>, TRUE);
    goto L2();
  L25():
    r14 = dyn base2[, add](<lang sink()>, TRUE);
    goto L2();
  D8():
    deopt 33 [];
  L26():
    p3 = prom<V +>{
      file_path = ldf `file.path`;
      p2 = prom<V +>{
        pkgDir1 = ld pkgDir;
        pkgDir2 = force? pkgDir1;
        checkMissing(pkgDir2);
        return pkgDir2;
      };
      r18 = dyn file_path(p2, "data");
      return r18;
    };
    r20 = dyn list_files_with_type(p3, "data");
    check L27() else D9();
  D9():
    deopt 36 [r20];
  L27():
    st files = r20;
    unique = ldf unique;
    check L28() else D10();
  D10():
    deopt 39 [];
  L28():
    p6 = prom<V +>{
      basename = ldf basename;
      p5 = prom<V +>{
        file_path_sans_ext = ldf file_path_sans_ext;
        p4 = prom<V +>{
          files = ld files;
          files1 = force? files;
          checkMissing(files1);
          return files1;
        };
        r22 = dyn file_path_sans_ext(p4);
        return r22;
      };
      r24 = dyn basename(p5);
      return r24;
    };
    r26 = dyn unique(p6);
    check L29() else D11();
  D11():
    deopt 41 [r26];
  L29():
    st files = r26;
    sym3 = ldf vector;
    base3 = ldf vector in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L3(r28):
    st ans = r28;
    new_env = ldf `new.env`;
    check L37() else D15();
  L30():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L32() else L33();
  L31():
    r27 = dyn base3("list", <lang length(files)>);
    goto L3(r27);
  D15():
    deopt 56 [];
  L4(r30):
    vector = ldf vector in base;
    r32 = dyn vector("list", r30);
    check L36() else D14();
  L32():
    files2 = ld files;
    check L34() else D12();
  L33():
    r29 = dyn base4(<sym files>);
    goto L4(r29);
  L37():
    r33 = dyn new_env[hash](TRUE);
    check L38() else D16();
  D12():
    deopt 48 [files2];
  D14():
    deopt 53 [r32];
  D16():
    deopt 59 [r33];
  L34():
    files3 = force? files2;
    checkMissing(files3);
    length = ldf length in base;
    r31 = dyn length(files3);
    check L35() else D13();
  L36():
    goto L3(r32);
  L38():
    st dataEnv = r33;
    files4 = ld files;
    check L39() else D17();
  D13():
    deopt 51 [r31];
  D17():
    deopt 61 [files4];
  L35():
    goto L4(r31);
  L39():
    files5 = force? files4;
    checkMissing(files5);
    l = ld ans;
    names__ = ldf `names<-`;
    check L40() else D18();
  D18():
    deopt 64 [files5, l, files5];
  L40():
    r34 = dyn names__(l, NULL, files5);
    check L41() else D19();
  D19():
    deopt 66 [files5, r34];
  L41():
    st ans = r34;
    setwd = ldf setwd;
    check L42() else D20();
  D20():
    deopt 69 [];
  L42():
    p7 = prom<V +>{
      pkgDir3 = ld pkgDir;
      pkgDir4 = force? pkgDir3;
      checkMissing(pkgDir4);
      return pkgDir4;
    };
    r36 = dyn setwd(p7);
    check L43() else D21();
  D21():
    deopt 71 [r36];
  L43():
    st old = r36;
    r37 = clos inner417981748;
    st `.try` = r37;
    files6 = ld files;
    check L44() else D22();
  D22():
    deopt 76 [files6];
  L44():
    files7 = force? files6;
    checkMissing(files7);
    s = toForSeq(files7);
    l1 = length(s);
    i = 0;
    goto L5(i);
  L5(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l1, i2);
    if c then L45() else L6();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    sprintf = ldf sprintf;
    check L46() else D23();
  L45():
    setwd1 = ldf setwd;
    check L50() else D27();
  D23():
    deopt 79 [i2];
  D27():
    deopt 93 [];
  L46():
    p9 = prom<V +>{
      sQuote = ldf sQuote;
      p8 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      r39 = dyn sQuote(p8);
      return r39;
    };
    r41 = dyn sprintf("Error loading dataset %s: ", p9);
    check L47() else D24();
  L50():
    p15 = prom<V +>{
      old = ld old;
      old1 = force? old;
      checkMissing(old1);
      return old1;
    };
    r53 = dyn setwd1(p15);
    check L51() else D28();
  D24():
    deopt 82 [i2, r41];
  D28():
    deopt 95 [r53];
  L47():
    st msg = r41;
    _try = ldf `.try`;
    check L48() else D25();
  L51():
    character1 = ldf character;
    check L52() else D29();
  D25():
    deopt 85 [i2];
  D29():
    deopt 97 [];
  L48():
    p13 = prom<V +>{
      __ = ldf `::`;
      r42 = dyn __("utils", "data");
      checkFun.0(r42);
      r43 = r42 as cls;
      p10 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      p11 = prom<V +>{
        character = ldf character;
        r45 = dyn character();
        return r45;
      };
      p12 = prom<V +>{
        dataEnv = ld dataEnv;
        dataEnv1 = force? dataEnv;
        checkMissing(dataEnv1);
        return dataEnv1;
      };
      r48 = dyn r43[list, package, envir](p10, p11, p12);
      return r48;
    };
    p14 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r51 = dyn _try(p13, p14);
    check L49() else D26();
  L52():
    r54 = dyn character1();
    check L53() else D30();
  D26():
    deopt 88 [i2, r51];
  D30():
    deopt 98 [r54];
  L49():
    goto L5(i2);
  L53():
    st where = r54;
    st non_ASCII = r54;
    st bytes = 0;
    st utf8 = 0;
    st latin1 = 0;
    ls = ldf ls;
    check L54() else D31();
  D31():
    deopt 107 [];
  L54():
    p16 = prom<V +>{
      dataEnv2 = ld dataEnv;
      dataEnv3 = force? dataEnv2;
      checkMissing(dataEnv3);
      return dataEnv3;
    };
    r56 = dyn ls[envir, `all.names`](p16, TRUE);
    check L55() else D32();
  D32():
    deopt 112 [r56];
  L55():
    s1 = toForSeq(r56);
    l2 = length(s1);
    i5 = 0;
    goto L7(i5);
  L7(i6):
    i7 = `+`.1(i6, 1);
    c1 = `<`.1(l2, i7);
    if c1 then L56() else L11();
  L11():
    x1 = `[[`(s1, i7, NULL, TRUE);
    st ds = x1;
    sym5 = ldf inherits;
    base5 = ldf inherits in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L56():
    unique1 = ldf unique;
    check L68() else D40();
  D40():
    deopt 140 [];
  L8(i12, r58):
    c2 = `as.logical`(r58);
    if c2 then L62() else L9();
  L57():
    suppressWarnings = ldf suppressWarnings;
    check L59() else D33();
  L58():
    r57 = dyn base5(<lang suppressWarnings(suppressMessages(try(check_one(get(ds, envir=dataEnv), ds), silent=TRUE)))>, "try-error");
    goto L8(i7, r57);
  L68():
    p30 = prom<V +>{
      cbind = ldf cbind;
      p28 = prom<V +>{
        non_ASCII = ld non_ASCII;
        non_ASCII1 = force? non_ASCII;
        checkMissing(non_ASCII1);
        return non_ASCII1;
      };
      p29 = prom<V +>{
        where = ld where;
        where1 = force? where;
        checkMissing(where1);
        return where1;
      };
      r83 = dyn cbind(p28, p29);
      return r83;
    };
    r85 = dyn unique1(p30);
    check L69() else D41();
  D33():
    deopt 116 [i7];
  D41():
    deopt 142 [r85];
  L9():
    goto L10(i12);
  L10(i15):
    goto L7(i15);
  L59():
    p23 = prom<V +>{
      suppressMessages = ldf suppressMessages;
      p22 = prom<V +>{
        try = ldf try;
        p21 = prom<V +>{
          check_one = ldf check_one;
          p19 = prom<V +>{
            get = ldf get;
            p17 = prom<V +>{
              ds = ld ds;
              ds1 = force? ds;
              checkMissing(ds1);
              return ds1;
            };
            p18 = prom<V +>{
              dataEnv4 = ld dataEnv;
              dataEnv5 = force? dataEnv4;
              checkMissing(dataEnv5);
              return dataEnv5;
            };
            r61 = dyn get[, envir](p17, p18);
            return r61;
          };
          p20 = prom<V +>{
            ds2 = ld ds;
            ds3 = force? ds2;
            checkMissing(ds3);
            return ds3;
          };
          r64 = dyn check_one(p19, p20);
          return r64;
        };
        r66 = dyn try[, silent](p21, TRUE);
        return r66;
      };
      r68 = dyn suppressMessages(p22);
      return r68;
    };
    r70 = dyn suppressWarnings(p23);
    check L60() else D34();
  L62():
    sprintf1 = ldf sprintf;
    check L63() else D36();
  L69():
    st unknown = r85;
    structure = ldf structure;
    check L70() else D42();
  D34():
    deopt 118 [i7, r70];
  D36():
    deopt 124 [i12];
  D42():
    deopt 145 [];
  L60():
    inherits = ldf inherits in base;
    r71 = dyn inherits(r70, "try-error", FALSE);
    check L61() else D35();
  L63():
    p25 = prom<V +>{
      sQuote1 = ldf sQuote;
      p24 = prom<V +>{
        ds4 = ld ds;
        ds5 = force? ds4;
        checkMissing(ds5);
        return ds5;
      };
      r73 = dyn sQuote1(p24);
      return r73;
    };
    r75 = dyn sprintf1("Error loading dataset %s:\n ", p25);
    check L64() else D37();
  L70():
    p31 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      latin1 = ld latin1;
      latin2 = force? latin1;
      checkMissing(latin2);
      utf8 = ld utf8;
      utf9 = force? utf8;
      checkMissing(utf9);
      bytes = ld bytes;
      bytes1 = force? bytes;
      checkMissing(bytes1);
      unknown = ld unknown;
      unknown1 = force? unknown;
      checkMissing(unknown1);
      list = ldf list in base;
      r88 = dyn list(latin2, utf9, bytes1, unknown1);
      goto L0(r88);
    L2():
      r86 = dyn base6[latin1, utf8, bytes, unknown](<sym latin1>, <sym utf8>, <sym bytes>, <sym unknown>);
      goto L0(r86);
    };
    r90 = dyn structure[, class](p31, "check_package_datasets");
    check L71() else D43();
  D35():
    deopt 122 [i7, r71];
  D37():
    deopt 127 [i12, r75];
  D43():
    deopt 149 [r90];
  L61():
    goto L8(i7, r71);
  L64():
    st msg = r75;
    message = ldf message;
    check L65() else D38();
  L71():
    popenv;
    return r90;
  D38():
    deopt 130 [i12];
  L65():
    p26 = prom<V +>{
      msg2 = ld msg;
      msg3 = force? msg2;
      checkMissing(msg3);
      return msg3;
    };
    p27 = prom<V +>{
      geterrmessage = ldf geterrmessage;
      r77 = dyn geterrmessage();
      return r77;
    };
    r79 = dyn message(p26, p27);
    check L66() else D39();
  D39():
    deopt 133 [i12, r79];
  L66():
    goto L10(i12);
  }
}
fun inner3308368823(x, ds) {
  (reg x:*, reg ds:*) -+> V { var x:*, var ds:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg is_list:cls, reg r8:V, reg c1:L, reg lapply:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg unclass:cls, reg r11:V, reg p:p(V +), reg check_one:*, reg check_one1:V, reg p1:p(V +), reg ds1:*, reg ds2:V, reg p2:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg x7:*, reg x8:V, reg c2:L, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg x9:*, reg x10:V, reg unclass1:cls, reg r21:V, reg Encoding:cls, reg xx:*, reg xx1:V, reg p3:p(V +), reg r23:V, reg latin1:*, reg latin2:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg latin5:V, reg r25:V, reg enc:*, reg enc1:V, reg r26:V, reg sum:cls, reg r27:V, reg r28:V, reg utf8:*, reg utf9:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg utf12:V, reg r30:V, reg enc2:*, reg enc3:V, reg r31:V, reg sum1:cls, reg r32:V, reg r33:V, reg bytes:*, reg bytes1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg bytes4:V, reg r35:V, reg enc4:*, reg enc5:V, reg r36:V, reg sum2:cls, reg r37:V, reg r38:V, reg xx2:*, reg xx3:V, reg c4:L, reg xx5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg enc6:*, reg enc7:V, reg r39:V, reg __:cls, reg r40:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg r42:V, reg C_check_nonASCII2:*, reg C_check_nonASCII3:V, reg unk:*, reg unk1:V, reg vargs:dots, reg r43:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r44:V, reg r45:V, reg ind:*, reg ind1:V, reg length1:cls, reg r46:V, reg c5:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg r48:V, reg non_ASCII:*, reg non_ASCII1:V, reg unk2:*, reg unk3:V, reg c6:L, reg unk5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r49:V, reg c7:cls, reg r50:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg r52:V, reg where:*, reg where1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r53:V, reg r54:V, reg ds3:*, reg ds4:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r55:V, reg r56:V, reg ind4:*, reg ind5:V, reg length2:cls, reg r57:V, reg rep_int:cls, reg r58:V, reg c8:cls, reg r59:V, reg r60:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r62:V, reg r63:V, reg x11:*, reg x12:V, reg attributes:cls, reg r64:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r65:V, reg r66:V, reg a:*, reg a1:V, reg c9:V, reg r67:V, reg c10:L, reg lapply1:cls, reg a2:*, reg a3:V, reg p4:p(V +), reg check_one2:*, reg check_one3:V, reg p5:p(V +), reg ds5:*, reg ds6:V, reg p6:p(V +), reg r71:V, reg check_one4:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r72:V, reg r73:V, reg a4:*, reg a5:V, reg names:cls, reg r74:V, reg p7:p(V +), reg ds7:*, reg ds8:V, reg p8:p(V +), reg r77:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r79:V, reg r80:V, reg invisible:cls, reg r81:V |
    mkenv;
    st x = x;
    st ds = ds;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L32() else L1();
  L28():
    x1 = ld x;
    check L30() else D0();
  L29():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L30():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L31() else D1();
  L32():
    popenv;
    return NULL;
  D1():
    deopt 5 [r2];
  L3(r7):
    c1 = `as.logical`(r7);
    if c1 then L39() else L4();
  L31():
    goto L0(r2);
  L35():
    x3 = ld x;
    check L37() else D2();
  L36():
    r6 = dyn base1(<sym x>);
    goto L3(r6);
  D2():
    deopt 14 [x3];
  L4():
    goto L5();
  L5():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L37():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r8 = dyn is_list(x4);
    check L38() else D3();
  L39():
    lapply = ldf lapply;
    check L40() else D4();
  D3():
    deopt 17 [r8];
  D4():
    deopt 19 [];
  L6(r18):
    c3 = `as.logical`(r18);
    if c3 then L46() else L7();
  L38():
    goto L3(r8);
  L40():
    p = prom<V +>{
      sym2 = ldf unclass;
      base2 = ldf unclass in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      unclass = ldf unclass in base;
      r11 = dyn unclass(x6);
      goto L0(r11);
    L2():
      r9 = dyn base2(<sym x>);
      goto L0(r9);
    };
    p1 = prom<V +>{
      check_one = ld check_one;
      check_one1 = force? check_one;
      checkMissing(check_one1);
      return check_one1;
    };
    p2 = prom<V +>{
      ds1 = ld ds;
      ds2 = force? ds1;
      checkMissing(ds2);
      return ds2;
    };
    r15 = dyn lapply[, , ds](p, p1, p2);
    check L41() else D5();
  L43():
    x7 = ld x;
    check L45() else D6();
  L44():
    r17 = dyn base3(<sym x>);
    goto L6(r17);
  D5():
    deopt 24 [r15];
  D6():
    deopt 28 [x7];
  L7():
    goto L22();
  L22():
    sym14 = ldf attributes;
    base14 = ldf attributes in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L105() else L106();
  L41():
    goto L5();
  L45():
    x8 = force? x7;
    checkMissing(x8);
    c2 = `is.character`(x8);
    goto L6(c2);
  L46():
    sym4 = ldf unclass;
    base4 = ldf unclass in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L8(r20):
    st xx = r20;
    Encoding = ldf Encoding;
    check L51() else D9();
  L23(r63):
    st a = r63;
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L109() else L110();
  L47():
    x9 = ld x;
    check L49() else D7();
  L48():
    r19 = dyn base4(<sym x>);
    goto L8(r19);
  L105():
    x11 = ld x;
    check L107() else D36();
  L106():
    r62 = dyn base14(<sym x>);
    goto L23(r62);
  D7():
    deopt 33 [x9];
  D9():
    deopt 39 [];
  D36():
    deopt 133 [x11];
  L24(r66):
    r67 = `!`(r66);
    c10 = `as.logical`(r67);
    if c10 then L112() else L25();
  L49():
    x10 = force? x9;
    checkMissing(x10);
    unclass1 = ldf unclass in base;
    r21 = dyn unclass1(x10);
    check L50() else D8();
  L51():
    p3 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    r23 = dyn Encoding(p3);
    check L52() else D10();
  L107():
    x12 = force? x11;
    checkMissing(x12);
    attributes = ldf attributes in base;
    r64 = dyn attributes(x12);
    check L108() else D37();
  L109():
    a = ld a;
    check L111() else D38();
  L110():
    r65 = dyn base15(<sym a>);
    goto L24(r65);
  D8():
    deopt 36 [r21];
  D10():
    deopt 41 [r23];
  D37():
    deopt 136 [r64];
  D38():
    deopt 139 [a];
  L25():
    goto L26();
  L26():
    sym17 = ldf invisible;
    base17 = ldf invisible in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L118() else L119();
  L50():
    goto L8(r21);
  L52():
    st enc = r23;
    latin1 = ld latin1;
    check L53() else D11();
  L108():
    goto L23(r64);
  L111():
    a1 = force? a;
    checkMissing(a1);
    c9 = `==`(a1, NULL);
    goto L24(c9);
  L112():
    lapply1 = ldf lapply;
    check L113() else D39();
  D11():
    deopt 43 [latin1];
  D39():
    deopt 144 [];
  L27(r80):
    popenv;
    return r80;
  L53():
    latin2 = force? latin1;
    checkMissing(latin2);
    sym5 = ldf sum;
    base5 = ldf sum in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L113():
    p4 = prom<V +>{
      a2 = ld a;
      a3 = force? a2;
      checkMissing(a3);
      return a3;
    };
    p5 = prom<V +>{
      check_one2 = ld check_one;
      check_one3 = force? check_one2;
      checkMissing(check_one3);
      return check_one3;
    };
    p6 = prom<V +>{
      ds5 = ld ds;
      ds6 = force? ds5;
      checkMissing(ds6);
      return ds6;
    };
    r71 = dyn lapply1[, , ds](p4, p5, p6);
    check L114() else D40();
  L118():
    invisible = ldf invisible in base;
    r81 = dyn invisible();
    check L120() else D43();
  L119():
    r79 = dyn base17();
    goto L27(r79);
  D40():
    deopt 149 [r71];
  D43():
    deopt 160 [r81];
  L9(latin5, r25):
    r28 = `+`(latin5, r25);
    sst latin1 = r28;
    utf8 = ld utf8;
    check L58() else D14();
  L54():
    enc = ld enc;
    check L56() else D12();
  L55():
    r24 = dyn base5(<lang `==`(enc, "latin1")>);
    goto L9(latin2, r24);
  L114():
    check_one4 = ldf check_one;
    check L115() else D41();
  L120():
    goto L27(r81);
  D12():
    deopt 46 [latin2, enc];
  D14():
    deopt 54 [utf8];
  D41():
    deopt 151 [];
  L56():
    enc1 = force? enc;
    checkMissing(enc1);
    r26 = `==`(enc1, "latin1");
    sum = ldf sum in base;
    r27 = dyn sum(r26);
    check L57() else D13();
  L58():
    utf9 = force? utf8;
    checkMissing(utf9);
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L115():
    p7 = prom<V +>{
      sym16 = ldf names;
      base16 = ldf names in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r73):
      return r73;
    L1():
      a4 = ld a;
      a5 = force? a4;
      checkMissing(a5);
      names = ldf names in base;
      r74 = dyn names(a5);
      goto L0(r74);
    L2():
      r72 = dyn base16(<sym a>);
      goto L0(r72);
    };
    p8 = prom<V +>{
      ds7 = ld ds;
      ds8 = force? ds7;
      checkMissing(ds8);
      return ds8;
    };
    r77 = dyn check_one4(p7, p8);
    check L116() else D42();
  D13():
    deopt 51 [latin2, r27];
  D42():
    deopt 154 [r77];
  L10(utf12, r30):
    r33 = `+`(utf12, r30);
    sst utf8 = r33;
    bytes = ld bytes;
    check L63() else D17();
  L57():
    goto L9(latin2, r27);
  L59():
    enc2 = ld enc;
    check L61() else D15();
  L60():
    r29 = dyn base6(<lang `==`(enc, "UTF-8")>);
    goto L10(utf9, r29);
  L116():
    goto L26();
  D15():
    deopt 57 [utf9, enc2];
  D17():
    deopt 65 [bytes];
  L61():
    enc3 = force? enc2;
    checkMissing(enc3);
    r31 = `==`(enc3, "UTF-8");
    sum1 = ldf sum in base;
    r32 = dyn sum1(r31);
    check L62() else D16();
  L63():
    bytes1 = force? bytes;
    checkMissing(bytes1);
    sym7 = ldf sum;
    base7 = ldf sum in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  D16():
    deopt 62 [utf9, r32];
  L11(bytes4, r35):
    r38 = `+`(bytes4, r35);
    sst bytes = r38;
    xx2 = ld xx;
    check L68() else D20();
  L62():
    goto L10(utf9, r32);
  L64():
    enc4 = ld enc;
    check L66() else D18();
  L65():
    r34 = dyn base7(<lang `==`(enc, "bytes")>);
    goto L11(bytes1, r34);
  D18():
    deopt 68 [bytes1, enc4];
  D20():
    deopt 76 [xx2];
  L66():
    enc5 = force? enc4;
    checkMissing(enc5);
    r36 = `==`(enc5, "bytes");
    sum2 = ldf sum in base;
    r37 = dyn sum2(r36);
    check L67() else D19();
  L68():
    xx3 = force? xx2;
    checkMissing(xx3);
    c4 = `is.object`(xx3);
    if c4 then L69() else L70(xx3);
  D19():
    deopt 73 [bytes1, r37];
  L12(dx1):
    st unk = dx1;
    sym8 = ldf `.Call`;
    base8 = ldf `.Call` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L67():
    goto L11(bytes1, r37);
  L69():
    dr = tryDispatchBuiltin.1("[", xx3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L71() else L70(dr);
  L70(xx5):
    enc6 = ld enc;
    check L72() else D21();
  D21():
    deopt 78 [xx5, enc6];
  L13(r42):
    st ind = r42;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L77() else L78();
  L71():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L72():
    enc7 = force? enc6;
    checkMissing(enc7);
    r39 = `==`(enc7, "unknown");
    __ = ldf `[` in base;
    r40 = dyn __(xx5, r39);
    goto L12(r40);
  L73():
    C_check_nonASCII2 = ld C_check_nonASCII2;
    check L75() else D22();
  L74():
    r41 = dyn base8(<sym C_check_nonASCII2>, <sym unk>);
    goto L13(r41);
  D22():
    deopt 85 [C_check_nonASCII2];
  L14(r45):
    c5 = `as.logical`(r45);
    if c5 then L81() else L15();
  L75():
    C_check_nonASCII3 = force? C_check_nonASCII2;
    checkMissing(C_check_nonASCII3);
    unk = ld unk;
    check L76() else D23();
  L77():
    ind = ld ind;
    check L79() else D24();
  L78():
    r44 = dyn base9(<sym ind>);
    goto L14(r44);
  D23():
    deopt 86 [C_check_nonASCII3, unk];
  D24():
    deopt 92 [ind];
  L15():
    goto L21(NULL);
  L21(r60):
    goto L22();
  L76():
    unk1 = force? unk;
    checkMissing(unk1);
    vargs = dots[unk1];
    r43 = `.Call`(C_check_nonASCII3, vargs, <missing>);
    goto L13(r43);
  L79():
    ind1 = force? ind;
    checkMissing(ind1);
    length1 = ldf length in base;
    r46 = dyn length1(ind1);
    check L80() else D25();
  L81():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L82() else L83();
  D25():
    deopt 95 [r46];
  L16(r48):
    sst non_ASCII = r48;
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L91() else L92();
  L80():
    goto L14(r46);
  L82():
    non_ASCII = ld non_ASCII;
    check L84() else D26();
  L83():
    r47 = dyn base10(<sym non_ASCII>, <lang `[`(unk, ind)>);
    goto L16(r47);
  D26():
    deopt 98 [non_ASCII];
  L18(r52):
    sst where = r52;
    goto L21(r52);
  L84():
    non_ASCII1 = force? non_ASCII;
    checkMissing(non_ASCII1);
    unk2 = ld unk;
    check L85() else D27();
  L91():
    where = ld where;
    check L93() else D30();
  L92():
    r51 = dyn base11(<sym where>, <lang rep.int(ds, length(ind))>);
    goto L18(r51);
  D27():
    deopt 100 [unk2];
  D30():
    deopt 110 [where];
  L85():
    unk3 = force? unk2;
    checkMissing(unk3);
    c6 = `is.object`(unk3);
    if c6 then L86() else L87(unk3);
  L93():
    where1 = force? where;
    checkMissing(where1);
    sym12 = ldf `rep.int`;
    base12 = ldf `rep.int` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L94() else L95();
  L17(dx3):
    c7 = ldf c in base;
    r50 = dyn c7(non_ASCII1, dx3);
    check L90() else D29();
  L19(r54):
    c8 = ldf c in base;
    r59 = dyn c8(where1, r54);
    check L102() else D35();
  L86():
    dr2 = tryDispatchBuiltin.1("[", unk3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(dr2);
  L87(unk5):
    ind2 = ld ind;
    check L89() else D28();
  L94():
    ds3 = ld ds;
    check L96() else D31();
  L95():
    r53 = dyn base12(<sym ds>, <lang length(ind)>);
    goto L19(r53);
  D28():
    deopt 102 [unk5, ind2];
  D29():
    deopt 106 [r50];
  D31():
    deopt 114 [ds3];
  D35():
    deopt 125 [r59];
  L88():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L17(dx2);
  L89():
    ind3 = force? ind2;
    __1 = ldf `[` in base;
    r49 = dyn __1(unk5, ind3);
    goto L17(r49);
  L90():
    goto L16(r50);
  L96():
    ds4 = force? ds3;
    checkMissing(ds4);
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L97() else L98();
  L102():
    goto L18(r59);
  L20(r56):
    rep_int = ldf `rep.int` in base;
    r58 = dyn rep_int(ds4, r56);
    check L101() else D34();
  L97():
    ind4 = ld ind;
    check L99() else D32();
  L98():
    r55 = dyn base13(<sym ind>);
    goto L20(r55);
  D32():
    deopt 118 [ind4];
  D34():
    deopt 123 [r58];
  L99():
    ind5 = force? ind4;
    checkMissing(ind5);
    length2 = ldf length in base;
    r57 = dyn length2(ind5);
    check L100() else D33();
  L101():
    goto L19(r58);
  D33():
    deopt 121 [r57];
  L100():
    goto L20(r57);
  }
}
fun inner417981748(expr, msg) {
  (reg expr:*, reg msg:*) -+> V { var expr:*, var msg:*, reg options:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg file:cls, reg r4:V, reg sink:cls, reg outConn:*, reg outConn1:V, reg p:p(V +), reg r6:V, reg sink1:cls, reg outConn2:*, reg outConn3:V, reg p1:p(V +), reg r8:V, reg tryCatch:cls, reg withRestarts:cls, reg withCallingHandlers:cls, reg expr1:*, reg expr2:V, reg p2:p(V +), reg r10:cls, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:cls, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg identity:*, reg identity1:V, reg p7:p(V +), reg sink2:cls, reg sink3:cls, reg close:cls, reg outConn4:*, reg outConn5:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V |
    mkenv;
    st expr = expr;
    st msg = msg;
    options = ldf options;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn options[warn](1.0);
    check L2() else D1();
  D1():
    deopt 4 [r];
  L2():
    st oop = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    file = ldf file;
    check L5() else D2();
  L3():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang options(oop)>);
    goto L0();
  L4():
    r1 = dyn base(<lang options(oop)>);
    goto L0();
  D2():
    deopt 10 [];
  L5():
    r4 = dyn file[open]("w+");
    check L6() else D3();
  D3():
    deopt 13 [r4];
  L6():
    st outConn = r4;
    sink = ldf sink;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    p = prom<V +>{
      outConn = ld outConn;
      outConn1 = force? outConn;
      checkMissing(outConn1);
      return outConn1;
    };
    r6 = dyn sink[, type](p, "output");
    check L8() else D5();
  D5():
    deopt 20 [r6];
  L8():
    sink1 = ldf sink;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    p1 = prom<V +>{
      outConn2 = ld outConn;
      outConn3 = force? outConn2;
      checkMissing(outConn3);
      return outConn3;
    };
    r8 = dyn sink1[, type](p1, "message");
    check L10() else D7();
  D7():
    deopt 26 [r8];
  L10():
    tryCatch = ldf tryCatch;
    check L11() else D8();
  D8():
    deopt 28 [];
  L11():
    p6 = prom<V +>{
      withRestarts = ldf withRestarts;
      p4 = prom<V +>{
        withCallingHandlers = ldf withCallingHandlers;
        p2 = prom<V +>{
          expr1 = ld expr;
          expr2 = force? expr1;
          checkMissing(expr2);
          return expr2;
        };
        p3 = prom<V +>{
          r10 = clos inner3708401697;
          return r10;
        };
        r12 = dyn withCallingHandlers[, error](p2, p3);
        return r12;
      };
      p5 = prom<V +>{
        r14 = clos inner2635467516;
        return r14;
      };
      r16 = dyn withRestarts[, grmbl](p4, p5);
      return r16;
    };
    p7 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    p9 = prom<V +>{
      sink2 = ldf sink;
      dyn sink2[type]("message");
      sink3 = ldf sink;
      dyn sink3[type]("output");
      close = ldf close;
      p8 = prom<V +>{
        outConn4 = ld outConn;
        outConn5 = force? outConn4;
        checkMissing(outConn5);
        return outConn5;
      };
      r22 = dyn close(p8);
      return r22;
    };
    r24 = dyn tryCatch[, error, finally](p6, p7, p9);
    check L12() else D9();
  D9():
    deopt 34 [r24];
  L12():
    popenv;
    return r24;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg invokeRestart:cls, reg e1:*, reg e2:V, reg p:p(V +), reg sys_calls:cls, reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    invokeRestart = ldf invokeRestart;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    p1 = prom<V +>{
      sys_calls = ldf `sys.calls`;
      r1 = dyn sys_calls();
      return r1;
    };
    r3 = dyn invokeRestart("grmbl", p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2635467516(e, calls) {
  (reg e:*, reg calls:*) -+> V { var e:*, var calls:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sys_calls:cls, reg r2:V, reg length:cls, reg r3:V, reg calls1:*, reg calls2:V, reg c:L, reg calls4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg calls7:V, reg r5:V, reg n:*, reg n1:V, reg r6:V, reg seq_int:cls, reg r7:V, reg r8:V, reg __:cls, reg r9:V, reg rev:cls, reg calls8:*, reg calls9:V, reg p:p(V +), reg r11:V, reg c1:L, reg r13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg r18:V, reg c2:cls, reg r19:V, reg r20:V, reg __1:cls, reg r21:V, reg lapply:cls, reg calls10:*, reg calls11:V, reg p1:p(V +), reg deparse:*, reg deparse1:V, reg p2:p(V +), reg r24:V, reg message:cls, reg msg:*, reg msg1:V, reg p3:p(V +), reg conditionMessage:cls, reg e1:*, reg e2:V, reg p4:p(V +), reg r27:V, reg p5:p(V +), reg paste:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg __2:cls, reg r31:V, reg r32:cls, reg _eval_with_capture:cls, reg traceback:cls, reg tb:*, reg tb1:V, reg p6:p(V +), reg r34:V, reg p7:p(V +), reg r36:V, reg c3:L, reg r38:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r39:V, reg p8:p(V +), reg r41:V, reg c4:cls, reg r42:V, reg p9:p(V +), reg r44:V, reg p10:p(V +), reg r46:V |
    mkenv;
    st e = e;
    st calls = calls;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st n = r1;
    calls1 = ld calls;
    check L10() else D3();
  L5():
    sys_calls = ldf `sys.calls`;
    check L7() else D0();
  L6():
    r = dyn base(<lang sys.calls()>);
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 8 [calls1];
  L7():
    r2 = dyn sys_calls();
    check L8() else D1();
  L10():
    calls2 = force? calls1;
    checkMissing(calls2);
    c = `is.object`(calls2);
    if c then L11() else L12(calls2);
  D1():
    deopt 4 [r2];
  L1(dx1):
    st calls = dx1;
    rev = ldf rev;
    check L18() else D6();
  L8():
    length = ldf length in base;
    r3 = dyn length(r2);
    check L9() else D2();
  L11():
    dr = tryDispatchBuiltin.1("[", calls2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(calls4):
    sym1 = ldf `seq.int`;
    base1 = ldf `seq.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D2():
    deopt 6 [r3];
  D6():
    deopt 23 [];
  L2(calls7, r5):
    r8 = `-`(<missing>, r5);
    __ = ldf `[` in base;
    r9 = dyn __(calls7, r8);
    goto L1(r9);
  L9():
    goto L0(r3);
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L14():
    n = ld n;
    check L16() else D4();
  L15():
    r4 = dyn base1[`length.out`](<lang `-`(n, 1)>);
    goto L2(calls4, r4);
  L18():
    p = prom<V +>{
      calls8 = ld calls;
      calls9 = force? calls8;
      checkMissing(calls9);
      return calls9;
    };
    r11 = dyn rev(p);
    check L19() else D7();
  D4():
    deopt 12 [calls4, n];
  D7():
    deopt 25 [r11];
  L16():
    n1 = force? n;
    checkMissing(n1);
    r6 = `-`(n1, 1);
    seq_int = ldf `seq.int` in base;
    r7 = dyn seq_int(r6);
    check L17() else D5();
  L19():
    c1 = `is.object`(r11);
    if c1 then L20() else L21(r11);
  D5():
    deopt 18 [calls4, r7];
  L3(dx3):
    st calls = dx3;
    lapply = ldf lapply;
    check L26() else D9();
  L17():
    goto L2(calls4, r7);
  L20():
    dr2 = tryDispatchBuiltin.1("[", r11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(r13):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D9():
    deopt 36 [];
  L4(r17, r18):
    r20 = `-`(<missing>, r18);
    __1 = ldf `[` in base;
    r21 = dyn __1(r17, r20);
    goto L3(r21);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L23():
    c2 = ldf c in base;
    r19 = dyn c2(1, 2);
    check L25() else D8();
  L24():
    r16 = dyn base2(1, 2);
    goto L4(r13, r16);
  L26():
    p1 = prom<V +>{
      calls10 = ld calls;
      calls11 = force? calls10;
      checkMissing(calls11);
      return calls11;
    };
    p2 = prom<V +>{
      deparse = ld deparse;
      deparse1 = force? deparse;
      checkMissing(deparse1);
      return deparse1;
    };
    r24 = dyn lapply(p1, p2);
    check L27() else D10();
  D8():
    deopt 31 [r13, r19];
  D10():
    deopt 39 [r24];
  L25():
    goto L4(r13, r19);
  L27():
    st tb = r24;
    message = ldf message;
    check L28() else D11();
  D11():
    deopt 42 [];
  L28():
    p3 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p5 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p4 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r27 = dyn conditionMessage(p4);
      return r27;
    };
    p10 = prom<V +>{
      paste = ldf paste;
      p9 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r30):
        return r30;
      L1():
        __2 = ldf `::`;
        r31 = dyn __2("utils", "head");
        checkFun.0(r31);
        r32 = r31 as cls;
        p8 = prom<V +>{
          _eval_with_capture = ldf `.eval_with_capture`;
          p7 = prom<V +>{
            traceback = ldf traceback;
            p6 = prom<V +>{
              tb = ld tb;
              tb1 = force? tb;
              checkMissing(tb1);
              return tb1;
            };
            r34 = dyn traceback(p6);
            return r34;
          };
          r36 = dyn _eval_with_capture(p7);
          c3 = `is.object`(r36);
          if c3 then L1() else L2(r36);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("$", r36);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(r38):
          r39 = `$`(r38, <sym output>);
          goto L0(r39);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r41 = dyn r32(p8, 5.0);
        c4 = ldf c in base;
        r42 = dyn c4(r41, "  ...");
        goto L0(r42);
      L2():
        r29 = dyn base3(<lang `::`(utils, head)(`$`(.eval_with_capture(traceback(tb)), output), 5.0)>, "  ...");
        goto L0(r29);
      };
      r44 = dyn paste[, collapse](p9, "\n");
      return r44;
    };
    r46 = dyn message(p3, p5, "\nCall sequence:\n", p10, "\n");
    check L29() else D12();
  D12():
    deopt 48 [r46];
  L29():
    popenv;
    return r46;
  }
}