fun main() {
  () -+> V { reg r:cls, reg system_file:cls, reg r1:V, reg setwd:cls, reg tempdir:cls, reg r2:V, reg p:p(V +), reg r4:V, reg options:cls, reg r5:V, reg Sweave:cls, reg testfile:*, reg testfile1:V, reg p1:p(V +), reg r7:V, reg Stangle:cls, reg testfile2:*, reg testfile3:V, reg p2:p(V +), reg r9:V, reg source:cls, reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg interactive:cls, reg r13:V, reg r14:V, reg c:L, reg unlink:cls, reg r15:V, reg setwd1:cls, reg oldwd:*, reg oldwd1:V, reg p3:p(V +), reg r18:V |
    mkenv;
    r = clos inner3927376442;
    st Sweave = r;
    system_file = ldf `system.file`;
    check L3() else D0();
  D0():
    deopt 4 [];
  L3():
    r1 = dyn system_file[, , package]("Sweave", "Sweave-test-1.Rnw", "utils");
    check L4() else D1();
  D1():
    deopt 9 [r1];
  L4():
    st testfile = r1;
    setwd = ldf setwd;
    check L5() else D2();
  D2():
    deopt 12 [];
  L5():
    p = prom<V +>{
      tempdir = ldf tempdir;
      r2 = dyn tempdir();
      return r2;
    };
    r4 = dyn setwd(p);
    check L6() else D3();
  D3():
    deopt 14 [r4];
  L6():
    st oldwd = r4;
    options = ldf options;
    check L7() else D4();
  D4():
    deopt 17 [];
  L7():
    r5 = dyn options[`device.ask.default`](FALSE);
    check L8() else D5();
  D5():
    deopt 20 [r5];
  L8():
    Sweave = ldf Sweave;
    check L9() else D6();
  D6():
    deopt 22 [];
  L9():
    p1 = prom<V +>{
      testfile = ld testfile;
      testfile1 = force? testfile;
      checkMissing(testfile1);
      return testfile1;
    };
    r7 = dyn Sweave(p1);
    check L10() else D7();
  D7():
    deopt 24 [r7];
  L10():
    Stangle = ldf Stangle;
    check L11() else D8();
  D8():
    deopt 26 [];
  L11():
    p2 = prom<V +>{
      testfile2 = ld testfile;
      testfile3 = force? testfile2;
      checkMissing(testfile3);
      return testfile3;
    };
    r9 = dyn Stangle(p2);
    check L12() else D9();
  D9():
    deopt 28 [r9];
  L12():
    source = ldf source;
    check L13() else D10();
  D10():
    deopt 30 [];
  L13():
    r10 = dyn source("Sweave-test-1.R");
    check L14() else D11();
  D11():
    deopt 32 [r10];
  L14():
    sym = ldf interactive;
    base = ldf interactive in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0(r12):
    r14 = `!`(r12);
    c = `as.logical`(r14);
    if c then L18() else L1();
  L15():
    interactive = ldf interactive in base;
    r13 = dyn interactive();
    check L17() else D12();
  L16():
    r11 = dyn base();
    goto L0(r11);
  D12():
    deopt 36 [r13];
  L1():
    goto L2();
  L2():
    setwd1 = ldf setwd;
    check L22() else D15();
  L17():
    goto L0(r13);
  L18():
    unlink = ldf unlink;
    check L19() else D13();
  D13():
    deopt 39 [];
  D15():
    deopt 45 [];
  L19():
    r15 = dyn unlink("Sweave-test-1*");
    check L20() else D14();
  L22():
    p3 = prom<V +>{
      oldwd = ld oldwd;
      oldwd1 = force? oldwd;
      checkMissing(oldwd1);
      return oldwd1;
    };
    r18 = dyn setwd1(p3);
    check L23() else D16();
  D14():
    deopt 41 [r15];
  D16():
    deopt 47 [r18];
  L20():
    goto L2();
  L23():
    popenv;
    return r18;
  }
}
fun inner3927376442(file, driver, syntax, encoding, `...`) {
  (reg file:*, reg driver:*, reg syntax:*, reg encoding:*, reg ddd:dots) -+> V { var file:*, var driver:*, reg driver_isMissing:L, reg driver_orDefault:*, reg RweaveLatex:cls, reg r:V, reg p:p(V +), var syntax:*, reg syntax_isMissing:L, reg syntax_orDefault:*, reg getOption:cls, reg r2:V, reg p1:p(V +), var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg driver1:*, reg driver2:V, reg c:L, reg c1:L, reg get:cls, reg driver3:*, reg driver4:V, reg p2:p(V +), reg r7:V, reg r8:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg driver5:*, reg driver6:V, reg is_function:cls, reg r13:V, reg c2:L, reg driver7:cls, reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg syntax1:*, reg syntax2:V, reg c3:V, reg c4:L, reg SweaveGetSyntax:cls, reg file1:*, reg file2:V, reg p3:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg syntax3:*, reg syntax4:V, reg c5:L, reg c6:L, reg get1:cls, reg syntax5:*, reg syntax6:V, reg p4:p(V +), reg r23:V, reg _Platform:*, reg _Platform1:V, reg c7:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r25:V, reg r26:V, reg c8:L, reg chartr:cls, reg file3:*, reg file4:V, reg p5:p(V +), reg r28:V, reg SweaveReadFile:cls, reg file5:*, reg file6:V, reg p6:p(V +), reg syntax7:*, reg syntax8:V, reg p7:p(V +), reg encoding1:*, reg encoding2:V, reg p8:p(V +), reg r33:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg r35:V, reg text:*, reg text1:V, reg attr:cls, reg r36:V, reg l:*, reg attr__:cls, reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r38:V, reg r39:V, reg text2:*, reg text3:V, reg attr1:cls, reg r40:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg text4:*, reg text5:V, reg attr2:cls, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg text6:*, reg text7:V, reg attr3:cls, reg r46:V, reg driver8:*, reg driver9:V, reg c9:L, reg driver11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r47:V, reg dx4:cls, reg file7:*, reg file8:V, reg p9:p(V +), reg syntax9:*, reg syntax10:V, reg p10:p(V +), reg ddd1:dots?, reg r50:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg on_exit:cls, reg r53:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg text8:*, reg text9:V, reg attr4:cls, reg r56:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg r58:V, reg Sys_getenv:cls, reg r59:V, reg is_na:cls, reg r60:V, reg r61:V, reg c10:L, reg SweaveParseOptions:cls, reg envopts:*, reg envopts1:V, reg p11:p(V +), reg drobj:*, reg drobj1:V, reg c11:L, reg drobj3:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r63:V, reg p12:p(V +), reg driver12:*, reg driver13:V, reg c12:L, reg driver15:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r65:V, reg p13:p(V +), reg r67:V, reg l1:*, reg c13:L, reg r69:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx9:V, reg r71:V, reg dx10:V, reg r72:V, reg file9:*, reg file10:V, reg l4:*, reg c14:L, reg file12:V, reg l6:*, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg r74:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r75:V, reg r76:V, reg list:cls, reg r77:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r78:V, reg r79:V, reg text10:*, reg text11:V, reg r80:I, reg s:V, reg l7:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x:V, reg text12:*, reg text13:V, reg c16:L, reg i6:I, reg text15:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i8:I, reg dx14:V, reg linenum:*, reg linenum1:V, reg __:cls, reg r81:V, reg srcFilenum:*, reg srcFilenum1:V, reg c17:L, reg i10:I, reg srcFilenum3:V, reg dr14:V, reg dc7:L, reg dx15:V, reg i12:I, reg dx16:V, reg linenum2:*, reg linenum3:V, reg __1:cls, reg r82:V, reg srcLinenum:*, reg srcLinenum1:V, reg c18:L, reg i14:I, reg srcLinenum3:V, reg dr16:V, reg dc8:L, reg dx17:V, reg i16:I, reg dx18:V, reg linenum4:*, reg linenum5:V, reg __2:cls, reg r83:V, reg linenum6:*, reg linenum7:V, reg r84:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r85:V, reg i19:I, reg r86:V, reg Sys_getenv1:cls, reg r87:V, reg nzchar:cls, reg r88:V, reg c19:L, reg cat:cls, reg sprintf:cls, reg linenum8:*, reg linenum9:V, reg p14:p(V +), reg substr:cls, reg line:*, reg line1:V, reg p15:p(V +), reg r91:V, reg p16:p(V +), reg mode:*, reg mode1:V, reg p17:p(V +), reg r94:V, reg p18:p(V +), reg r96:V, reg cat1:cls, reg sprintf1:cls, reg system:cls, reg paste:cls, reg summary:cls, reg drobj4:*, reg drobj5:V, reg c20:L, reg drobj7:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg r97:V, reg p19:p(V +), reg r99:V, reg c21:L, reg r101:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg r102:V, reg p20:p(V +), reg r104:V, reg p21:p(V +), reg r106:V, reg p22:p(V +), reg r108:V, reg p23:p(V +), reg r110:V, reg i22:I, reg sym14:cls, reg base14:cls, reg guard14:L, reg r112:V, reg i25:I, reg r113:V, reg grep:cls, reg syntax11:*, reg syntax12:V, reg c22:L, reg syntax14:V, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg r114:V, reg p24:p(V +), reg line2:*, reg line3:V, reg p25:p(V +), reg r117:V, reg length:cls, reg r118:V, reg c23:L, reg mode2:*, reg mode3:V, reg r119:V, reg c24:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r120:V, reg i32:I, reg r121:V, reg chunk:*, reg chunk1:V, reg c25:V, reg r122:V, reg c26:L, reg driver16:*, reg driver17:V, reg c27:L, reg i36:I, reg driver19:V, reg dr24:V, reg dc12:L, reg dx25:V, reg i38:I, reg dx26:V, reg r123:V, reg dx27:cls, reg drobj8:*, reg drobj9:V, reg p26:p(V +), reg chunk2:*, reg chunk3:V, reg p27:p(V +), reg r126:V, reg i39:I, reg r127:V, reg i40:I, reg sym16:cls, reg base16:cls, reg guard16:L, reg r129:V, reg i43:I, reg r130:V, reg chunkopts:*, reg chunkopts1:V, reg c28:L, reg i45:I, reg chunkopts3:V, reg dr26:V, reg dc13:L, reg dx28:V, reg i47:I, reg dx29:V, reg r131:V, reg c29:V, reg r132:V, reg c30:L, reg chunk4:*, reg chunk5:V, reg l8:*, reg c31:L, reg i51:I, reg chunk7:V, reg l10:*, reg dr28:V, reg dc14:L, reg dx30:V, reg i53:I, reg chunk9:V, reg dx31:V, reg chunkopts4:*, reg chunkopts5:V, reg c32:L, reg i55:I, reg chunk12:V, reg l12:*, reg chunk13:V, reg chunkopts7:V, reg dr30:V, reg dc15:L, reg dx32:V, reg i57:I, reg chunk16:V, reg l14:*, reg chunk17:V, reg dx33:V, reg r133:V, reg ____:cls, reg r134:V, reg i58:I, reg sym17:cls, reg base17:cls, reg guard17:L, reg r135:V, reg i61:I, reg r136:V, reg chunk19:*, reg chunk20:V, reg c33:V, reg r137:V, reg c34:L, reg driver20:*, reg driver21:V, reg c35:L, reg i65:I, reg driver23:V, reg dr32:V, reg dc16:L, reg dx34:V, reg i67:I, reg dx35:V, reg r138:V, reg dx36:cls, reg drobj10:*, reg drobj11:V, reg p28:p(V +), reg chunk21:*, reg chunk22:V, reg p29:p(V +), reg chunkopts8:*, reg chunkopts9:V, reg p30:p(V +), reg r142:V, reg i68:I, reg i69:I, reg sym18:cls, reg base18:cls, reg guard18:L, reg r145:V, reg i72:I, reg r146:V, reg grep1:cls, reg syntax15:*, reg syntax16:V, reg c36:L, reg syntax18:V, reg dr34:V, reg dc17:L, reg dx37:V, reg dx38:V, reg r147:V, reg p31:p(V +), reg line4:*, reg line5:V, reg p32:p(V +), reg r150:V, reg length1:cls, reg r151:V, reg c37:L, reg mode4:*, reg mode5:V, reg r152:V, reg c38:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r153:V, reg i79:I, reg r154:V, reg chunk23:*, reg chunk24:V, reg c39:V, reg r155:V, reg c40:L, reg driver24:*, reg driver25:V, reg c41:L, reg i83:I, reg driver27:V, reg dr36:V, reg dc18:L, reg dx39:V, reg i85:I, reg dx40:V, reg r156:V, reg dx41:cls, reg drobj12:*, reg drobj13:V, reg p33:p(V +), reg chunk25:*, reg chunk26:V, reg p34:p(V +), reg r159:V, reg i86:I, reg r160:V, reg i87:I, reg sym20:cls, reg base20:cls, reg guard20:L, reg r162:V, reg i90:I, reg r163:V, reg chunkopts10:*, reg chunkopts11:V, reg c42:L, reg i92:I, reg chunkopts13:V, reg dr38:V, reg dc19:L, reg dx42:V, reg i94:I, reg dx43:V, reg r164:V, reg c43:V, reg r165:V, reg c44:L, reg chunk27:*, reg chunk28:V, reg l15:*, reg c45:L, reg i98:I, reg chunk30:V, reg l17:*, reg dr40:V, reg dc20:L, reg dx44:V, reg i100:I, reg chunk32:V, reg dx45:V, reg chunkopts14:*, reg chunkopts15:V, reg c46:L, reg i102:I, reg chunk35:V, reg l19:*, reg chunk36:V, reg chunkopts17:V, reg dr42:V, reg dc21:L, reg dx46:V, reg i104:I, reg chunk39:V, reg l21:*, reg chunk40:V, reg dx47:V, reg r166:V, reg ____1:cls, reg r167:V, reg i105:I, reg sym21:cls, reg base21:cls, reg guard21:L, reg r168:V, reg i108:I, reg r169:V, reg chunk42:*, reg chunk43:V, reg c47:V, reg r170:V, reg c48:L, reg driver28:*, reg driver29:V, reg c49:L, reg i112:I, reg driver31:V, reg dr44:V, reg dc22:L, reg dx48:V, reg i114:I, reg dx49:V, reg r171:V, reg dx50:cls, reg drobj14:*, reg drobj15:V, reg p35:p(V +), reg chunk44:*, reg chunk45:V, reg p36:p(V +), reg chunkopts18:*, reg chunkopts19:V, reg p37:p(V +), reg r175:V, reg sub:cls, reg syntax19:*, reg syntax20:V, reg c50:L, reg syntax22:V, reg dr46:V, reg dc23:L, reg dx51:V, reg dx52:V, reg r176:V, reg p38:p(V +), reg line6:*, reg line7:V, reg p39:p(V +), reg r179:V, reg SweaveParseOptions1:cls, reg chunkopts20:*, reg chunkopts21:V, reg p40:p(V +), reg drobj16:*, reg drobj17:V, reg c51:L, reg drobj19:V, reg dr48:V, reg dc24:L, reg dx53:V, reg dx54:V, reg r181:V, reg p41:p(V +), reg driver32:*, reg driver33:V, reg c52:L, reg driver35:V, reg dr50:V, reg dc25:L, reg dx55:V, reg dx56:V, reg r183:V, reg p42:p(V +), reg r185:V, reg srcFilenames:*, reg srcFilenames1:V, reg c53:L, reg i116:I, reg srcFilenames3:V, reg dr52:V, reg dc26:L, reg dx57:V, reg i118:I, reg dx58:V, reg filenum:*, reg filenum1:V, reg __3:cls, reg r186:V, reg paste1:cls, reg linenum10:*, reg linenum11:V, reg linediff:*, reg linediff1:V, reg r187:V, reg r188:V, reg p43:p(V +), reg basename:cls, reg file15:*, reg file16:V, reg p44:p(V +), reg r191:V, reg p45:p(V +), reg r193:V, reg linenum12:*, reg linenum13:V, reg linediff2:*, reg linediff3:V, reg r194:V, reg l22:*, reg attr__1:cls, reg r195:V, reg filenum2:*, reg filenum3:V, reg l23:*, reg attr__2:cls, reg r196:V, reg srcFilenames4:*, reg srcFilenames5:V, reg l24:*, reg attr__3:cls, reg r197:V, reg chunknr:*, reg chunknr1:V, reg r198:V, reg chunknr2:*, reg chunknr3:V, reg l25:*, reg c54:L, reg i120:I, reg chunknr5:V, reg l27:*, reg dr54:V, reg dc27:L, reg dx59:V, reg i122:I, reg chunknr7:V, reg dx60:V, reg r199:V, reg mode6:*, reg mode7:V, reg r200:V, reg c55:L, reg i124:I, reg c57:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r201:V, reg i127:I, reg c60:L, reg r202:V, reg grep2:cls, reg syntax23:*, reg syntax24:V, reg c61:L, reg syntax26:V, reg dr56:V, reg dc28:L, reg dx61:V, reg dx62:V, reg r203:V, reg p46:p(V +), reg line8:*, reg line9:V, reg p47:p(V +), reg r206:V, reg length2:cls, reg r207:V, reg c62:L, reg c63:V, reg c65:L, reg sub1:cls, reg syntax27:*, reg syntax28:V, reg c66:L, reg syntax30:V, reg dr58:V, reg dc29:L, reg dx63:V, reg dx64:V, reg r208:V, reg p48:p(V +), reg line10:*, reg line11:V, reg p49:p(V +), reg r211:V, reg _in_:cls, reg chunkref:*, reg chunkref1:V, reg p50:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r213:V, reg r214:V, reg namedchunks:*, reg namedchunks1:V, reg names:cls, reg r215:V, reg p51:p(V +), reg r217:V, reg r218:V, reg c67:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg chunkref2:*, reg chunkref3:V, reg p52:p(V +), reg r220:V, reg p53:p(V +), reg r222:V, reg p54:p(V +), reg r224:V, reg srcFilenames6:*, reg srcFilenames7:V, reg c68:L, reg i136:I, reg srcFilenames9:V, reg dr60:V, reg dc30:L, reg dx65:V, reg i138:I, reg dx66:V, reg filenum4:*, reg filenum5:V, reg __4:cls, reg r226:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r227:V, reg i141:I, reg r228:V, reg namedchunks2:*, reg namedchunks3:V, reg c69:L, reg i143:I, reg namedchunks5:V, reg dr62:V, reg dc31:L, reg dx67:V, reg i145:I, reg dx68:V, reg chunkref4:*, reg chunkref5:V, reg __5:cls, reg r229:V, reg paste2:cls, reg linenum14:*, reg linenum15:V, reg linediff4:*, reg linediff5:V, reg r230:V, reg r231:V, reg p55:p(V +), reg basename1:cls, reg file17:*, reg file18:V, reg p56:p(V +), reg r234:V, reg p57:p(V +), reg r236:V, reg c70:cls, reg r237:V, reg i146:I, reg mode8:*, reg mode9:V, reg r239:V, reg c71:L, reg i148:I, reg c73:V, reg prevfilenum:*, reg prevfilenum1:V, reg filenum6:*, reg filenum7:V, reg r240:V, reg c74:L, reg i149:I, reg c75:L, reg c76:V, reg prevlinediff:*, reg prevlinediff1:V, reg linediff6:*, reg linediff7:V, reg r241:V, reg c79:L, reg c80:V, reg c83:L, reg c84:V, reg c86:L, reg srcFilenames10:*, reg srcFilenames11:V, reg c87:L, reg i156:I, reg srcFilenames13:V, reg dr64:V, reg dc32:L, reg dx69:V, reg i158:I, reg dx70:V, reg filenum8:*, reg filenum9:V, reg __6:cls, reg r242:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r243:V, reg i161:I, reg r244:V, reg paste3:cls, reg linenum16:*, reg linenum17:V, reg linediff8:*, reg linediff9:V, reg r245:V, reg p58:p(V +), reg basename2:cls, reg file19:*, reg file20:V, reg p59:p(V +), reg r248:V, reg p60:p(V +), reg r250:V, reg line12:*, reg line13:V, reg c88:cls, reg r251:V, reg i162:I, reg sym26:cls, reg base26:cls, reg guard26:L, reg r253:V, reg i165:I, reg r254:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r255:V, reg i168:I, reg r256:V, reg chunk46:*, reg chunk47:V, reg attr5:cls, reg r257:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r258:V, reg i171:I, reg r259:V, reg linenum18:*, reg linenum19:V, reg linediff10:*, reg linediff11:V, reg r260:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r261:V, reg i174:I, reg r262:V, reg line14:*, reg line15:V, reg length3:cls, reg r263:V, reg rep_int:cls, reg r264:V, reg c89:cls, reg r265:V, reg sym30:cls, reg base30:cls, reg guard30:L, reg r266:V, reg i177:I, reg r267:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r268:V, reg i180:I, reg r269:V, reg chunk48:*, reg chunk49:V, reg attr6:cls, reg r270:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r271:V, reg i183:I, reg r272:V, reg filenum10:*, reg filenum11:V, reg sym33:cls, reg base33:cls, reg guard33:L, reg r273:V, reg i186:I, reg r274:V, reg line16:*, reg line17:V, reg length4:cls, reg r275:V, reg rep_int1:cls, reg r276:V, reg c90:cls, reg r277:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r278:V, reg i189:I, reg r279:V, reg chunk50:*, reg chunk51:V, reg line18:*, reg line19:V, reg c91:cls, reg r280:V, reg srclines:*, reg srclines1:V, reg l28:*, reg attr__4:cls, reg r281:V, reg srcfilenum:*, reg srcfilenum1:V, reg l29:*, reg attr__5:cls, reg r282:V, reg srcFilenames14:*, reg srcFilenames15:V, reg l30:*, reg attr__6:cls, reg r283:V, reg filenum12:*, reg filenum13:V, reg linediff12:*, reg linediff13:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r284:V, reg r285:V, reg chunk52:*, reg chunk53:V, reg c92:V, reg r286:V, reg c93:L, reg mode10:*, reg mode11:V, reg r287:V, reg c94:L, reg driver36:*, reg driver37:V, reg c95:L, reg driver39:V, reg dr66:V, reg dc33:L, reg dx71:V, reg dx72:V, reg r288:V, reg dx73:cls, reg drobj20:*, reg drobj21:V, reg p61:p(V +), reg chunk54:*, reg chunk55:V, reg p62:p(V +), reg r291:V, reg r292:V, reg driver40:*, reg driver41:V, reg c96:L, reg driver43:V, reg dr68:V, reg dc34:L, reg dx74:V, reg dx75:V, reg r293:V, reg dx76:cls, reg drobj22:*, reg drobj23:V, reg p63:p(V +), reg chunk56:*, reg chunk57:V, reg p64:p(V +), reg chunkopts22:*, reg chunkopts23:V, reg p65:p(V +), reg r297:V, reg sym36:cls, reg base36:cls, reg guard36:L, reg r299:V, reg on_exit1:cls, reg r301:V, reg srcFilenames16:*, reg srcFilenames17:V, reg l31:*, reg c97:L, reg srcFilenames19:V, reg l33:*, reg dr70:V, reg dc35:L, reg dx77:V, reg dx78:V, reg r302:V, reg driver44:*, reg driver45:V, reg c98:L, reg driver47:V, reg dr72:V, reg dc36:L, reg dx79:V, reg dx80:V, reg r303:V, reg dx81:cls, reg drobj24:*, reg drobj25:V, reg p66:p(V +), reg r305:V |
    mkenv;
    st file = file;
    driver_isMissing = missing.0(driver);
    if driver_isMissing then L0() else L1(driver);
  L0():
    p = prom<V +>{
      RweaveLatex = ldf RweaveLatex;
      r = dyn RweaveLatex();
      return r;
    };
    goto L1(p);
  L1(driver_orDefault):
    st driver = driver_orDefault;
    syntax_isMissing = missing.0(syntax);
    if syntax_isMissing then L2() else L3(syntax);
  L2():
    p1 = prom<V +>{
      getOption = ldf getOption;
      r2 = dyn getOption("SweaveSyntax");
      return r2;
    };
    goto L3(p1);
  L3(syntax_orDefault):
    st syntax = syntax_orDefault;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L4("") else L4(encoding);
  L4(encoding_orDefault):
    st encoding = encoding_orDefault;
    st `...` = ddd;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L96() else L97();
  L5(r5):
    c1 = `as.logical`(r5);
    if c1 then L99() else L6();
  L96():
    driver1 = ld driver;
    check L98() else D0();
  L97():
    r4 = dyn base(<sym driver>);
    goto L5(r4);
  D0():
    deopt 1 [driver1];
  L6():
    sym1 = ldf `is.function`;
    base1 = ldf `is.function` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L104() else L105();
  L7():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L112() else L113();
  L98():
    driver2 = force? driver1;
    checkMissing(driver2);
    c = `is.character`(driver2);
    goto L5(c);
  L99():
    get = ldf get;
    check L100() else D1();
  D1():
    deopt 5 [];
  L8(r12):
    c2 = `as.logical`(r12);
    if c2 then L108() else L9();
  L10(r16):
    c4 = `as.logical`(r16);
    if c4 then L115() else L11();
  L100():
    p2 = prom<V +>{
      driver3 = ld driver;
      driver4 = force? driver3;
      checkMissing(driver4);
      return driver4;
    };
    r7 = dyn get[, mode](p2, "function");
    check L101() else D2();
  L104():
    driver5 = ld driver;
    check L106() else D4();
  L105():
    r11 = dyn base1(<sym driver>);
    goto L8(r11);
  L112():
    syntax1 = ld syntax;
    check L114() else D8();
  L113():
    r15 = dyn base2(<sym syntax>);
    goto L10(r15);
  D2():
    deopt 9 [r7];
  D4():
    deopt 15 [driver5];
  D8():
    deopt 26 [syntax1];
  L9():
    goto L7();
  L11():
    goto L12();
  L12():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L119() else L120();
  L101():
    checkFun.0(r7);
    r8 = r7 as cls;
    r9 = dyn r8();
    check L102() else D3();
  L106():
    driver6 = force? driver5;
    checkMissing(driver6);
    is_function = ldf `is.function` in base;
    r13 = dyn is_function(driver6);
    check L107() else D5();
  L108():
    driver7 = ldf driver;
    check L109() else D6();
  L114():
    syntax2 = force? syntax1;
    checkMissing(syntax2);
    c3 = `==`(syntax2, NULL);
    goto L10(c3);
  L115():
    SweaveGetSyntax = ldf SweaveGetSyntax;
    check L116() else D9();
  D3():
    deopt 11 [r9];
  D5():
    deopt 18 [r13];
  D6():
    deopt 20 [];
  D9():
    deopt 30 [];
  L13(r21):
    c6 = `as.logical`(r21);
    if c6 then L122() else L14();
  L102():
    st driver = r9;
    goto L7();
  L107():
    goto L8(r13);
  L109():
    r14 = dyn driver7();
    check L110() else D7();
  L116():
    p3 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r18 = dyn SweaveGetSyntax(p3);
    check L117() else D10();
  L119():
    syntax3 = ld syntax;
    check L121() else D11();
  L120():
    r20 = dyn base3(<sym syntax>);
    goto L13(r20);
  D7():
    deopt 21 [r14];
  D10():
    deopt 32 [r18];
  D11():
    deopt 37 [syntax3];
  L14():
    goto L15();
  L15():
    _Platform = ld `.Platform`;
    check L126() else D14();
  L110():
    st driver = r14;
    goto L7();
  L117():
    st syntax = r18;
    goto L12();
  L121():
    syntax4 = force? syntax3;
    checkMissing(syntax4);
    c5 = `is.character`(syntax4);
    goto L13(c5);
  L122():
    get1 = ldf get;
    check L123() else D12();
  D12():
    deopt 41 [];
  D14():
    deopt 49 [_Platform];
  L123():
    p4 = prom<V +>{
      syntax5 = ld syntax;
      syntax6 = force? syntax5;
      checkMissing(syntax6);
      return syntax6;
    };
    r23 = dyn get1[, mode](p4, "list");
    check L124() else D13();
  L126():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c7 = `is.object`(_Platform1);
    if c7 then L128() else L129(_Platform1);
  D13():
    deopt 45 [r23];
  L124():
    st syntax = r23;
    goto L15();
  L127(dx1):
    r26 = `==`(dx1, "windows");
    c8 = `as.logical`(r26);
    if c8 then L131() else L16();
  L128():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L130() else L129(dr);
  L129(_Platform3):
    r25 = `$`(_Platform3, <sym OS.type>);
    goto L127(r25);
  L16():
    goto L17();
  L17():
    SweaveReadFile = ldf SweaveReadFile;
    check L135() else D17();
  L130():
    dx = getTryDispatchBuiltinValue(dr);
    goto L127(dx);
  L131():
    chartr = ldf chartr;
    check L132() else D15();
  D15():
    deopt 55 [];
  D17():
    deopt 64 [];
  L132():
    p5 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r28 = dyn chartr("\\", "/", p5);
    check L133() else D16();
  L135():
    p6 = prom<V +>{
      file5 = ld file;
      file6 = force? file5;
      checkMissing(file6);
      return file6;
    };
    p7 = prom<V +>{
      syntax7 = ld syntax;
      syntax8 = force? syntax7;
      checkMissing(syntax8);
      return syntax8;
    };
    p8 = prom<V +>{
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      return encoding2;
    };
    r33 = dyn SweaveReadFile[, , encoding](p6, p7, p8);
    check L136() else D18();
  D16():
    deopt 59 [r28];
  D18():
    deopt 69 [r33];
  L133():
    st file = r28;
    goto L17();
  L136():
    st text = r33;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L137() else L138();
  L18(r35):
    st encoding = r35;
    l = ld file;
    attr__ = ldf `attr<-`;
    check L141() else D21();
  L137():
    text = ld text;
    check L139() else D19();
  L138():
    r34 = dyn base4(<sym text>, "encoding");
    goto L18(r34);
  D19():
    deopt 73 [text];
  D21():
    deopt 80 [r35, l, r35];
  L139():
    text1 = force? text;
    checkMissing(text1);
    attr = ldf attr in base;
    r36 = dyn attr(text1, "encoding");
    check L140() else D20();
  L141():
    r37 = dyn attr__(l, NULL, "encoding", r35);
    check L142() else D22();
  D20():
    deopt 77 [r36];
  D22():
    deopt 83 [r35, r37];
  L140():
    goto L18(r36);
  L142():
    st file = r37;
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L143() else L144();
  L19(r39):
    st srcFilenames = r39;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L147() else L148();
  L143():
    text2 = ld text;
    check L145() else D23();
  L144():
    r38 = dyn base5(<sym text>, "files");
    goto L19(r38);
  D23():
    deopt 87 [text2];
  L20(r42):
    st srcFilenum = r42;
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L151() else L152();
  L145():
    text3 = force? text2;
    checkMissing(text3);
    attr1 = ldf attr in base;
    r40 = dyn attr1(text3, "files");
    check L146() else D24();
  L147():
    text4 = ld text;
    check L149() else D25();
  L148():
    r41 = dyn base6(<sym text>, "srcFilenum");
    goto L20(r41);
  D24():
    deopt 91 [r40];
  D25():
    deopt 95 [text4];
  L21(r45):
    st srcLinenum = r45;
    driver8 = ld driver;
    check L155() else D29();
  L146():
    goto L19(r40);
  L149():
    text5 = force? text4;
    checkMissing(text5);
    attr2 = ldf attr in base;
    r43 = dyn attr2(text5, "srcFilenum");
    check L150() else D26();
  L151():
    text6 = ld text;
    check L153() else D27();
  L152():
    r44 = dyn base7(<sym text>, "srcLinenum");
    goto L21(r44);
  D26():
    deopt 99 [r43];
  D27():
    deopt 103 [text6];
  D29():
    deopt 109 [driver8];
  L150():
    goto L20(r43);
  L153():
    text7 = force? text6;
    checkMissing(text7);
    attr3 = ldf attr in base;
    r46 = dyn attr3(text7, "srcLinenum");
    check L154() else D28();
  L155():
    driver9 = force? driver8;
    checkMissing(driver9);
    c9 = `is.object`(driver9);
    if c9 then L157() else L158(driver9);
  D28():
    deopt 107 [r46];
  L154():
    goto L21(r46);
  L156(dx3):
    checkFun.0(dx3);
    dx4 = dx3 as cls;
    p9 = prom<V +>{
      file7 = ld file;
      file8 = force? file7;
      checkMissing(file8);
      return file8;
    };
    p10 = prom<V +>{
      syntax9 = ld syntax;
      syntax10 = force? syntax9;
      checkMissing(syntax10);
      return syntax10;
    };
    ddd1 = ld `...`;
    r50 = dyn dx4[file, syntax, `...`](p9, p10, ddd1);
    check L160() else D30();
  L157():
    dr2 = tryDispatchBuiltin.1("$", driver9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L159() else L158(dr2);
  L158(driver11):
    r47 = `$`(driver11, <sym setup>);
    goto L156(r47);
  D30():
    deopt 118 [r50];
  L159():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L156(dx2);
  L160():
    st drobj = r50;
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L161() else L162();
  L22():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L163() else L164();
  L161():
    on_exit = ldf `on.exit` in base;
    r53 = dyn on_exit(<lang `$`(driver, finish)(drobj, error=TRUE)>);
    goto L22();
  L162():
    r51 = dyn base8(<lang `$`(driver, finish)(drobj, error=TRUE)>);
    goto L22();
  L23(r55):
    st syntax = r55;
    sym10 = ldf `is.na`;
    base10 = ldf `is.na` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L167() else L168();
  L163():
    text8 = ld text;
    check L165() else D31();
  L164():
    r54 = dyn base9(<sym text>, "syntax");
    goto L23(r54);
  D31():
    deopt 125 [text8];
  L24(r58):
    r61 = `!`(r58);
    c10 = `as.logical`(r61);
    if c10 then L172() else L25();
  L165():
    text9 = force? text8;
    checkMissing(text9);
    attr4 = ldf attr in base;
    r56 = dyn attr4(text9, "syntax");
    check L166() else D32();
  L167():
    Sys_getenv = ldf `Sys.getenv`;
    check L169() else D33();
  L168():
    r57 = dyn base10(<lang `<-`(envopts, Sys.getenv("SWEAVE_OPTIONS", NA_LGL))>);
    goto L24(r57);
  D32():
    deopt 129 [r56];
  D33():
    deopt 134 [];
  L25():
    goto L26();
  L26():
    file9 = ld file;
    check L180() else D38();
  L166():
    goto L23(r56);
  L169():
    r59 = dyn Sys_getenv("SWEAVE_OPTIONS", NA_LGL);
    check L170() else D34();
  L172():
    SweaveParseOptions = ldf SweaveParseOptions;
    check L173() else D36();
  D34():
    deopt 137 [r59];
  D36():
    deopt 143 [];
  D38():
    deopt 153 [file9];
  L170():
    st envopts = r59;
    is_na = ldf `is.na` in base;
    r60 = dyn is_na(r59);
    check L171() else D35();
  L173():
    p11 = prom<V +>{
      envopts = ld envopts;
      envopts1 = force? envopts;
      checkMissing(envopts1);
      return envopts1;
    };
    p12 = prom<V +>{
      drobj = ld drobj;
      drobj1 = force? drobj;
      checkMissing(drobj1);
      c11 = `is.object`(drobj1);
      if c11 then L1() else L2(drobj1);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("$", drobj1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(drobj3):
      r63 = `$`(drobj3, <sym options>);
      goto L0(r63);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p13 = prom<V +>{
      driver12 = ld driver;
      driver13 = force? driver12;
      checkMissing(driver13);
      c12 = `is.object`(driver13);
      if c12 then L1() else L2(driver13);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("$", driver13);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(driver15):
      r65 = `$`(driver15, <sym checkopts>);
      goto L0(r65);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r67 = dyn SweaveParseOptions(p11, p12, p13);
    check L174() else D37();
  L180():
    file10 = force? file9;
    checkMissing(file10);
    l4 = ld drobj;
    c14 = `is.object`(l4);
    if c14 then L182() else L183(file10, l4);
  D35():
    deopt 140 [r60];
  D37():
    deopt 147 [r67];
  L171():
    goto L24(r60);
  L174():
    l1 = ld drobj;
    c13 = `is.object`(l1);
    if c13 then L176() else L177(r67, l1);
  L181(dx12):
    st drobj = dx12;
    st mode = "doc";
    st chunknr = 0;
    st chunk = NULL;
    st chunkopts = NULL;
    sym11 = ldf list;
    base11 = ldf list in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L185() else L186();
  L182():
    dr10 = tryDispatchBuiltin.0("$<-", l4, file10);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L184() else L183(file10, dr10);
  L183(file12, l6):
    r74 = `$<-`(l6, <sym filename>, file10);
    goto L181(r74);
  L27(r76):
    st namedchunks = r76;
    st prevfilenum = 0;
    st prevlinediff = 0;
    sym12 = ldf seq_along;
    base12 = ldf seq_along in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L188() else L189();
  L175(r71, dx10):
    st drobj = dx10;
    goto L26();
  L176():
    dr8 = tryDispatchBuiltin.0("$<-", l1, r67);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L178() else L177(r67, dr8);
  L177(r69, l3):
    r72 = `$<-`(l3, <sym options>, r67);
    goto L175(r69, r72);
  L184():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L181(dx11);
  L185():
    list = ldf list in base;
    r77 = dyn list();
    check L187() else D39();
  L186():
    r75 = dyn base11();
    goto L27(r75);
  D39():
    deopt 173 [r77];
  L28(r79):
    s = toForSeq(r79);
    l7 = length(s);
    i = 0;
    goto L29(i);
  L178():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L175(r67, dx9);
  L187():
    goto L27(r77);
  L188():
    text10 = ld text;
    check L190() else D40();
  L189():
    r78 = dyn base12(<sym text>);
    goto L28(r78);
  D40():
    deopt 182 [text10];
  L29(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l7, i2);
    if c15 then L191() else L89();
  L190():
    text11 = force? text10;
    checkMissing(text11);
    r80 = seq_along(text11);
    goto L28(r80);
  L89():
    x = `[[`(s, i2, NULL, TRUE);
    st linenum = x;
    text12 = ld text;
    check L192() else D41();
  L191():
    sym35 = ldf `is.null`;
    base35 = ldf `is.null` in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L449() else L450();
  D41():
    deopt 185 [i2, text12];
  L90(r285):
    r286 = `!`(r285);
    c93 = `as.logical`(r286);
    if c93 then L452() else L91();
  L192():
    text13 = force? text12;
    checkMissing(text13);
    c16 = `is.object`(text13);
    if c16 then L193() else L194(i2, text13);
  L449():
    chunk52 = ld chunk;
    check L451() else D158();
  L450():
    r284 = dyn base35(<sym chunk>);
    goto L90(r284);
  D158():
    deopt 610 [chunk52];
  L30(i8, dx14):
    st line = dx14;
    srcFilenum = ld srcFilenum;
    check L197() else D43();
  L91():
    goto L94();
  L94():
    sym36 = ldf `on.exit`;
    base36 = ldf `on.exit` in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L469() else L470();
  L193():
    dr12 = tryDispatchBuiltin.1("[", text13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L195() else L194(i2, dr12);
  L194(i6, text15):
    linenum = ld linenum;
    check L196() else D42();
  L451():
    chunk53 = force? chunk52;
    checkMissing(chunk53);
    c92 = `==`(chunk53, NULL);
    goto L90(c92);
  L452():
    mode10 = ld mode;
    check L453() else D159();
  D42():
    deopt 187 [i6, text15, linenum];
  D43():
    deopt 191 [i8, srcFilenum];
  D159():
    deopt 614 [mode10];
  L95():
    srcFilenames16 = ld srcFilenames;
    check L471() else D164();
  L195():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L30(i2, dx13);
  L196():
    linenum1 = force? linenum;
    __ = ldf `[` in base;
    r81 = dyn __(text15, linenum1);
    goto L30(i6, r81);
  L197():
    srcFilenum1 = force? srcFilenum;
    checkMissing(srcFilenum1);
    c17 = `is.object`(srcFilenum1);
    if c17 then L198() else L199(i8, srcFilenum1);
  L453():
    mode11 = force? mode10;
    checkMissing(mode11);
    r287 = `==`(mode11, "doc");
    c94 = `as.logical`(r287);
    if c94 then L454() else L92();
  L469():
    on_exit1 = ldf `on.exit` in base;
    r301 = dyn on_exit1();
    goto L95();
  L470():
    r299 = dyn base36();
    goto L95();
  D164():
    deopt 639 [srcFilenames16];
  L31(i12, dx16):
    st filenum = dx16;
    srcLinenum = ld srcLinenum;
    check L202() else D45();
  L92():
    driver40 = ld driver;
    check L462() else D162();
  L93(r292):
    st drobj = r292;
    goto L94();
  L198():
    dr14 = tryDispatchBuiltin.1("[", srcFilenum1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L200() else L199(i8, dr14);
  L199(i10, srcFilenum3):
    linenum2 = ld linenum;
    check L201() else D44();
  L454():
    driver36 = ld driver;
    check L455() else D160();
  L471():
    srcFilenames17 = force? srcFilenames16;
    checkMissing(srcFilenames17);
    l31 = ld drobj;
    c97 = `is.object`(l31);
    if c97 then L473() else L474(srcFilenames17, l31);
  D44():
    deopt 193 [i10, srcFilenum3, linenum2];
  D45():
    deopt 197 [i12, srcLinenum];
  D160():
    deopt 618 [driver36];
  D162():
    deopt 625 [driver40];
  L200():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L31(i8, dx15);
  L201():
    linenum3 = force? linenum2;
    __1 = ldf `[` in base;
    r82 = dyn __1(srcFilenum3, linenum3);
    goto L31(i10, r82);
  L202():
    srcLinenum1 = force? srcLinenum;
    checkMissing(srcLinenum1);
    c18 = `is.object`(srcLinenum1);
    if c18 then L203() else L204(i12, srcLinenum1);
  L455():
    driver37 = force? driver36;
    checkMissing(driver37);
    c95 = `is.object`(driver37);
    if c95 then L457() else L458(driver37);
  L462():
    driver41 = force? driver40;
    checkMissing(driver41);
    c96 = `is.object`(driver41);
    if c96 then L464() else L465(driver41);
  L472(dx78):
    st drobj = dx78;
    driver44 = ld driver;
    check L476() else D165();
  L473():
    dr70 = tryDispatchBuiltin.0("$<-", l31, srcFilenames17);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L475() else L474(srcFilenames17, dr70);
  L474(srcFilenames19, l33):
    r302 = `$<-`(l33, <sym srcFilenames>, srcFilenames17);
    goto L472(r302);
  D165():
    deopt 644 [driver44];
  L32(i16, dx18):
    linenum6 = ld linenum;
    check L207() else D47();
  L203():
    dr16 = tryDispatchBuiltin.1("[", srcLinenum1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L205() else L204(i12, dr16);
  L204(i14, srcLinenum3):
    linenum4 = ld linenum;
    check L206() else D46();
  L456(dx72):
    checkFun.0(dx72);
    dx73 = dx72 as cls;
    p61 = prom<V +>{
      drobj20 = ld drobj;
      drobj21 = force? drobj20;
      checkMissing(drobj21);
      return drobj21;
    };
    p62 = prom<V +>{
      chunk54 = ld chunk;
      chunk55 = force? chunk54;
      checkMissing(chunk55);
      return chunk55;
    };
    r291 = dyn dx73(p61, p62);
    check L460() else D161();
  L457():
    dr66 = tryDispatchBuiltin.1("$", driver37);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L459() else L458(dr66);
  L458(driver39):
    r288 = `$`(driver39, <sym writedoc>);
    goto L456(r288);
  L463(dx75):
    checkFun.0(dx75);
    dx76 = dx75 as cls;
    p63 = prom<V +>{
      drobj22 = ld drobj;
      drobj23 = force? drobj22;
      checkMissing(drobj23);
      return drobj23;
    };
    p64 = prom<V +>{
      chunk56 = ld chunk;
      chunk57 = force? chunk56;
      checkMissing(chunk57);
      return chunk57;
    };
    p65 = prom<V +>{
      chunkopts22 = ld chunkopts;
      chunkopts23 = force? chunkopts22;
      checkMissing(chunkopts23);
      return chunkopts23;
    };
    r297 = dyn dx76(p63, p64, p65);
    check L467() else D163();
  L464():
    dr68 = tryDispatchBuiltin.1("$", driver41);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L466() else L465(dr68);
  L465(driver43):
    r293 = `$`(driver43, <sym runcode>);
    goto L463(r293);
  L475():
    dx77 = getTryDispatchBuiltinValue(dr70);
    goto L472(dx77);
  L476():
    driver45 = force? driver44;
    checkMissing(driver45);
    c98 = `is.object`(driver45);
    if c98 then L478() else L479(driver45);
  D46():
    deopt 199 [i14, srcLinenum3, linenum4];
  D47():
    deopt 201 [i16, dx18, linenum6];
  D161():
    deopt 624 [r291];
  D163():
    deopt 632 [r297];
  L205():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L32(i12, dx17);
  L206():
    linenum5 = force? linenum4;
    __2 = ldf `[` in base;
    r83 = dyn __2(srcLinenum3, linenum5);
    goto L32(i14, r83);
  L207():
    linenum7 = force? linenum6;
    checkMissing(linenum7);
    r84 = `-`(dx18, linenum7);
    st linediff = r84;
    sym13 = ldf nzchar;
    base13 = ldf nzchar in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L208() else L209();
  L459():
    dx71 = getTryDispatchBuiltinValue(dr66);
    goto L456(dx71);
  L460():
    goto L93(r291);
  L466():
    dx74 = getTryDispatchBuiltinValue(dr68);
    goto L463(dx74);
  L467():
    goto L93(r297);
  L477(dx80):
    checkFun.0(dx80);
    dx81 = dx80 as cls;
    p66 = prom<V +>{
      drobj24 = ld drobj;
      drobj25 = force? drobj24;
      checkMissing(drobj25);
      return drobj25;
    };
    r305 = dyn dx81(p66);
    check L481() else D166();
  L478():
    dr72 = tryDispatchBuiltin.1("$", driver45);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L480() else L479(dr72);
  L479(driver47):
    r303 = `$`(driver47, <sym finish>);
    goto L477(r303);
  D166():
    deopt 649 [r305];
  L33(i19, r86):
    c19 = `as.logical`(r86);
    if c19 then L213() else L34();
  L208():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L210() else D48();
  L209():
    r85 = dyn base13(<lang Sys.getenv("R_DEBUG_Sweave")>);
    goto L33(i16, r85);
  L480():
    dx79 = getTryDispatchBuiltinValue(dr72);
    goto L477(dx79);
  L481():
    popenv;
    return r305;
  D48():
    deopt 208 [i16];
  L34():
    goto L35(i19);
  L35(i22):
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L219() else L220();
  L210():
    r87 = dyn Sys_getenv1("R_DEBUG_Sweave");
    check L211() else D49();
  L213():
    cat = ldf cat;
    check L214() else D51();
  D49():
    deopt 210 [i16, r87];
  D51():
    deopt 214 [i19];
  L36(i25, r113):
    c23 = `as.logical`(r113);
    if c23 then L224() else L37();
  L211():
    nzchar = ldf nzchar in base;
    r88 = dyn nzchar(r87);
    check L212() else D50();
  L214():
    p18 = prom<V +>{
      sprintf = ldf sprintf;
      p14 = prom<V +>{
        linenum8 = ld linenum;
        linenum9 = force? linenum8;
        checkMissing(linenum9);
        return linenum9;
      };
      p16 = prom<V +>{
        substr = ldf substr;
        p15 = prom<V +>{
          line = ld line;
          line1 = force? line;
          checkMissing(line1);
          return line1;
        };
        r91 = dyn substr(p15, 1.0, 30.0);
        return r91;
      };
      p17 = prom<V +>{
        mode = ld mode;
        mode1 = force? mode;
        checkMissing(mode1);
        return mode1;
      };
      r94 = dyn sprintf("l.%3d: %30s -'%4s'- ", p14, p16, p17);
      return r94;
    };
    r96 = dyn cat(p18);
    check L215() else D52();
  L219():
    grep = ldf grep;
    check L221() else D55();
  L220():
    r112 = dyn base14(<lang grep(`$`(syntax, doc), line)>);
    goto L36(i22, r112);
  D50():
    deopt 212 [i16, r88];
  D52():
    deopt 216 [i19, r96];
  D55():
    deopt 226 [i22];
  L37():
    sym18 = ldf length;
    base18 = ldf length in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L269() else L270();
  L50(i69):
    filenum12 = ld filenum;
    check L447() else D156();
  L212():
    goto L33(i16, r88);
  L215():
    cat1 = ldf cat;
    check L216() else D53();
  L221():
    p24 = prom<V +>{
      syntax11 = ld syntax;
      syntax12 = force? syntax11;
      checkMissing(syntax12);
      c22 = `is.object`(syntax12);
      if c22 then L1() else L2(syntax12);
    L0(dx24):
      return dx24;
    L1():
      dr22 = tryDispatchBuiltin.1("$", syntax12);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(syntax14):
      r114 = `$`(syntax14, <sym doc>);
      goto L0(r114);
    L3():
      dx23 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx23);
    };
    p25 = prom<V +>{
      line2 = ld line;
      line3 = force? line2;
      checkMissing(line3);
      return line3;
    };
    r117 = dyn grep(p24, p25);
    check L222() else D56();
  L224():
    mode2 = ld mode;
    check L225() else D58();
  D53():
    deopt 218 [i19];
  D56():
    deopt 229 [i22, r117];
  D58():
    deopt 232 [i25, mode2];
  D156():
    deopt 600 [i69, filenum12];
  L51(i72, r146):
    c37 = `as.logical`(r146);
    if c37 then L274() else L52();
  L216():
    p23 = prom<V +>{
      sprintf1 = ldf sprintf;
      p22 = prom<V +>{
        system = ldf system;
        p21 = prom<V +>{
          paste = ldf paste;
          p20 = prom<V +>{
            summary = ldf summary;
            p19 = prom<V +>{
              drobj4 = ld drobj;
              drobj5 = force? drobj4;
              checkMissing(drobj5);
              c20 = `is.object`(drobj5);
              if c20 then L1() else L2(drobj5);
            L0(dx20):
              return dx20;
            L1():
              dr18 = tryDispatchBuiltin.1("$", drobj5);
              dc9 = getTryDispatchBuiltinDispatched(dr18);
              if dc9 then L3() else L2(dr18);
            L2(drobj7):
              r97 = `$`(drobj7, <sym output>);
              goto L0(r97);
            L3():
              dx19 = getTryDispatchBuiltinValue(dr18);
              goto L0(dx19);
            };
            r99 = dyn summary(p19);
            c21 = `is.object`(r99);
            if c21 then L1() else L2(r99);
          L0(dx22):
            return dx22;
          L1():
            dr20 = tryDispatchBuiltin.1("$", r99);
            dc10 = getTryDispatchBuiltinDispatched(dr20);
            if dc10 then L3() else L2(dr20);
          L2(r101):
            r102 = `$`(r101, <sym description>);
            goto L0(r102);
          L3():
            dx21 = getTryDispatchBuiltinValue(dr20);
            goto L0(dx21);
          };
          r104 = dyn paste("ls -s", p20);
          return r104;
        };
        r106 = dyn system[, intern](p21, TRUE);
        return r106;
      };
      r108 = dyn sprintf1("%16s\n", p22);
      return r108;
    };
    r110 = dyn cat1(p23);
    check L217() else D54();
  L222():
    length = ldf length in base;
    r118 = dyn length(r117);
    check L223() else D57();
  L225():
    mode3 = force? mode2;
    checkMissing(mode3);
    r119 = `==`(mode3, "doc");
    c24 = `as.logical`(r119);
    if c24 then L226() else L38();
  L269():
    grep1 = ldf grep;
    check L271() else D68();
  L270():
    r145 = dyn base18(<lang grep(`$`(syntax, code), line)>);
    goto L51(i25, r145);
  L447():
    filenum13 = force? filenum12;
    checkMissing(filenum13);
    st prevfilenum = filenum13;
    linediff12 = ld linediff;
    check L448() else D157();
  D54():
    deopt 220 [i19, r110];
  D57():
    deopt 231 [i22, r118];
  D68():
    deopt 292 [i25];
  D157():
    deopt 603 [i69, linediff12];
  L38():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L239() else L240();
  L42(i40):
    st chunk = NULL;
    goto L50(i40);
  L52():
    mode6 = ld mode;
    check L346() else D101();
  L217():
    goto L35(i19);
  L223():
    goto L36(i22, r118);
  L226():
    sym15 = ldf `is.null`;
    base15 = ldf `is.null` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L227() else L228();
  L271():
    p31 = prom<V +>{
      syntax15 = ld syntax;
      syntax16 = force? syntax15;
      checkMissing(syntax16);
      c36 = `is.object`(syntax16);
      if c36 then L1() else L2(syntax16);
    L0(dx38):
      return dx38;
    L1():
      dr34 = tryDispatchBuiltin.1("$", syntax16);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(syntax18):
      r147 = `$`(syntax18, <sym code>);
      goto L0(r147);
    L3():
      dx37 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx37);
    };
    p32 = prom<V +>{
      line4 = ld line;
      line5 = force? line4;
      checkMissing(line5);
      return line5;
    };
    r150 = dyn grep1(p31, p32);
    check L272() else D69();
  L274():
    mode4 = ld mode;
    check L275() else D71();
  L448():
    linediff13 = force? linediff12;
    checkMissing(linediff13);
    st prevlinediff = linediff13;
    goto L29(i69);
  D69():
    deopt 295 [i25, r150];
  D71():
    deopt 298 [i72, mode4];
  D101():
    deopt 417 [i72, mode6];
  L39(i32, r121):
    r122 = `!`(r121);
    c26 = `as.logical`(r122);
    if c26 then L230() else L40();
  L43(i43, r130):
    r132 = `!`(r130);
    c30 = `as.logical`(r132);
    if c30 then L246() else L44();
  L227():
    chunk = ld chunk;
    check L229() else D59();
  L228():
    r120 = dyn base15(<sym chunk>);
    goto L39(i25, r120);
  L239():
    chunkopts = ld chunkopts;
    check L241() else D62();
  L240():
    r129 = dyn base16(<lang `$`(chunkopts, label)>);
    goto L43(i25, r129);
  L272():
    length1 = ldf length in base;
    r151 = dyn length1(r150);
    check L273() else D70();
  L275():
    mode5 = force? mode4;
    checkMissing(mode5);
    r152 = `==`(mode5, "doc");
    c38 = `as.logical`(r152);
    if c38 then L276() else L53();
  L346():
    mode7 = force? mode6;
    checkMissing(mode7);
    r200 = `==`(mode7, "code");
    c55 = `as.logical`(r200);
    if c55 then L347() else L65(i72, c55);
  D59():
    deopt 237 [i25, chunk];
  D62():
    deopt 252 [i25, chunkopts];
  D70():
    deopt 297 [i25, r151];
  L40():
    goto L41(i32, NULL);
  L41(i39, r127):
    goto L42(i39);
  L44():
    goto L46(i43);
  L46(i58):
    sym17 = ldf `is.null`;
    base17 = ldf `is.null` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L257() else L258();
  L53():
    sym20 = ldf `is.null`;
    base20 = ldf `is.null` in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L289() else L290();
  L57(i87):
    st mode = "code";
    sub = ldf sub;
    check L318() else D81();
  L65(i124, c57):
    c65 = `as.logical`(c57);
    if c65 then L354() else L67();
  L229():
    chunk1 = force? chunk;
    checkMissing(chunk1);
    c25 = `==`(chunk1, NULL);
    goto L39(i25, c25);
  L230():
    driver16 = ld driver;
    check L231() else D60();
  L241():
    chunkopts1 = force? chunkopts;
    checkMissing(chunkopts1);
    c28 = `is.object`(chunkopts1);
    if c28 then L243() else L244(i25, chunkopts1);
  L246():
    chunk4 = ld chunk;
    check L247() else D63();
  L273():
    goto L51(i25, r151);
  L276():
    sym19 = ldf `is.null`;
    base19 = ldf `is.null` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L277() else L278();
  L347():
    sym22 = ldf length;
    base22 = ldf length in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L348() else L349();
  D60():
    deopt 241 [i32, driver16];
  D63():
    deopt 257 [i43, chunk4];
  D81():
    deopt 353 [i87];
  L47(i61, r136):
    r137 = `!`(r136);
    c34 = `as.logical`(r137);
    if c34 then L260() else L48();
  L54(i79, r154):
    r155 = `!`(r154);
    c40 = `as.logical`(r155);
    if c40 then L280() else L55();
  L58(i90, r163):
    r165 = `!`(r163);
    c44 = `as.logical`(r165);
    if c44 then L296() else L59();
  L66(i127, c60, r202):
    c62 = `as.logical`(r202);
    c63 = `&&`(c60, c62);
    goto L65(i127, c63);
  L67():
    goto L73(i124);
  L73(i146):
    mode8 = ld mode;
    check L380() else D118();
  L231():
    driver17 = force? driver16;
    checkMissing(driver17);
    c27 = `is.object`(driver17);
    if c27 then L233() else L234(i32, driver17);
  L242(i47, dx29):
    c29 = `==`(dx29, NULL);
    goto L43(i47, c29);
  L243():
    dr26 = tryDispatchBuiltin.1("$", chunkopts1);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L245() else L244(i25, dr26);
  L244(i45, chunkopts3):
    r131 = `$`(chunkopts3, <sym label>);
    goto L242(i45, r131);
  L247():
    chunk5 = force? chunk4;
    checkMissing(chunk5);
    l8 = ld namedchunks;
    c31 = `is.object`(l8);
    if c31 then L248() else L249(i43, chunk5, l8);
  L257():
    chunk19 = ld chunk;
    check L259() else D65();
  L258():
    r135 = dyn base17(<sym chunk>);
    goto L47(i58, r135);
  L277():
    chunk23 = ld chunk;
    check L279() else D72();
  L278():
    r153 = dyn base19(<sym chunk>);
    goto L54(i72, r153);
  L289():
    chunkopts10 = ld chunkopts;
    check L291() else D75();
  L290():
    r162 = dyn base20(<lang `$`(chunkopts, label)>);
    goto L58(i72, r162);
  L318():
    p38 = prom<V +>{
      syntax19 = ld syntax;
      syntax20 = force? syntax19;
      checkMissing(syntax20);
      c50 = `is.object`(syntax20);
      if c50 then L1() else L2(syntax20);
    L0(dx52):
      return dx52;
    L1():
      dr46 = tryDispatchBuiltin.1("$", syntax20);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(syntax22):
      r176 = `$`(syntax22, <sym code>);
      goto L0(r176);
    L3():
      dx51 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx51);
    };
    p39 = prom<V +>{
      line6 = ld line;
      line7 = force? line6;
      checkMissing(line7);
      return line7;
    };
    r179 = dyn sub(p38, "\\1", p39);
    check L319() else D82();
  L348():
    grep2 = ldf grep;
    check L350() else D102();
  L349():
    r201 = dyn base22(<lang grep(`$`(syntax, coderef), line)>);
    goto L66(i72, c55, r201);
  L354():
    sub1 = ldf sub;
    check L355() else D105();
  D65():
    deopt 268 [i58, chunk19];
  D72():
    deopt 303 [i72, chunk23];
  D75():
    deopt 318 [i72, chunkopts10];
  D82():
    deopt 357 [i87, r179];
  D102():
    deopt 424 [i72, c55];
  D105():
    deopt 432 [i124];
  D118():
    deopt 480 [i146, mode8];
  L45(i53, chunk9, dx31):
    st namedchunks = dx31;
    goto L46(i53);
  L48():
    goto L49(i61);
  L49(i68):
    st mode = "doc";
    goto L42(i68);
  L55():
    goto L56(i79, NULL);
  L56(i86, r160):
    goto L57(i86);
  L59():
    goto L61(i90);
  L61(i105):
    sym21 = ldf `is.null`;
    base21 = ldf `is.null` in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L307() else L308();
  L232(i38, dx26):
    checkFun.0(dx26);
    dx27 = dx26 as cls;
    p26 = prom<V +>{
      drobj8 = ld drobj;
      drobj9 = force? drobj8;
      checkMissing(drobj9);
      return drobj9;
    };
    p27 = prom<V +>{
      chunk2 = ld chunk;
      chunk3 = force? chunk2;
      checkMissing(chunk3);
      return chunk3;
    };
    r126 = dyn dx27(p26, p27);
    check L236() else D61();
  L233():
    dr24 = tryDispatchBuiltin.1("$", driver17);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L235() else L234(i32, dr24);
  L234(i36, driver19):
    r123 = `$`(driver19, <sym writedoc>);
    goto L232(i36, r123);
  L245():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L242(i25, dx28);
  L248():
    dr28 = tryDispatchBuiltin.0("[[<-", l8, chunk5);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L250() else L249(i43, chunk5, dr28);
  L249(i51, chunk7, l10):
    chunkopts4 = ld chunkopts;
    check L251() else D64();
  L259():
    chunk20 = force? chunk19;
    checkMissing(chunk20);
    c33 = `==`(chunk20, NULL);
    goto L47(i58, c33);
  L260():
    driver20 = ld driver;
    check L261() else D66();
  L279():
    chunk24 = force? chunk23;
    checkMissing(chunk24);
    c39 = `==`(chunk24, NULL);
    goto L54(i72, c39);
  L280():
    driver24 = ld driver;
    check L281() else D73();
  L291():
    chunkopts11 = force? chunkopts10;
    checkMissing(chunkopts11);
    c42 = `is.object`(chunkopts11);
    if c42 then L293() else L294(i72, chunkopts11);
  L296():
    chunk27 = ld chunk;
    check L297() else D76();
  L319():
    st chunkopts = r179;
    SweaveParseOptions1 = ldf SweaveParseOptions;
    check L320() else D83();
  L350():
    p46 = prom<V +>{
      syntax23 = ld syntax;
      syntax24 = force? syntax23;
      checkMissing(syntax24);
      c61 = `is.object`(syntax24);
      if c61 then L1() else L2(syntax24);
    L0(dx62):
      return dx62;
    L1():
      dr56 = tryDispatchBuiltin.1("$", syntax24);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(syntax26):
      r203 = `$`(syntax26, <sym coderef>);
      goto L0(r203);
    L3():
      dx61 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx61);
    };
    p47 = prom<V +>{
      line8 = ld line;
      line9 = force? line8;
      checkMissing(line9);
      return line9;
    };
    r206 = dyn grep2(p46, p47);
    check L351() else D103();
  L355():
    p48 = prom<V +>{
      syntax27 = ld syntax;
      syntax28 = force? syntax27;
      checkMissing(syntax28);
      c66 = `is.object`(syntax28);
      if c66 then L1() else L2(syntax28);
    L0(dx64):
      return dx64;
    L1():
      dr58 = tryDispatchBuiltin.1("$", syntax28);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(syntax30):
      r208 = `$`(syntax30, <sym coderef>);
      goto L0(r208);
    L3():
      dx63 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx63);
    };
    p49 = prom<V +>{
      line10 = ld line;
      line11 = force? line10;
      checkMissing(line11);
      return line11;
    };
    r211 = dyn sub1(p48, "\\1", p49);
    check L356() else D106();
  L380():
    mode9 = force? mode8;
    checkMissing(mode9);
    r239 = `==`(mode9, "code");
    c71 = `as.logical`(r239);
    if c71 then L381() else L74(i146, c71);
  D61():
    deopt 247 [i38, r126];
  D64():
    deopt 260 [i51, chunk7, l10, chunk5, chunkopts4];
  D66():
    deopt 272 [i61, driver20];
  D73():
    deopt 307 [i79, driver24];
  D76():
    deopt 323 [i90, chunk27];
  D83():
    deopt 360 [i87];
  D103():
    deopt 427 [i72, c55, r206];
  D106():
    deopt 436 [i124, r211];
  L62(i108, r169):
    r170 = `!`(r169);
    c48 = `as.logical`(r170);
    if c48 then L310() else L63();
  L74(i148, c73):
    c86 = `as.logical`(c73);
    if c86 then L389() else L76();
  L235():
    dx25 = getTryDispatchBuiltinValue(dr24);
    goto L232(i32, dx25);
  L236():
    st drobj = r126;
    goto L41(i38, r126);
  L250():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L45(i43, chunk5, dx30);
  L251():
    chunkopts5 = force? chunkopts4;
    checkMissing(chunkopts5);
    c32 = `is.object`(chunkopts5);
    if c32 then L253() else L254(i51, chunk7, l10, chunk5, chunkopts5);
  L261():
    driver21 = force? driver20;
    checkMissing(driver21);
    c35 = `is.object`(driver21);
    if c35 then L263() else L264(i61, driver21);
  L281():
    driver25 = force? driver24;
    checkMissing(driver25);
    c41 = `is.object`(driver25);
    if c41 then L283() else L284(i79, driver25);
  L292(i94, dx43):
    c43 = `==`(dx43, NULL);
    goto L58(i94, c43);
  L293():
    dr38 = tryDispatchBuiltin.1("$", chunkopts11);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L295() else L294(i72, dr38);
  L294(i92, chunkopts13):
    r164 = `$`(chunkopts13, <sym label>);
    goto L292(i92, r164);
  L297():
    chunk28 = force? chunk27;
    checkMissing(chunk28);
    l15 = ld namedchunks;
    c45 = `is.object`(l15);
    if c45 then L298() else L299(i90, chunk28, l15);
  L307():
    chunk42 = ld chunk;
    check L309() else D78();
  L308():
    r168 = dyn base21(<sym chunk>);
    goto L62(i105, r168);
  L320():
    p40 = prom<V +>{
      chunkopts20 = ld chunkopts;
      chunkopts21 = force? chunkopts20;
      checkMissing(chunkopts21);
      return chunkopts21;
    };
    p41 = prom<V +>{
      drobj16 = ld drobj;
      drobj17 = force? drobj16;
      checkMissing(drobj17);
      c51 = `is.object`(drobj17);
      if c51 then L1() else L2(drobj17);
    L0(dx54):
      return dx54;
    L1():
      dr48 = tryDispatchBuiltin.1("$", drobj17);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L3() else L2(dr48);
    L2(drobj19):
      r181 = `$`(drobj19, <sym options>);
      goto L0(r181);
    L3():
      dx53 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx53);
    };
    p42 = prom<V +>{
      driver32 = ld driver;
      driver33 = force? driver32;
      checkMissing(driver33);
      c52 = `is.object`(driver33);
      if c52 then L1() else L2(driver33);
    L0(dx56):
      return dx56;
    L1():
      dr50 = tryDispatchBuiltin.1("$", driver33);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(driver35):
      r183 = `$`(driver35, <sym checkopts>);
      goto L0(r183);
    L3():
      dx55 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx55);
    };
    r185 = dyn SweaveParseOptions1(p40, p41, p42);
    check L321() else D84();
  L351():
    length2 = ldf length in base;
    r207 = dyn length2(r206);
    check L352() else D104();
  L356():
    st chunkref = r211;
    _in_ = ldf `%in%`;
    check L357() else D107();
  L381():
    prevfilenum = ld prevfilenum;
    check L382() else D119();
  D78():
    deopt 334 [i105, chunk42];
  D84():
    deopt 364 [i87, r185];
  D104():
    deopt 429 [i72, c55, r207];
  D107():
    deopt 439 [i124];
  D119():
    deopt 484 [i146, c71, prevfilenum];
  L60(i100, chunk32, dx45):
    st namedchunks = dx45;
    goto L61(i100);
  L63():
    goto L57(i108);
  L76():
    goto L79(i148);
  L79(i162):
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L402() else L403();
  L252(i57, chunk16, l14, chunk17, dx33):
    ____ = ldf `[[<-` in base;
    r134 = dyn ____(l14, chunk17, dx33);
    goto L45(i57, chunk16, r134);
  L253():
    dr30 = tryDispatchBuiltin.1("$", chunkopts5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L255() else L254(i51, chunk7, l10, chunk5, dr30);
  L254(i55, chunk12, l12, chunk13, chunkopts7):
    r133 = `$`(chunkopts7, <sym label>);
    goto L252(i55, chunk12, l12, chunk13, r133);
  L262(i67, dx35):
    checkFun.0(dx35);
    dx36 = dx35 as cls;
    p28 = prom<V +>{
      drobj10 = ld drobj;
      drobj11 = force? drobj10;
      checkMissing(drobj11);
      return drobj11;
    };
    p29 = prom<V +>{
      chunk21 = ld chunk;
      chunk22 = force? chunk21;
      checkMissing(chunk22);
      return chunk22;
    };
    p30 = prom<V +>{
      chunkopts8 = ld chunkopts;
      chunkopts9 = force? chunkopts8;
      checkMissing(chunkopts9);
      return chunkopts9;
    };
    r142 = dyn dx36(p28, p29, p30);
    check L266() else D67();
  L263():
    dr32 = tryDispatchBuiltin.1("$", driver21);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L265() else L264(i61, dr32);
  L264(i65, driver23):
    r138 = `$`(driver23, <sym runcode>);
    goto L262(i65, r138);
  L282(i85, dx40):
    checkFun.0(dx40);
    dx41 = dx40 as cls;
    p33 = prom<V +>{
      drobj12 = ld drobj;
      drobj13 = force? drobj12;
      checkMissing(drobj13);
      return drobj13;
    };
    p34 = prom<V +>{
      chunk25 = ld chunk;
      chunk26 = force? chunk25;
      checkMissing(chunk26);
      return chunk26;
    };
    r159 = dyn dx41(p33, p34);
    check L286() else D74();
  L283():
    dr36 = tryDispatchBuiltin.1("$", driver25);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L285() else L284(i79, dr36);
  L284(i83, driver27):
    r156 = `$`(driver27, <sym writedoc>);
    goto L282(i83, r156);
  L295():
    dx42 = getTryDispatchBuiltinValue(dr38);
    goto L292(i72, dx42);
  L298():
    dr40 = tryDispatchBuiltin.0("[[<-", l15, chunk28);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L300() else L299(i90, chunk28, dr40);
  L299(i98, chunk30, l17):
    chunkopts14 = ld chunkopts;
    check L301() else D77();
  L309():
    chunk43 = force? chunk42;
    checkMissing(chunk43);
    c47 = `==`(chunk43, NULL);
    goto L62(i105, c47);
  L310():
    driver28 = ld driver;
    check L311() else D79();
  L321():
    st chunkopts = r185;
    srcFilenames = ld srcFilenames;
    check L322() else D85();
  L352():
    goto L66(i72, c55, r207);
  L357():
    p50 = prom<V +>{
      chunkref = ld chunkref;
      chunkref1 = force? chunkref;
      checkMissing(chunkref1);
      return chunkref1;
    };
    p51 = prom<V +>{
      sym23 = ldf names;
      base23 = ldf names in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r214):
      return r214;
    L1():
      namedchunks = ld namedchunks;
      namedchunks1 = force? namedchunks;
      checkMissing(namedchunks1);
      names = ldf names in base;
      r215 = dyn names(namedchunks1);
      goto L0(r215);
    L2():
      r213 = dyn base23(<sym namedchunks>);
      goto L0(r213);
    };
    r217 = dyn _in_(p50, p51);
    check L358() else D108();
  L382():
    prevfilenum1 = force? prevfilenum;
    checkMissing(prevfilenum1);
    filenum6 = ld filenum;
    check L383() else D120();
  L389():
    srcFilenames10 = ld srcFilenames;
    check L390() else D123();
  D67():
    deopt 279 [i67, r142];
  D74():
    deopt 313 [i85, r159];
  D77():
    deopt 326 [i98, chunk30, l17, chunk28, chunkopts14];
  D79():
    deopt 338 [i108, driver28];
  D85():
    deopt 366 [i87, srcFilenames];
  D108():
    deopt 442 [i124, r217];
  D120():
    deopt 485 [i146, c71, prevfilenum1, filenum6];
  D123():
    deopt 494 [i148, srcFilenames10];
  L80(i165, r254):
    st srclines = r254;
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L418() else L419();
  L255():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L252(i51, chunk7, l10, chunk5, dx32);
  L265():
    dx34 = getTryDispatchBuiltinValue(dr32);
    goto L262(i61, dx34);
  L266():
    st drobj = r142;
    goto L49(i67);
  L285():
    dx39 = getTryDispatchBuiltinValue(dr36);
    goto L282(i79, dx39);
  L286():
    st drobj = r159;
    goto L56(i85, r159);
  L300():
    dx44 = getTryDispatchBuiltinValue(dr40);
    goto L60(i90, chunk28, dx44);
  L301():
    chunkopts15 = force? chunkopts14;
    checkMissing(chunkopts15);
    c46 = `is.object`(chunkopts15);
    if c46 then L303() else L304(i98, chunk30, l17, chunk28, chunkopts15);
  L311():
    driver29 = force? driver28;
    checkMissing(driver29);
    c49 = `is.object`(driver29);
    if c49 then L313() else L314(i108, driver29);
  L322():
    srcFilenames1 = force? srcFilenames;
    checkMissing(srcFilenames1);
    c53 = `is.object`(srcFilenames1);
    if c53 then L323() else L324(i87, srcFilenames1);
  L358():
    r218 = `!`(r217);
    c67 = `as.logical`(r218);
    if c67 then L359() else L68();
  L383():
    filenum7 = force? filenum6;
    checkMissing(filenum7);
    r240 = `!=`(prevfilenum1, filenum7);
    c74 = `as.logical`(r240);
    if c74 then L75(i146, c71, c74) else L384();
  L390():
    srcFilenames11 = force? srcFilenames10;
    checkMissing(srcFilenames11);
    c87 = `is.object`(srcFilenames11);
    if c87 then L391() else L392(i148, srcFilenames11);
  L402():
    sym27 = ldf attr;
    base27 = ldf attr in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L404() else L405();
  L403():
    r253 = dyn base26(<lang attr(chunk, "srclines")>, <lang rep.int(`+`(linenum, linediff), length(line))>);
    goto L80(i162, r253);
  L64(i118, dx58):
    st file = dx58;
    paste1 = ldf paste0;
    check L327() else D87();
  L68():
    srcFilenames6 = ld srcFilenames;
    check L364() else D111();
  L75(i149, c75, c76):
    c83 = `as.logical`(c76);
    c84 = `&&`(c75, c83);
    goto L74(i149, c84);
  L77(i158, dx70):
    st file = dx70;
    sym25 = ldf c;
    base25 = ldf c in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L395() else L396();
  L81(i168, r256):
    sym28 = ldf `rep.int`;
    base28 = ldf `rep.int` in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L408() else L409();
  L84(i177, r267):
    st srcfilenum = r267;
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L433() else L434();
  L302(i104, chunk39, l21, chunk40, dx47):
    ____1 = ldf `[[<-` in base;
    r167 = dyn ____1(l21, chunk40, dx47);
    goto L60(i104, chunk39, r167);
  L303():
    dr42 = tryDispatchBuiltin.1("$", chunkopts15);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L305() else L304(i98, chunk30, l17, chunk28, dr42);
  L304(i102, chunk35, l19, chunk36, chunkopts17):
    r166 = `$`(chunkopts17, <sym label>);
    goto L302(i102, chunk35, l19, chunk36, r166);
  L312(i114, dx49):
    checkFun.0(dx49);
    dx50 = dx49 as cls;
    p35 = prom<V +>{
      drobj14 = ld drobj;
      drobj15 = force? drobj14;
      checkMissing(drobj15);
      return drobj15;
    };
    p36 = prom<V +>{
      chunk44 = ld chunk;
      chunk45 = force? chunk44;
      checkMissing(chunk45);
      return chunk45;
    };
    p37 = prom<V +>{
      chunkopts18 = ld chunkopts;
      chunkopts19 = force? chunkopts18;
      checkMissing(chunkopts19);
      return chunkopts19;
    };
    r175 = dyn dx50(p35, p36, p37);
    check L316() else D80();
  L313():
    dr44 = tryDispatchBuiltin.1("$", driver29);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L315() else L314(i108, dr44);
  L314(i112, driver31):
    r171 = `$`(driver31, <sym runcode>);
    goto L312(i112, r171);
  L323():
    dr52 = tryDispatchBuiltin.1("[", srcFilenames1);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L325() else L324(i87, dr52);
  L324(i116, srcFilenames3):
    filenum = ld filenum;
    check L326() else D86();
  L359():
    warning = ldf warning;
    check L360() else D109();
  L384():
    prevlinediff = ld prevlinediff;
    check L385() else D121();
  L391():
    dr64 = tryDispatchBuiltin.1("[", srcFilenames11);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L393() else L392(i148, dr64);
  L392(i156, srcFilenames13):
    filenum8 = ld filenum;
    check L394() else D124();
  L404():
    chunk46 = ld chunk;
    check L406() else D129();
  L405():
    r255 = dyn base27(<sym chunk>, "srclines");
    goto L81(i162, r255);
  L418():
    sym31 = ldf attr;
    base31 = ldf attr in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L420() else L421();
  L419():
    r266 = dyn base30(<lang attr(chunk, "srcFilenum")>, <lang rep.int(filenum, length(line))>);
    goto L84(i165, r266);
  D80():
    deopt 345 [i114, r175];
  D86():
    deopt 368 [i116, srcFilenames3, filenum];
  D87():
    deopt 373 [i118];
  D109():
    deopt 445 [i124];
  D111():
    deopt 454 [i124, srcFilenames6];
  D121():
    deopt 488 [i146, c71, c74, prevlinediff];
  D124():
    deopt 496 [i156, srcFilenames13, filenum8];
  D129():
    deopt 521 [i162, chunk46];
  L78(i161, r244):
    st line = r244;
    goto L79(i161);
  L82(i171, r259):
    c89 = ldf c in base;
    r265 = dyn c89(r256, r259);
    check L417() else D136();
  L85(i180, r269):
    sym32 = ldf `rep.int`;
    base32 = ldf `rep.int` in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L424() else L425();
  L88(i189, r279):
    st chunk = r279;
    srclines = ld srclines;
    check L438() else D147();
  L305():
    dx46 = getTryDispatchBuiltinValue(dr42);
    goto L302(i98, chunk30, l17, chunk28, dx46);
  L315():
    dx48 = getTryDispatchBuiltinValue(dr44);
    goto L312(i108, dx48);
  L316():
    st drobj = r175;
    goto L57(i114);
  L325():
    dx57 = getTryDispatchBuiltinValue(dr52);
    goto L64(i87, dx57);
  L326():
    filenum1 = force? filenum;
    __3 = ldf `[` in base;
    r186 = dyn __3(srcFilenames3, filenum1);
    goto L64(i116, r186);
  L327():
    p43 = prom<V +>{
      linenum10 = ld linenum;
      linenum11 = force? linenum10;
      checkMissing(linenum11);
      linediff = ld linediff;
      linediff1 = force? linediff;
      checkMissing(linediff1);
      r187 = `+`(linenum11, linediff1);
      r188 = `+`(r187, 1);
      return r188;
    };
    p45 = prom<V +>{
      basename = ldf basename;
      p44 = prom<V +>{
        file15 = ld file;
        file16 = force? file15;
        checkMissing(file16);
        return file16;
      };
      r191 = dyn basename(p44);
      return r191;
    };
    r193 = dyn paste1("#line ", p43, " \"", p45, "\"");
    check L328() else D88();
  L360():
    p54 = prom<V +>{
      gettextf = ldf gettextf;
      p53 = prom<V +>{
        sQuote = ldf sQuote;
        p52 = prom<V +>{
          chunkref2 = ld chunkref;
          chunkref3 = force? chunkref2;
          checkMissing(chunkref3);
          return chunkref3;
        };
        r220 = dyn sQuote(p52);
        return r220;
      };
      r222 = dyn gettextf("reference to unknown chunk %s", p53);
      return r222;
    };
    r224 = dyn warning[, `call.`, domain](p54, TRUE, NA_LGL);
    check L361() else D110();
  L364():
    srcFilenames7 = force? srcFilenames6;
    checkMissing(srcFilenames7);
    c68 = `is.object`(srcFilenames7);
    if c68 then L365() else L366(i124, srcFilenames7);
  L385():
    prevlinediff1 = force? prevlinediff;
    checkMissing(prevlinediff1);
    linediff6 = ld linediff;
    check L386() else D122();
  L393():
    dx69 = getTryDispatchBuiltinValue(dr64);
    goto L77(i148, dx69);
  L394():
    filenum9 = force? filenum8;
    __6 = ldf `[` in base;
    r242 = dyn __6(srcFilenames13, filenum9);
    goto L77(i156, r242);
  L395():
    paste3 = ldf paste0;
    check L397() else D125();
  L396():
    r243 = dyn base25(<lang paste0("#line ", `+`(linenum, linediff), " \"", basename(file), "\"")>, <sym line>);
    goto L78(i158, r243);
  L406():
    chunk47 = force? chunk46;
    checkMissing(chunk47);
    attr5 = ldf attr in base;
    r257 = dyn attr5(chunk47, "srclines");
    check L407() else D130();
  L408():
    linenum18 = ld linenum;
    check L410() else D131();
  L409():
    r258 = dyn base28(<lang `+`(linenum, linediff)>, <lang length(line)>);
    goto L82(i168, r258);
  L420():
    chunk48 = ld chunk;
    check L422() else D137();
  L421():
    r268 = dyn base31(<sym chunk>, "srcFilenum");
    goto L85(i165, r268);
  L433():
    chunk50 = ld chunk;
    check L435() else D144();
  L434():
    r278 = dyn base34(<sym chunk>, <sym line>);
    goto L88(i177, r278);
  D88():
    deopt 379 [i118, r193];
  D110():
    deopt 451 [i124, r224];
  D122():
    deopt 489 [i146, c71, c74, prevlinediff1, linediff6];
  D125():
    deopt 503 [i158];
  D130():
    deopt 525 [i162, r257];
  D131():
    deopt 528 [i168, linenum18];
  D136():
    deopt 541 [i171, r265];
  D137():
    deopt 547 [i165, chunk48];
  D144():
    deopt 569 [i177, chunk50];
  D147():
    deopt 576 [i189, srclines];
  L70(i138, dx66):
    st file = dx66;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L369() else L370();
  L86(i183, r272):
    c90 = ldf c in base;
    r277 = dyn c90(r269, r272);
    check L432() else D143();
  L328():
    st chunk = r193;
    linenum12 = ld linenum;
    check L329() else D89();
  L361():
    goto L29(i124);
  L365():
    dr60 = tryDispatchBuiltin.1("[", srcFilenames7);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L367() else L366(i124, dr60);
  L366(i136, srcFilenames9):
    filenum4 = ld filenum;
    check L368() else D112();
  L386():
    linediff7 = force? linediff6;
    checkMissing(linediff7);
    r241 = `!=`(prevlinediff1, linediff7);
    c79 = `as.logical`(r241);
    c80 = `||`(c74, c79);
    goto L75(i146, c71, c80);
  L397():
    p58 = prom<V +>{
      linenum16 = ld linenum;
      linenum17 = force? linenum16;
      checkMissing(linenum17);
      linediff8 = ld linediff;
      linediff9 = force? linediff8;
      checkMissing(linediff9);
      r245 = `+`(linenum17, linediff9);
      return r245;
    };
    p60 = prom<V +>{
      basename2 = ldf basename;
      p59 = prom<V +>{
        file19 = ld file;
        file20 = force? file19;
        checkMissing(file20);
        return file20;
      };
      r248 = dyn basename2(p59);
      return r248;
    };
    r250 = dyn paste3("#line ", p58, " \"", p60, "\"");
    check L398() else D126();
  L407():
    goto L81(i162, r257);
  L410():
    linenum19 = force? linenum18;
    checkMissing(linenum19);
    linediff10 = ld linediff;
    check L411() else D132();
  L417():
    goto L80(i171, r265);
  L422():
    chunk49 = force? chunk48;
    checkMissing(chunk49);
    attr6 = ldf attr in base;
    r270 = dyn attr6(chunk49, "srcFilenum");
    check L423() else D138();
  L424():
    filenum10 = ld filenum;
    check L426() else D139();
  L425():
    r271 = dyn base32(<sym filenum>, <lang length(line)>);
    goto L86(i180, r271);
  L435():
    chunk51 = force? chunk50;
    checkMissing(chunk51);
    line18 = ld line;
    check L436() else D145();
  L438():
    srclines1 = force? srclines;
    checkMissing(srclines1);
    l28 = ld chunk;
    attr__4 = ldf `attr<-`;
    check L439() else D148();
  D89():
    deopt 381 [i118, linenum12];
  D112():
    deopt 456 [i136, srcFilenames9, filenum4];
  D126():
    deopt 509 [i158, r250];
  D132():
    deopt 529 [i168, linenum19, linediff10];
  D138():
    deopt 551 [i165, r270];
  D139():
    deopt 554 [i180, filenum10];
  D143():
    deopt 565 [i183, r277];
  D145():
    deopt 571 [i177, line18];
  D148():
    deopt 579 [i189, srclines1, l28, srclines1];
  L71(i141, r228):
    st line = r228;
    goto L73(i141);
  L329():
    linenum13 = force? linenum12;
    checkMissing(linenum13);
    linediff2 = ld linediff;
    check L330() else D90();
  L367():
    dx65 = getTryDispatchBuiltinValue(dr60);
    goto L70(i124, dx65);
  L368():
    filenum5 = force? filenum4;
    __4 = ldf `[` in base;
    r226 = dyn __4(srcFilenames9, filenum5);
    goto L70(i136, r226);
  L369():
    namedchunks2 = ld namedchunks;
    check L371() else D113();
  L370():
    r227 = dyn base24(<lang `[[`(namedchunks, chunkref)>, <lang paste0("#line ", `+`(`+`(linenum, linediff), 1), " \"", basename(file), "\"")>);
    goto L71(i138, r227);
  L398():
    line12 = ld line;
    check L399() else D127();
  L411():
    linediff11 = force? linediff10;
    checkMissing(linediff11);
    r260 = `+`(linenum19, linediff11);
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L412() else L413();
  L423():
    goto L85(i165, r270);
  L426():
    filenum11 = force? filenum10;
    checkMissing(filenum11);
    sym33 = ldf length;
    base33 = ldf length in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L427() else L428();
  L432():
    goto L84(i183, r277);
  L436():
    line19 = force? line18;
    checkMissing(line19);
    c91 = ldf c in base;
    r280 = dyn c91(chunk51, line19);
    check L437() else D146();
  L439():
    r281 = dyn attr__4(l28, NULL, "srclines", srclines1);
    check L440() else D149();
  D90():
    deopt 382 [i118, linenum13, linediff2];
  D113():
    deopt 462 [i138, namedchunks2];
  D127():
    deopt 510 [i158, line12];
  D146():
    deopt 574 [i177, r280];
  D149():
    deopt 582 [i189, srclines1, r281];
  L83(i174, r262):
    rep_int = ldf `rep.int` in base;
    r264 = dyn rep_int(r260, r262);
    check L416() else D135();
  L87(i186, r274):
    rep_int1 = ldf `rep.int` in base;
    r276 = dyn rep_int1(filenum11, r274);
    check L431() else D142();
  L330():
    linediff3 = force? linediff2;
    checkMissing(linediff3);
    r194 = `+`(linenum13, linediff3);
    l22 = ld chunk;
    attr__1 = ldf `attr<-`;
    check L331() else D91();
  L371():
    namedchunks3 = force? namedchunks2;
    checkMissing(namedchunks3);
    c69 = `is.object`(namedchunks3);
    if c69 then L372() else L373(i138, namedchunks3);
  L399():
    line13 = force? line12;
    checkMissing(line13);
    c88 = ldf c in base;
    r251 = dyn c88(r250, line13);
    check L400() else D128();
  L412():
    line14 = ld line;
    check L414() else D133();
  L413():
    r261 = dyn base29(<sym line>);
    goto L83(i168, r261);
  L427():
    line16 = ld line;
    check L429() else D140();
  L428():
    r273 = dyn base33(<sym line>);
    goto L87(i180, r273);
  L437():
    goto L88(i177, r280);
  L440():
    st chunk = r281;
    srcfilenum = ld srcfilenum;
    check L441() else D150();
  D91():
    deopt 386 [i118, r194, l22, r194];
  D128():
    deopt 513 [i158, r251];
  D133():
    deopt 534 [i168, line14];
  D135():
    deopt 539 [i174, r264];
  D140():
    deopt 558 [i180, line16];
  D142():
    deopt 563 [i186, r276];
  D150():
    deopt 584 [i189, srcfilenum];
  L72(i145, dx68):
    paste2 = ldf paste0;
    check L376() else D115();
  L331():
    r195 = dyn attr__1(l22, NULL, "srclines", r194);
    check L332() else D92();
  L372():
    dr62 = tryDispatchBuiltin.1("[[", namedchunks3);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L374() else L373(i138, dr62);
  L373(i143, namedchunks5):
    chunkref4 = ld chunkref;
    check L375() else D114();
  L400():
    goto L78(i158, r251);
  L414():
    line15 = force? line14;
    checkMissing(line15);
    length3 = ldf length in base;
    r263 = dyn length3(line15);
    check L415() else D134();
  L416():
    goto L82(i174, r264);
  L429():
    line17 = force? line16;
    checkMissing(line17);
    length4 = ldf length in base;
    r275 = dyn length4(line17);
    check L430() else D141();
  L431():
    goto L86(i186, r276);
  L441():
    srcfilenum1 = force? srcfilenum;
    checkMissing(srcfilenum1);
    l29 = ld chunk;
    attr__5 = ldf `attr<-`;
    check L442() else D151();
  D92():
    deopt 389 [i118, r194, r195];
  D114():
    deopt 464 [i143, namedchunks5, chunkref4];
  D115():
    deopt 468 [i145];
  D134():
    deopt 537 [i168, r263];
  D141():
    deopt 561 [i180, r275];
  D151():
    deopt 587 [i189, srcfilenum1, l29, srcfilenum1];
  L332():
    st chunk = r195;
    filenum2 = ld filenum;
    check L333() else D93();
  L374():
    dx67 = getTryDispatchBuiltinValue(dr62);
    goto L72(i138, dx67);
  L375():
    chunkref5 = force? chunkref4;
    __5 = ldf `[[` in base;
    r229 = dyn __5(namedchunks5, chunkref5);
    goto L72(i143, r229);
  L376():
    p55 = prom<V +>{
      linenum14 = ld linenum;
      linenum15 = force? linenum14;
      checkMissing(linenum15);
      linediff4 = ld linediff;
      linediff5 = force? linediff4;
      checkMissing(linediff5);
      r230 = `+`(linenum15, linediff5);
      r231 = `+`(r230, 1);
      return r231;
    };
    p57 = prom<V +>{
      basename1 = ldf basename;
      p56 = prom<V +>{
        file17 = ld file;
        file18 = force? file17;
        checkMissing(file18);
        return file18;
      };
      r234 = dyn basename1(p56);
      return r234;
    };
    r236 = dyn paste2("#line ", p55, " \"", p57, "\"");
    check L377() else D116();
  L415():
    goto L83(i168, r263);
  L430():
    goto L87(i180, r275);
  L442():
    r282 = dyn attr__5(l29, NULL, "srcFilenum", srcfilenum1);
    check L443() else D152();
  D93():
    deopt 391 [i118, filenum2];
  D116():
    deopt 474 [i145, r236];
  D152():
    deopt 590 [i189, srcfilenum1, r282];
  L333():
    filenum3 = force? filenum2;
    checkMissing(filenum3);
    l23 = ld chunk;
    attr__2 = ldf `attr<-`;
    check L334() else D94();
  L377():
    c70 = ldf c in base;
    r237 = dyn c70(dx68, r236);
    check L378() else D117();
  L443():
    st chunk = r282;
    srcFilenames14 = ld srcFilenames;
    check L444() else D153();
  D94():
    deopt 394 [i118, filenum3, l23, filenum3];
  D117():
    deopt 476 [i145, r237];
  D153():
    deopt 592 [i189, srcFilenames14];
  L334():
    r196 = dyn attr__2(l23, NULL, "srcFilenum", filenum3);
    check L335() else D95();
  L378():
    goto L71(i145, r237);
  L444():
    srcFilenames15 = force? srcFilenames14;
    checkMissing(srcFilenames15);
    l30 = ld chunk;
    attr__6 = ldf `attr<-`;
    check L445() else D154();
  D95():
    deopt 397 [i118, filenum3, r196];
  D154():
    deopt 595 [i189, srcFilenames15, l30, srcFilenames15];
  L335():
    st chunk = r196;
    srcFilenames4 = ld srcFilenames;
    check L336() else D96();
  L445():
    r283 = dyn attr__6(l30, NULL, "srcFilenames", srcFilenames15);
    check L446() else D155();
  D96():
    deopt 399 [i118, srcFilenames4];
  D155():
    deopt 598 [i189, srcFilenames15, r283];
  L336():
    srcFilenames5 = force? srcFilenames4;
    checkMissing(srcFilenames5);
    l24 = ld chunk;
    attr__3 = ldf `attr<-`;
    check L337() else D97();
  L446():
    st chunk = r283;
    goto L50(i189);
  D97():
    deopt 402 [i118, srcFilenames5, l24, srcFilenames5];
  L337():
    r197 = dyn attr__3(l24, NULL, "srcFilenames", srcFilenames5);
    check L338() else D98();
  D98():
    deopt 405 [i118, srcFilenames5, r197];
  L338():
    st chunk = r197;
    chunknr = ld chunknr;
    check L339() else D99();
  D99():
    deopt 407 [i118, chunknr];
  L339():
    chunknr1 = force? chunknr;
    checkMissing(chunknr1);
    r198 = `+`(chunknr1, 1);
    st chunknr = r198;
    chunknr2 = ld chunknr;
    check L340() else D100();
  D100():
    deopt 412 [i118, chunknr2];
  L340():
    chunknr3 = force? chunknr2;
    checkMissing(chunknr3);
    l25 = ld chunkopts;
    c54 = `is.object`(l25);
    if c54 then L342() else L343(i118, chunknr3, l25);
  L341(i122, chunknr7, dx60):
    st chunkopts = dx60;
    goto L50(i122);
  L342():
    dr54 = tryDispatchBuiltin.0("$<-", l25, chunknr3);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L344() else L343(i118, chunknr3, dr54);
  L343(i120, chunknr5, l27):
    r199 = `$<-`(l27, <sym chunknr>, chunknr3);
    goto L341(i120, chunknr5, r199);
  L344():
    dx59 = getTryDispatchBuiltinValue(dr54);
    goto L341(i118, chunknr3, dx59);
  }
}