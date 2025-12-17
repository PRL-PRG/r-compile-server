fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2965794429;
    st promptImport = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2965794429(object, filename, name, importedFrom, importPage, `...`) {
  (reg object:*, reg filename:*, reg name:*, reg importedFrom:*, reg importPage:*, reg ddd:dots) -+> V { var object:*, var filename:*, reg filename_isMissing:L, reg filename_orDefault:*, var name:*, reg name_isMissing:L, reg name_orDefault:*, var importedFrom:*, reg importedFrom_isMissing:L, reg importedFrom_orDefault:*, var importPage:*, reg importPage_isMissing:L, reg importPage_orDefault:*, reg name1:*, reg name2:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object1:*, reg object2:V, reg c1:L, reg c2:L, reg object3:*, reg object4:V, reg object5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg substitute:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg name3:*, reg name4:V, reg c3:L, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg name5:*, reg name6:V, reg as_character:cls, reg r13:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r14:V, reg r15:V, reg name7:*, reg name8:V, reg is_language:cls, reg r16:V, reg c5:L, reg c7:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r17:V, reg c10:L, reg r18:V, reg name9:*, reg name10:V, reg length:cls, reg r19:V, reg r20:V, reg c11:L, reg c12:V, reg c14:L, reg c16:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r21:V, reg c19:L, reg r22:V, reg name11:*, reg name12:V, reg c20:L, reg c22:L, reg name14:V, reg dr:V, reg dc:L, reg dx:V, reg c24:L, reg dx1:V, reg __:cls, reg r23:V, reg as_name:cls, reg r24:V, reg identical:cls, reg r25:V, reg c25:L, reg c26:V, reg c28:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r26:V, reg r27:V, reg name15:*, reg name16:V, reg c29:L, reg name18:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r28:V, reg as_character1:cls, reg r29:V, reg stop:cls, reg r30:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r31:V, reg r32:V, reg filename1:*, reg filename2:V, reg c30:V, reg c31:L, reg paste0:cls, reg name19:*, reg name20:V, reg p1:p(V +), reg r34:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg r37:V, reg missing1:cls, reg r38:V, reg r39:V, reg c32:L, reg object7:*, reg object8:V, reg object9:V, reg get:cls, reg name21:*, reg name22:V, reg p2:p(V +), reg parent_frame:cls, reg r41:V, reg p3:p(V +), reg r43:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r44:V, reg r45:V, reg importedFrom1:*, reg importedFrom2:V, reg c33:V, reg c34:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r46:V, reg r47:V, reg x:*, reg x1:V, reg is_function:cls, reg r48:V, reg c35:L, reg getNamespaceName:cls, reg environment:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg r50:V, reg p5:p(V +), reg r52:V, reg r53:V, reg stop1:cls, reg r54:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r56:V, reg r57:V, reg paste1:cls, reg name23:*, reg name24:V, reg p6:p(V +), reg r59:V, reg paste2:cls, reg name25:*, reg name26:V, reg p7:p(V +), reg r61:V, reg paste3:cls, reg importedFrom3:*, reg importedFrom4:V, reg p8:p(V +), reg r63:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r64:V, reg r65:V, reg paste4:cls, reg name27:*, reg name28:V, reg p9:p(V +), reg importedFrom5:*, reg importedFrom6:V, reg p10:p(V +), reg r68:V, reg paste5:cls, reg importedFrom7:*, reg importedFrom8:V, reg p11:p(V +), reg importPage1:*, reg importPage2:V, reg p12:p(V +), reg importedFrom9:*, reg importedFrom10:V, reg p13:p(V +), reg importPage3:*, reg importPage4:V, reg p14:p(V +), reg r73:V, reg c36:cls, reg r74:V, reg list:cls, reg r75:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r76:V, reg r77:V, reg filename3:*, reg filename4:V, reg is_na:cls, reg r78:V, reg c37:L, reg Rdtxt:*, reg Rdtxt1:V, reg cat:cls, reg unlist:cls, reg Rdtxt2:*, reg Rdtxt3:V, reg p15:p(V +), reg r82:V, reg p16:p(V +), reg filename5:*, reg filename6:V, reg p17:p(V +), reg r85:V, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg filename7:*, reg filename8:V, reg p18:p(V +), reg r87:V, reg p19:p(V +), reg r89:V, reg p20:p(V +), reg gettext:cls, reg r91:V, reg p21:p(V +), reg r93:V |
    mkenv;
    st object = object;
    filename_isMissing = missing.0(filename);
    if filename_isMissing then L0(NULL) else L0(filename);
  L0(filename_orDefault):
    st filename = filename_orDefault;
    name_isMissing = missing.0(name);
    if name_isMissing then L1(NULL) else L1(name);
  L1(name_orDefault):
    st name = name_orDefault;
    importedFrom_isMissing = missing.0(importedFrom);
    if importedFrom_isMissing then L2(NULL) else L2(importedFrom);
  L2(importedFrom_orDefault):
    st importedFrom = importedFrom_orDefault;
    importPage_isMissing = missing.0(importPage);
    if importPage_isMissing then L3() else L4(importPage);
  L3():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    goto L4(p);
  L4(importPage_orDefault):
    st importPage = importPage_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L41() else L42();
  L5(r2):
    c = `as.logical`(r2);
    if c then L43() else L6();
  L41():
    missing = ldf missing in base;
    r3 = dyn missing(<sym name>);
    goto L5(r3);
  L42():
    r1 = dyn base(<sym name>);
    goto L5(r1);
  L6():
    goto L23();
  L23():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L94() else L95();
  L43():
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L44() else L45();
  L7(r5):
    c2 = `as.logical`(r5);
    if c2 then L47() else L8();
  L24(r32):
    c31 = `as.logical`(r32);
    if c31 then L97() else L25();
  L44():
    object1 = ld object;
    check L46() else D0();
  L45():
    r4 = dyn base1(<sym object>);
    goto L7(r4);
  L94():
    filename1 = ld filename;
    check L96() else D17();
  L95():
    r31 = dyn base9(<sym filename>);
    goto L24(r31);
  D0():
    deopt 4 [object1];
  D17():
    deopt 76 [filename1];
  L8():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L50() else L51();
  L9(object5):
    st name = object5;
    goto L23();
  L25():
    goto L26();
  L26():
    sym10 = ldf missing;
    base10 = ldf missing in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L101() else L102();
  L46():
    object2 = force? object1;
    checkMissing(object2);
    c1 = `is.character`(object2);
    goto L7(c1);
  L47():
    object3 = ld object;
    check L48() else D1();
  L96():
    filename2 = force? filename1;
    checkMissing(filename2);
    c30 = `==`(filename2, NULL);
    goto L24(c30);
  L97():
    paste0 = ldf paste0;
    check L98() else D18();
  D1():
    deopt 7 [object3];
  D18():
    deopt 80 [];
  L10(r7):
    st name = r7;
    sym3 = ldf `is.name`;
    base3 = ldf `is.name` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L52() else L53();
  L27(r37):
    r39 = `!`(r37);
    c32 = `as.logical`(r39);
    if c32 then L103() else L28();
  L48():
    object4 = force? object3;
    checkMissing(object4);
    goto L9(object4);
  L50():
    substitute = ldf substitute in base;
    r8 = dyn substitute(<sym object>);
    goto L10(r8);
  L51():
    r6 = dyn base2(<sym object>);
    goto L10(r6);
  L98():
    p1 = prom<V +>{
      name19 = ld name;
      name20 = force? name19;
      checkMissing(name20);
      return name20;
    };
    r34 = dyn paste0(p1, ".Rd");
    check L99() else D19();
  L101():
    missing1 = ldf missing in base;
    r38 = dyn missing1(<sym object>);
    goto L27(r38);
  L102():
    r36 = dyn base10(<sym object>);
    goto L27(r36);
  D19():
    deopt 83 [r34];
  L11(r10):
    c4 = `as.logical`(r10);
    if c4 then L55() else L12();
  L28():
    get = ldf get;
    check L106() else D21();
  L29(object9):
    st x = object9;
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L108() else L109();
  L52():
    name3 = ld name;
    check L54() else D2();
  L53():
    r9 = dyn base3(<sym name>);
    goto L11(r9);
  L99():
    st filename = r34;
    goto L26();
  L103():
    object7 = ld object;
    check L104() else D20();
  D2():
    deopt 14 [name3];
  D20():
    deopt 91 [object7];
  D21():
    deopt 94 [];
  L12():
    sym5 = ldf `is.language`;
    base5 = ldf `is.language` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L61() else L62();
  L30(r45):
    c34 = `as.logical`(r45);
    if c34 then L111() else L31();
  L54():
    name4 = force? name3;
    checkMissing(name4);
    c3 = `is.symbol`(name4);
    goto L11(c3);
  L55():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L104():
    object8 = force? object7;
    checkMissing(object8);
    goto L29(object8);
  L106():
    p2 = prom<V +>{
      name21 = ld name;
      name22 = force? name21;
      checkMissing(name22);
      return name22;
    };
    p3 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r41 = dyn parent_frame();
      return r41;
    };
    r43 = dyn get[, envir](p2, p3);
    check L107() else D22();
  L108():
    importedFrom1 = ld importedFrom;
    check L110() else D23();
  L109():
    r44 = dyn base11(<sym importedFrom>);
    goto L30(r44);
  D22():
    deopt 98 [r43];
  D23():
    deopt 102 [importedFrom1];
  L13(r12):
    goto L9(r12);
  L14(r15):
    c5 = `as.logical`(r15);
    if c5 then L65() else L15(c5);
  L31():
    goto L35();
  L35():
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L123() else L124();
  L56():
    name5 = ld name;
    check L58() else D3();
  L57():
    r11 = dyn base4(<sym name>);
    goto L13(r11);
  L61():
    name7 = ld name;
    check L63() else D5();
  L62():
    r14 = dyn base5(<sym name>);
    goto L14(r14);
  L107():
    st x = r43;
    goto L29(r43);
  L110():
    importedFrom2 = force? importedFrom1;
    checkMissing(importedFrom2);
    c33 = `==`(importedFrom2, NULL);
    goto L30(c33);
  L111():
    sym12 = ldf `is.function`;
    base12 = ldf `is.function` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L112() else L113();
  D3():
    deopt 19 [name5];
  D5():
    deopt 25 [name7];
  L15(c7):
    c14 = `as.logical`(c7);
    if c14 then L71() else L17(c14);
  L32(r47):
    c35 = `as.logical`(r47);
    if c35 then L116() else L33();
  L36(r57):
    st Rdtxt = r57;
    sym15 = ldf `is.na`;
    base15 = ldf `is.na` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L139() else L140();
  L58():
    name6 = force? name5;
    checkMissing(name6);
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(name6);
    check L59() else D4();
  L63():
    name8 = force? name7;
    checkMissing(name8);
    is_language = ldf `is.language` in base;
    r16 = dyn is_language(name8);
    check L64() else D6();
  L65():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L112():
    x = ld x;
    check L114() else D24();
  L113():
    r46 = dyn base12(<sym x>);
    goto L32(r46);
  L123():
    paste1 = ldf paste0;
    check L125() else D30();
  L124():
    r56 = dyn base13[name, aliases, docType, title, description](<lang paste0("\\name{", name, "}")>, <lang paste0("\\alias{", name, "}")>, "\\docType{import}", <lang paste0("\\title{Import from package \\pkg{", importedFrom, "}}")>, <lang c("\\description{", paste0("The \\code{", name, "} object is imported from package \\pkg{", importedFrom, "}."), paste0("Help is available here:  \\code{\\link[", importedFrom, ":", importPage, "]{", importedFrom, "::", importPage, "}}."), "}")>);
    goto L36(r56);
  D4():
    deopt 22 [r13];
  D6():
    deopt 28 [r16];
  D24():
    deopt 107 [x];
  D30():
    deopt 125 [];
  L16(c10, r18):
    r20 = `==`(r18, 3.0);
    c11 = `as.logical`(r20);
    c12 = `&&`(c10, c11);
    goto L15(c12);
  L17(c16):
    c28 = `as.logical`(c16);
    if c28 then L82() else L20();
  L33():
    stop1 = ldf stop;
    check L120() else D28();
  L34(r53):
    goto L35();
  L38(r77):
    c37 = `as.logical`(r77);
    if c37 then L143() else L39();
  L59():
    goto L13(r13);
  L64():
    goto L14(r16);
  L66():
    name9 = ld name;
    check L68() else D7();
  L67():
    r17 = dyn base6(<sym name>);
    goto L16(c5, r17);
  L71():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  L114():
    x1 = force? x;
    checkMissing(x1);
    is_function = ldf `is.function` in base;
    r48 = dyn is_function(x1);
    check L115() else D25();
  L116():
    getNamespaceName = ldf getNamespaceName;
    check L117() else D26();
  L125():
    p6 = prom<V +>{
      name23 = ld name;
      name24 = force? name23;
      checkMissing(name24);
      return name24;
    };
    r59 = dyn paste1("\\name{", p6, "}");
    check L126() else D31();
  L139():
    filename3 = ld filename;
    check L141() else D42();
  L140():
    r76 = dyn base15(<sym filename>);
    goto L38(r76);
  D7():
    deopt 31 [c5, name9];
  D25():
    deopt 110 [r48];
  D26():
    deopt 112 [];
  D28():
    deopt 117 [];
  D31():
    deopt 129 [r59];
  D42():
    deopt 179 [filename3];
  L18(c19, r22):
    c25 = `as.logical`(r22);
    c26 = `&&`(c19, c25);
    goto L17(c26);
  L20():
    stop = ldf stop;
    check L91() else D15();
  L39():
    cat = ldf cat;
    check L147() else D45();
  L68():
    name10 = force? name9;
    checkMissing(name10);
    length = ldf length in base;
    r19 = dyn length(name10);
    check L69() else D8();
  L72():
    name11 = ld name;
    check L74() else D9();
  L73():
    r21 = dyn base7(<lang `[[`(name, 1.0)>, <lang as.name("::")>);
    goto L18(c14, r21);
  L82():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L83() else L84();
  L115():
    goto L32(r48);
  L117():
    p5 = prom<V +>{
      environment = ldf environment;
      p4 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r50 = dyn environment(p4);
      return r50;
    };
    r52 = dyn getNamespaceName(p5);
    check L118() else D27();
  L120():
    r54 = dyn stop1("cannot determine import name");
    check L121() else D29();
  L126():
    paste2 = ldf paste0;
    check L127() else D32();
  L141():
    filename4 = force? filename3;
    checkMissing(filename4);
    is_na = ldf `is.na` in base;
    r78 = dyn is_na(filename4);
    check L142() else D43();
  L143():
    Rdtxt = ld Rdtxt;
    check L144() else D44();
  D8():
    deopt 34 [c5, r19];
  D9():
    deopt 40 [c14, name11];
  D15():
    deopt 69 [];
  D27():
    deopt 114 [r52];
  D29():
    deopt 119 [r54];
  D32():
    deopt 132 [];
  D43():
    deopt 182 [r78];
  D44():
    deopt 183 [Rdtxt];
  D45():
    deopt 189 [];
  L21(r27):
    goto L9(r27);
  L69():
    goto L16(c5, r19);
  L74():
    name12 = force? name11;
    checkMissing(name12);
    c20 = `is.object`(name12);
    if c20 then L75() else L76(c14, name12);
  L83():
    name15 = ld name;
    check L85() else D13();
  L84():
    r26 = dyn base8(<lang `[[`(name, 3.0)>);
    goto L21(r26);
  L91():
    r30 = dyn stop("cannot determine a usable name");
    check L92() else D16();
  L118():
    st importedFrom = r52;
    goto L34(r52);
  L121():
    goto L34(r54);
  L127():
    p7 = prom<V +>{
      name25 = ld name;
      name26 = force? name25;
      checkMissing(name26);
      return name26;
    };
    r61 = dyn paste2("\\alias{", p7, "}");
    check L128() else D33();
  L142():
    goto L38(r78);
  L144():
    Rdtxt1 = force? Rdtxt;
    checkMissing(Rdtxt1);
    popenv;
    return Rdtxt1;
  L147():
    p16 = prom<V +>{
      unlist = ldf unlist;
      p15 = prom<V +>{
        Rdtxt2 = ld Rdtxt;
        Rdtxt3 = force? Rdtxt2;
        checkMissing(Rdtxt3);
        return Rdtxt3;
      };
      r82 = dyn unlist(p15);
      return r82;
    };
    p17 = prom<V +>{
      filename5 = ld filename;
      filename6 = force? filename5;
      checkMissing(filename6);
      return filename6;
    };
    r85 = dyn cat[, file, sep](p16, p17, "\n");
    check L148() else D46();
  D13():
    deopt 61 [name15];
  D16():
    deopt 71 [r30];
  D33():
    deopt 136 [r61];
  D46():
    deopt 195 [r85];
  L19(c24, dx1):
    as_name = ldf `as.name`;
    check L78() else D10();
  L75():
    dr = tryDispatchBuiltin.1("[[", name12);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L77() else L76(c14, dr);
  L76(c22, name14):
    __ = ldf `[[` in base;
    r23 = dyn __(name14, 1.0);
    goto L19(c22, r23);
  L85():
    name16 = force? name15;
    checkMissing(name16);
    c29 = `is.object`(name16);
    if c29 then L86() else L87(name16);
  L92():
    goto L9(r30);
  L128():
    paste3 = ldf paste0;
    check L129() else D34();
  L148():
    message = ldf message;
    check L149() else D47();
  D10():
    deopt 46 [c24];
  D34():
    deopt 141 [];
  D47():
    deopt 197 [];
  L22(dx3):
    as_character1 = ldf `as.character` in base;
    r29 = dyn as_character1(dx3);
    check L89() else D14();
  L77():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(c14, dx);
  L78():
    r24 = dyn as_name("::");
    check L79() else D11();
  L86():
    dr2 = tryDispatchBuiltin.1("[[", name16);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L88() else L87(dr2);
  L87(name18):
    __1 = ldf `[[` in base;
    r28 = dyn __1(name18, 3.0);
    goto L22(r28);
  L129():
    p8 = prom<V +>{
      importedFrom3 = ld importedFrom;
      importedFrom4 = force? importedFrom3;
      checkMissing(importedFrom4);
      return importedFrom4;
    };
    r63 = dyn paste3("\\title{Import from package \\pkg{", p8, "}}");
    check L130() else D35();
  L149():
    p20 = prom<V +>{
      gettextf = ldf gettextf;
      p19 = prom<V +>{
        sQuote = ldf sQuote;
        p18 = prom<V +>{
          filename7 = ld filename;
          filename8 = force? filename7;
          checkMissing(filename8);
          return filename8;
        };
        r87 = dyn sQuote(p18);
        return r87;
      };
      r89 = dyn gettextf("Created file named %s.", p19);
      return r89;
    };
    p21 = prom<V +>{
      gettext = ldf gettext;
      r91 = dyn gettext("Edit the file and move it to the appropriate directory.");
      return r91;
    };
    r93 = dyn message[, , , domain](p20, "\n", p21, NA_LGL);
    check L150() else D48();
  D11():
    deopt 48 [c24, r24];
  D14():
    deopt 67 [r29];
  D35():
    deopt 145 [r63];
  D48():
    deopt 203 [r93];
  L79():
    identical = ldf identical in base;
    r25 = dyn identical(dx1, r24, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L80() else D12();
  L88():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L22(dx2);
  L89():
    goto L21(r29);
  L130():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L131() else L132();
  L150():
    popenv;
    return r93;
  D12():
    deopt 57 [c24, r25];
  L37(r65):
    list = ldf list in base;
    r75 = dyn list(r59, r61, "\\docType{import}", r63, r65);
    check L138() else D41();
  L80():
    goto L18(c24, r25);
  L131():
    paste4 = ldf paste0;
    check L133() else D36();
  L132():
    r64 = dyn base14("\\description{", <lang paste0("The \\code{", name, "} object is imported from package \\pkg{", importedFrom, "}.")>, <lang paste0("Help is available here:  \\code{\\link[", importedFrom, ":", importPage, "]{", importedFrom, "::", importPage, "}}.")>, "}");
    goto L37(r64);
  D36():
    deopt 151 [];
  D41():
    deopt 175 [r75];
  L133():
    p9 = prom<V +>{
      name27 = ld name;
      name28 = force? name27;
      checkMissing(name28);
      return name28;
    };
    p10 = prom<V +>{
      importedFrom5 = ld importedFrom;
      importedFrom6 = force? importedFrom5;
      checkMissing(importedFrom6);
      return importedFrom6;
    };
    r68 = dyn paste4("The \\code{", p9, "} object is imported from package \\pkg{", p10, "}.");
    check L134() else D37();
  L138():
    goto L36(r75);
  D37():
    deopt 157 [r68];
  L134():
    paste5 = ldf paste0;
    check L135() else D38();
  D38():
    deopt 159 [];
  L135():
    p11 = prom<V +>{
      importedFrom7 = ld importedFrom;
      importedFrom8 = force? importedFrom7;
      checkMissing(importedFrom8);
      return importedFrom8;
    };
    p12 = prom<V +>{
      importPage1 = ld importPage;
      importPage2 = force? importPage1;
      checkMissing(importPage2);
      return importPage2;
    };
    p13 = prom<V +>{
      importedFrom9 = ld importedFrom;
      importedFrom10 = force? importedFrom9;
      checkMissing(importedFrom10);
      return importedFrom10;
    };
    p14 = prom<V +>{
      importPage3 = ld importPage;
      importPage4 = force? importPage3;
      checkMissing(importPage4);
      return importPage4;
    };
    r73 = dyn paste5("Help is available here:  \\code{\\link[", p11, ":", p12, "]{", p13, "::", p14, "}}.");
    check L136() else D39();
  D39():
    deopt 169 [r73];
  L136():
    c36 = ldf c in base;
    r74 = dyn c36("\\description{", r68, r73, "}");
    check L137() else D40();
  D40():
    deopt 172 [r74];
  L137():
    goto L37(r74);
  }
}