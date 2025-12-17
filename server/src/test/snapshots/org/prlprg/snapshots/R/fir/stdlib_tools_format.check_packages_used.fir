fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_packages_used` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg Sys_getenv:cls, reg r2:V, reg identical:cls, reg r3:V, reg config_val_to_logical:cls, reg Sys_getenv1:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg character:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg length:cls, reg r13:V, reg c1:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg xx:*, reg xx1:V, reg length1:cls, reg r16:V, reg r17:V, reg c2:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg gettext:cls, reg r20:V, reg _pretty_format:cls, reg sort:cls, reg xx2:*, reg xx3:V, reg p1:p(V +), reg r22:V, reg p2:p(V +), reg r24:V, reg c3:cls, reg r25:V, reg r26:V, reg gettextf:cls, reg sQuote:cls, reg xx4:*, reg xx5:V, reg p3:p(V +), reg r28:V, reg p4:p(V +), reg r30:V, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg x5:*, reg x6:V, reg c4:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r34:V, reg length2:cls, reg r35:V, reg c5:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg xx6:*, reg xx7:V, reg length3:cls, reg r38:V, reg r39:V, reg c6:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg r41:V, reg gettext1:cls, reg r42:V, reg _pretty_format1:cls, reg sort1:cls, reg xx8:*, reg xx9:V, reg p5:p(V +), reg r44:V, reg p6:p(V +), reg r46:V, reg c7:cls, reg r47:V, reg r48:V, reg gettextf1:cls, reg sQuote1:cls, reg xx10:*, reg xx11:V, reg p7:p(V +), reg r50:V, reg p8:p(V +), reg r52:V, reg r53:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg x9:*, reg x10:V, reg c8:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r56:V, reg length4:cls, reg r57:V, reg c9:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg xx12:*, reg xx13:V, reg length5:cls, reg r60:V, reg r61:V, reg c10:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r62:V, reg r63:V, reg gettext2:cls, reg r64:V, reg _pretty_format2:cls, reg sort2:cls, reg xx14:*, reg xx15:V, reg p9:p(V +), reg r66:V, reg p10:p(V +), reg r68:V, reg c11:cls, reg r69:V, reg r70:V, reg gettextf2:cls, reg sQuote2:cls, reg xx16:*, reg xx17:V, reg p11:p(V +), reg r72:V, reg p12:p(V +), reg r74:V, reg r75:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r76:V, reg r77:V, reg x13:*, reg x14:V, reg c12:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r78:V, reg length6:cls, reg r79:V, reg c13:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r80:V, reg r81:V, reg xx18:*, reg xx19:V, reg length7:cls, reg r82:V, reg r83:V, reg c14:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r84:V, reg r85:V, reg gettext3:cls, reg r86:V, reg _pretty_format3:cls, reg sort3:cls, reg xx20:*, reg xx21:V, reg p13:p(V +), reg r88:V, reg p14:p(V +), reg r90:V, reg msg:*, reg msg1:V, reg c15:cls, reg r91:V, reg r92:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r93:V, reg gettextf3:cls, reg sQuote3:cls, reg xx22:*, reg xx23:V, reg p15:p(V +), reg r95:V, reg p16:p(V +), reg r97:V, reg msg2:*, reg msg3:V, reg c16:cls, reg r98:V, reg r99:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r100:V, reg r101:V, reg x17:*, reg x18:V, reg c17:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r102:V, reg length8:cls, reg r103:V, reg c18:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r104:V, reg r105:V, reg xx24:*, reg xx25:V, reg length9:cls, reg r106:V, reg r107:V, reg c19:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r108:V, reg r109:V, reg gettext4:cls, reg r110:V, reg _pretty_format4:cls, reg sort4:cls, reg xx26:*, reg xx27:V, reg p17:p(V +), reg r112:V, reg p18:p(V +), reg r114:V, reg msg4:*, reg msg5:V, reg c20:cls, reg r115:V, reg r116:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r117:V, reg gettextf4:cls, reg sQuote4:cls, reg xx28:*, reg xx29:V, reg p19:p(V +), reg r119:V, reg p20:p(V +), reg r121:V, reg msg6:*, reg msg7:V, reg c21:cls, reg r122:V, reg r123:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r124:V, reg r125:V, reg x21:*, reg x22:V, reg c22:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r126:V, reg length10:cls, reg r127:V, reg c23:L, reg c25:V, reg ignore_unused_imports:*, reg ignore_unused_imports1:V, reg r128:V, reg c26:L, reg c27:V, reg c29:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r129:V, reg r130:V, reg xx30:*, reg xx31:V, reg length11:cls, reg r131:V, reg r132:V, reg c30:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r133:V, reg r134:V, reg gettext5:cls, reg r135:V, reg _pretty_format5:cls, reg sort5:cls, reg xx32:*, reg xx33:V, reg p21:p(V +), reg r137:V, reg p22:p(V +), reg r139:V, reg msg8:*, reg msg9:V, reg c31:cls, reg r140:V, reg r141:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r142:V, reg gettextf5:cls, reg sQuote5:cls, reg xx34:*, reg xx35:V, reg p23:p(V +), reg r144:V, reg p24:p(V +), reg r146:V, reg msg10:*, reg msg11:V, reg c32:cls, reg r147:V, reg r148:V, reg sym23:cls, reg base23:cls, reg guard23:L, reg r149:V, reg r150:V, reg x25:*, reg x26:V, reg c33:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r151:V, reg length12:cls, reg r152:V, reg c34:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r153:V, reg r154:V, reg c35:cls, reg r155:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r156:V, reg r157:V, reg xx36:*, reg xx37:V, reg length13:cls, reg r158:V, reg r159:V, reg c36:L, reg sym26:cls, reg base26:cls, reg guard26:L, reg r160:V, reg r161:V, reg gettext6:cls, reg r162:V, reg _pretty_format6:cls, reg sort6:cls, reg xx38:*, reg xx39:V, reg p25:p(V +), reg r164:V, reg p26:p(V +), reg r166:V, reg msg12:*, reg msg13:V, reg c37:cls, reg r167:V, reg r168:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r169:V, reg gettextf6:cls, reg sQuote6:cls, reg xx40:*, reg xx41:V, reg p27:p(V +), reg r171:V, reg p28:p(V +), reg r173:V, reg msg14:*, reg msg15:V, reg c38:cls, reg r174:V, reg r175:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r176:V, reg r177:V, reg x29:*, reg x30:V, reg c39:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r178:V, reg length14:cls, reg r179:V, reg c40:L, reg sym29:cls, reg base29:cls, reg guard29:L, reg r180:V, reg r181:V, reg xx42:*, reg xx43:V, reg length15:cls, reg r182:V, reg r183:V, reg c41:L, reg sym30:cls, reg base30:cls, reg guard30:L, reg r184:V, reg r185:V, reg gettext7:cls, reg r186:V, reg _pretty_format7:cls, reg sort7:cls, reg xx44:*, reg xx45:V, reg p29:p(V +), reg r188:V, reg p30:p(V +), reg r190:V, reg c42:cls, reg r191:V, reg r192:V, reg gettextf7:cls, reg sQuote7:cls, reg xx46:*, reg xx47:V, reg p31:p(V +), reg r194:V, reg p32:p(V +), reg r196:V, reg r197:V, reg sym31:cls, reg base31:cls, reg guard31:L, reg r198:V, reg r199:V, reg x33:*, reg x34:V, reg c43:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r200:V, reg length16:cls, reg r201:V, reg c44:L, reg strwrap:cls, reg paste:cls, reg msg16:*, reg msg17:V, reg p33:p(V +), reg r203:V, reg p34:p(V +), reg r205:V, reg sym32:cls, reg base32:cls, reg guard32:L, reg r206:V, reg r207:V, reg xx48:*, reg xx49:V, reg length17:cls, reg r208:V, reg r209:V, reg c45:L, reg sym33:cls, reg base33:cls, reg guard33:L, reg r210:V, reg r211:V, reg gettext8:cls, reg r212:V, reg _pretty_format8:cls, reg sort8:cls, reg xx50:*, reg xx51:V, reg p35:p(V +), reg r214:V, reg p36:p(V +), reg r216:V, reg msg18:*, reg msg19:V, reg c46:cls, reg r217:V, reg r218:V, reg sym34:cls, reg base34:cls, reg guard34:L, reg r219:V, reg gettextf8:cls, reg sQuote8:cls, reg xx52:*, reg xx53:V, reg p37:p(V +), reg r221:V, reg p38:p(V +), reg r223:V, reg msg20:*, reg msg21:V, reg c47:cls, reg r224:V, reg r225:V, reg sym35:cls, reg base35:cls, reg guard35:L, reg r226:V, reg r227:V, reg x37:*, reg x38:V, reg c48:L, reg x40:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r228:V, reg length18:cls, reg r229:V, reg c49:L, reg sym36:cls, reg base36:cls, reg guard36:L, reg r230:V, reg r231:V, reg xx54:*, reg xx55:V, reg length19:cls, reg r232:V, reg r233:V, reg c50:L, reg sym37:cls, reg base37:cls, reg guard37:L, reg r234:V, reg r235:V, reg gettext9:cls, reg r236:V, reg _pretty_format9:cls, reg sort9:cls, reg xx56:*, reg xx57:V, reg p39:p(V +), reg r238:V, reg p40:p(V +), reg r240:V, reg c51:cls, reg r241:V, reg r242:V, reg gettextf9:cls, reg sQuote9:cls, reg xx58:*, reg xx59:V, reg p41:p(V +), reg r244:V, reg p42:p(V +), reg r246:V, reg r247:V, reg sym38:cls, reg base38:cls, reg guard38:L, reg r248:V, reg r249:V, reg x41:*, reg x42:V, reg c52:L, reg x44:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r250:V, reg length20:cls, reg r251:V, reg c53:L, reg strwrap1:cls, reg paste1:cls, reg msg22:*, reg msg23:V, reg p43:p(V +), reg r253:V, reg p44:p(V +), reg r255:V, reg incoming:*, reg incoming1:V, reg c54:L, reg sub:cls, reg xxx:*, reg xxx1:V, reg p45:p(V +), reg r257:V, reg unlist:cls, reg _get_standard_package_names:cls, reg r258:V, reg c55:L, reg r260:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg sym39:cls, reg base39:cls, reg guard39:L, reg r263:V, reg r264:V, reg r265:V, reg c56:cls, reg r266:V, reg __:cls, reg r267:V, reg p46:p(V +), reg r269:V, reg sym40:cls, reg base40:cls, reg guard40:L, reg r270:V, reg r271:V, reg _in_:cls, reg z:*, reg z1:V, reg p47:p(V +), reg base41:*, reg base42:V, reg p48:p(V +), reg r274:V, reg any:cls, reg r275:V, reg c57:L, reg sym41:cls, reg base43:cls, reg guard41:L, reg r276:V, reg r277:V, reg msg24:*, reg msg25:V, reg _pretty_format10:cls, reg intersect:cls, reg base44:*, reg base45:V, reg p49:p(V +), reg z2:*, reg z3:V, reg p50:p(V +), reg r280:V, reg p51:p(V +), reg r282:V, reg c58:cls, reg r283:V, reg r284:V, reg sym42:cls, reg base46:cls, reg guard42:L, reg r286:V, reg r287:V, reg xxx2:*, reg xxx3:V, reg length21:cls, reg r288:V, reg r289:V, reg c59:L, reg sym43:cls, reg base47:cls, reg guard43:L, reg r290:V, reg r291:V, reg gettext10:cls, reg r292:V, reg _pretty_format11:cls, reg sort10:cls, reg xxx4:*, reg xxx5:V, reg p52:p(V +), reg r294:V, reg p53:p(V +), reg r296:V, reg msg26:*, reg msg27:V, reg c60:cls, reg r297:V, reg r298:V, reg sym44:cls, reg base48:cls, reg guard44:L, reg r299:V, reg r300:V, reg xxx6:*, reg xxx7:V, reg length22:cls, reg r301:V, reg c61:L, reg sym45:cls, reg base49:cls, reg guard45:L, reg r302:V, reg r303:V, reg gettextf10:cls, reg sQuote10:cls, reg xxx8:*, reg xxx9:V, reg p54:p(V +), reg r305:V, reg p55:p(V +), reg r307:V, reg msg28:*, reg msg29:V, reg c62:cls, reg r308:V, reg r309:V, reg isTRUE:cls, reg x45:*, reg x46:V, reg c63:L, reg x48:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r310:V, reg p56:p(V +), reg r312:V, reg c64:L, reg sym46:cls, reg base50:cls, reg guard46:L, reg r313:V, reg r314:V, reg c65:cls, reg r315:V, reg sym47:cls, reg base51:cls, reg guard47:L, reg r316:V, reg r317:V, reg strwrap2:cls, reg paste2:cls, reg msg30:*, reg msg31:V, reg p57:p(V +), reg r319:V, reg p58:p(V +), reg r321:V, reg _pretty_format12:cls, reg sort11:cls, reg x49:*, reg x50:V, reg c66:L, reg x52:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r322:V, reg p59:p(V +), reg r324:V, reg p60:p(V +), reg r326:V, reg c67:cls, reg r327:V, reg r328:V, reg sym48:cls, reg base52:cls, reg guard48:L, reg r329:V, reg r330:V, reg x53:*, reg x54:V, reg c68:L, reg x56:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r331:V, reg length23:cls, reg r332:V, reg c69:L, reg strwrap3:cls, reg paste3:cls, reg msg32:*, reg msg33:V, reg p61:p(V +), reg r334:V, reg p62:p(V +), reg r336:V, reg sym49:cls, reg base53:cls, reg guard49:L, reg r337:V, reg r338:V, reg xx60:*, reg xx61:V, reg length24:cls, reg r339:V, reg r340:V, reg c70:L, reg sym50:cls, reg base54:cls, reg guard50:L, reg r341:V, reg r342:V, reg gettext11:cls, reg r343:V, reg _pretty_format13:cls, reg sort12:cls, reg xx62:*, reg xx63:V, reg p63:p(V +), reg r345:V, reg p64:p(V +), reg r347:V, reg msg34:*, reg msg35:V, reg c71:cls, reg r348:V, reg r349:V, reg sym51:cls, reg base55:cls, reg guard51:L, reg r350:V, reg gettextf11:cls, reg sQuote11:cls, reg xx64:*, reg xx65:V, reg p65:p(V +), reg r352:V, reg p66:p(V +), reg r354:V, reg msg36:*, reg msg37:V, reg c72:cls, reg r355:V, reg r356:V, reg sym52:cls, reg base56:cls, reg guard52:L, reg r357:V, reg r358:V, reg x57:*, reg x58:V, reg c73:L, reg x60:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r359:V, reg length25:cls, reg r360:V, reg c74:L, reg sym53:cls, reg base57:cls, reg guard53:L, reg r361:V, reg r362:V, reg xx66:*, reg xx67:V, reg length26:cls, reg r363:V, reg r364:V, reg c75:L, reg sym54:cls, reg base58:cls, reg guard54:L, reg r365:V, reg r366:V, reg gettext12:cls, reg r367:V, reg _pretty_format14:cls, reg sort13:cls, reg xx68:*, reg xx69:V, reg p67:p(V +), reg r369:V, reg p68:p(V +), reg r371:V, reg c76:cls, reg r372:V, reg r373:V, reg gettextf12:cls, reg sQuote12:cls, reg xx70:*, reg xx71:V, reg p69:p(V +), reg r375:V, reg p70:p(V +), reg r377:V, reg r378:V, reg sym55:cls, reg base59:cls, reg guard55:L, reg r379:V, reg r380:V, reg x61:*, reg x62:V, reg c77:L, reg x64:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r381:V, reg nzchar:cls, reg r382:V, reg c78:L, reg x65:*, reg x66:V, reg c79:L, reg x68:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r383:V, reg dx36:V, reg c80:cls, reg r384:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L111() else L112();
  L0(r1):
    st incoming = r1;
    config_val_to_logical = ldf config_val_to_logical;
    check L116() else D3();
  L111():
    Sys_getenv = ldf `Sys.getenv`;
    check L113() else D0();
  L112():
    r = dyn base(<lang Sys.getenv("_R_CHECK_PACKAGES_USED_CRAN_INCOMING_NOTES_", "FALSE")>, "TRUE");
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 19 [];
  L113():
    r2 = dyn Sys_getenv("_R_CHECK_PACKAGES_USED_CRAN_INCOMING_NOTES_", "FALSE");
    check L114() else D1();
  L116():
    p = prom<V +>{
      Sys_getenv1 = ldf `Sys.getenv`;
      r4 = dyn Sys_getenv1("_R_CHECK_PACKAGES_USED_IGNORE_UNUSED_IMPORTS_", "FALSE");
      return r4;
    };
    r6 = dyn config_val_to_logical(p);
    check L117() else D4();
  D1():
    deopt 6 [r2];
  D4():
    deopt 21 [r6];
  L114():
    identical = ldf identical in base;
    r3 = dyn identical(r2, "TRUE", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L115() else D2();
  L117():
    st ignore_unused_imports = r6;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L118() else L119();
  D2():
    deopt 16 [r3];
  L1(r8):
    popenv;
    return r8;
  L115():
    goto L0(r3);
  L118():
    character = ldf character;
    check L120() else D5();
  L119():
    r7 = dyn base1(<lang character()>, <lang if(length(`<-`(xx, `$`(x, imports))), {
        if(`>`(length(xx), 1), {
            c(gettext("'::' or ':::' imports not declared from:"), .pretty_format(sort(xx)))
          }, {
            gettextf("'::' or ':::' import not declared from: %s", sQuote(xx))
          })
      })>, <lang if(length(`<-`(xx, `$`(x, others))), {
        if(`>`(length(xx), 1), {
            c(gettext("'library' or 'require' calls not declared from:"), .pretty_format(sort(xx)))
          }, {
            gettextf("'library' or 'require' call not declared from: %s", sQuote(xx))
          })
      })>, <lang if(length(`<-`(xx, `$`(x, imps))), {
        if(`>`(length(xx), 1), {
            c(gettext("'loadNamespace' or 'requireNamespace' calls not declared from:"), .pretty_format(sort(xx)))
          }, {
            gettextf("'loadNamespace' or 'requireNamespace' call not declared from: %s", sQuote(xx))
          })
      })>, <lang if(length(`<-`(xx, `$`(x, in_depends))), {
        `<-`(msg, "  Please remove these calls from your code.");
        if(`>`(length(xx), 1), {
            c(gettext("'library' or 'require' calls to packages already attached by Depends:"), .pretty_format(sort(xx)), msg)
          }, {
            c(gettextf("'library' or 'require' call to %s which was already attached by Depends.", sQuote(xx)), msg)
          })
      })>, <lang if(length(`<-`(xx, `$`(x, bad_practice))), {
        `<-`(msg, "  Please use :: or requireNamespace() instead.\n  See section 'Suggested packages' in the 'Writing R Extensions' manual.");
        if(`>`(length(xx), 1), {
            c(gettext("'library' or 'require' calls in package code:"), .pretty_format(sort(xx)), msg)
          }, {
            c(gettextf("'library' or 'require' call to %s in package code.", sQuote(xx)), msg)
          })
      })>, <lang if(`&&`(length(`<-`(xx, `$`(x, unused_imports))), `!`(ignore_unused_imports)), {
        `<-`(msg, "  All declared Imports should be used.");
        if(`>`(length(xx), 1), {
            c(gettext("Namespaces in Imports field not imported from:"), .pretty_format(sort(xx)), msg)
          }, {
            c(gettextf("Namespace in Imports field not imported from: %s", sQuote(xx)), msg)
          })
      })>, <lang if(length(`<-`(xx, `$`(x, depends_not_import))), {
        `<-`(msg, c("  These packages need to be imported from (in the NAMESPACE file)", "  for when this namespace is loaded but not attached."));
        if(`>`(length(xx), 1), {
            c(gettext("Packages in Depends field not imported from:"), .pretty_format(sort(xx)), msg)
          }, {
            c(gettextf("Package in Depends field not imported from: %s", sQuote(xx)), msg)
          })
      })>, <lang if(length(`<-`(xx, `$`(x, imp2un))), {
        if(`>`(length(xx), 1), {
            c(gettext("Missing or unexported objects:"), .pretty_format(sort(xx)))
          }, {
            gettextf("Missing or unexported object: %s", sQuote(xx))
          })
      })>, <lang if(length(`<-`(xx, `$`(x, imp32))), {
        `<-`(msg, "See the note in ?`:::` about the use of this operator.");
        `<-`(msg, strwrap(paste(msg, collapse=" "), indent=2, exdent=2));
        if(`>`(length(xx), 1), {
            c(gettext("':::' calls which should be '::':"), .pretty_format(sort(xx)), msg)
          }, {
            c(gettextf("':::' call which should be '::': %s", sQuote(xx)), msg)
          })
      })>, <lang if(length(`<-`(xx, `$`(x, imp3ff))), {
        if(`>`(length(xx), 1), {
            c(gettext("Missing objects imported by ':::' calls:"), .pretty_format(sort(xx)))
          }, {
            gettextf("Missing object imported by a ':::' call: %s", sQuote(xx))
          })
      })>, <lang if(length(`<-`(xxx, `$`(x, imp3f))), {
        `<-`(msg, "See the note in ?`:::` about the use of this operator.");
        `<-`(msg, strwrap(paste(msg, collapse=" "), indent=2, exdent=2));
        if(incoming, {
            `<-`(z, sub(":::.*", "", xxx));
            `<-`(base, unlist(`[`(.get_standard_package_names(), c("base", "recommended"))));
            if(any(`%in%`(z, base)), `<-`(msg, c(msg, "  Including base/recommended package(s):", .pretty_format(intersect(base, z)))))
          });
        if(`>`(length(xxx), 1), {
            c(gettext("Unexported objects imported by ':::' calls:"), .pretty_format(sort(xxx)), msg)
          }, if(length(xxx), {
              c(gettextf("Unexported object imported by a ':::' call: %s", sQuote(xxx)), msg)
            }))
      })>, <lang if(isTRUE(`$`(x, imp3self)), {
        `<-`(msg, c("There are ::: calls to the package's namespace in its code.", "A package almost never needs to use ::: for its own objects:"));
        c(strwrap(paste(msg, collapse=" "), indent=0, exdent=2), .pretty_format(sort(`$`(x, imp3selfcalls))))
      })>, <lang if(length(`<-`(xx, `$`(x, imp3unknown))), {
        `<-`(msg, "See the note in ?`:::` about the use of this operator.");
        `<-`(msg, strwrap(paste(msg, collapse=" "), indent=2, exdent=2));
        if(`>`(length(xx), 1), {
            c(gettext("Unavailable namespaces imported from by ':::' calls:"), .pretty_format(sort(xx)), msg)
          }, {
            c(gettextf("Unavailable namespace imported from by a ':::' call: %s", sQuote(xx)), msg)
          })
      })>, <lang if(length(`<-`(xx, `$`(x, data))), {
        if(`>`(length(xx), 1), {
            c(gettext("'data(package=)' calls not declared from:"), .pretty_format(sort(xx)))
          }, {
            gettextf("'data(package=)' call not declared from: %s", sQuote(xx))
          })
      })>, <lang if(nzchar(`$`(x, methods_message)), {
        `$`(x, methods_message)
      })>);
    goto L1(r7);
  D5():
    deopt 26 [];
  L120():
    r9 = dyn character();
    check L121() else D6();
  D6():
    deopt 27 [r9];
  L121():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L122() else L123();
  L2(r11):
    c1 = `as.logical`(r11);
    if c1 then L130() else L3();
  L122():
    x1 = ld x;
    check L124() else D7();
  L123():
    r10 = dyn base2(<lang `<-`(xx, `$`(x, imports))>);
    goto L2(r10);
  D7():
    deopt 30 [x1];
  L3():
    goto L8(NULL);
  L8(r31):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L147() else L148();
  L124():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L126() else L127(x2);
  L130():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L131() else L132();
  L4(r15):
    r17 = `>`(r15, 1);
    c2 = `as.logical`(r17);
    if c2 then L135() else L5();
  L9(r33):
    c5 = `as.logical`(r33);
    if c5 then L155() else L10();
  L125(dx1):
    st xx = dx1;
    length = ldf length in base;
    r13 = dyn length(dx1);
    check L129() else D8();
  L126():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L128() else L127(dr);
  L127(x4):
    r12 = `$`(x4, <sym imports>);
    goto L125(r12);
  L131():
    xx = ld xx;
    check L133() else D9();
  L132():
    r14 = dyn base3(<sym xx>);
    goto L4(r14);
  L147():
    x5 = ld x;
    check L149() else D18();
  L148():
    r32 = dyn base5(<lang `<-`(xx, `$`(x, others))>);
    goto L9(r32);
  D8():
    deopt 35 [r13];
  D9():
    deopt 38 [xx];
  D18():
    deopt 65 [x5];
  L5():
    gettextf = ldf gettextf;
    check L144() else D16();
  L7(r26):
    goto L8(r26);
  L10():
    goto L15(NULL);
  L15(r53):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L172() else L173();
  L128():
    dx = getTryDispatchBuiltinValue(dr);
    goto L125(dx);
  L129():
    goto L2(r13);
  L133():
    xx1 = force? xx;
    checkMissing(xx1);
    length1 = ldf length in base;
    r16 = dyn length1(xx1);
    check L134() else D10();
  L135():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L136() else L137();
  L149():
    x6 = force? x5;
    checkMissing(x6);
    c4 = `is.object`(x6);
    if c4 then L151() else L152(x6);
  L155():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L156() else L157();
  D10():
    deopt 41 [r16];
  D16():
    deopt 57 [];
  L6(r19):
    goto L7(r19);
  L11(r37):
    r39 = `>`(r37, 1);
    c6 = `as.logical`(r39);
    if c6 then L160() else L12();
  L16(r55):
    c9 = `as.logical`(r55);
    if c9 then L180() else L17();
  L134():
    goto L4(r16);
  L136():
    gettext = ldf gettext;
    check L138() else D11();
  L137():
    r18 = dyn base4(<lang gettext("'::' or ':::' imports not declared from:")>, <lang .pretty_format(sort(xx))>);
    goto L6(r18);
  L144():
    p4 = prom<V +>{
      sQuote = ldf sQuote;
      p3 = prom<V +>{
        xx4 = ld xx;
        xx5 = force? xx4;
        checkMissing(xx5);
        return xx5;
      };
      r28 = dyn sQuote(p3);
      return r28;
    };
    r30 = dyn gettextf("'::' or ':::' import not declared from: %s", p4);
    check L145() else D17();
  L150(dx3):
    st xx = dx3;
    length2 = ldf length in base;
    r35 = dyn length2(dx3);
    check L154() else D19();
  L151():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L153() else L152(dr2);
  L152(x8):
    r34 = `$`(x8, <sym others>);
    goto L150(r34);
  L156():
    xx6 = ld xx;
    check L158() else D20();
  L157():
    r36 = dyn base6(<sym xx>);
    goto L11(r36);
  L172():
    x9 = ld x;
    check L174() else D29();
  L173():
    r54 = dyn base8(<lang `<-`(xx, `$`(x, imps))>);
    goto L16(r54);
  D11():
    deopt 47 [];
  D17():
    deopt 60 [r30];
  D19():
    deopt 70 [r35];
  D20():
    deopt 73 [xx6];
  D29():
    deopt 100 [x9];
  L12():
    gettextf1 = ldf gettextf;
    check L169() else D27();
  L14(r48):
    goto L15(r48);
  L17():
    goto L22(NULL);
  L22(r75):
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L197() else L198();
  L138():
    r20 = dyn gettext("'::' or ':::' imports not declared from:");
    check L139() else D12();
  L145():
    goto L7(r30);
  L153():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L150(dx2);
  L154():
    goto L9(r35);
  L158():
    xx7 = force? xx6;
    checkMissing(xx7);
    length3 = ldf length in base;
    r38 = dyn length3(xx7);
    check L159() else D21();
  L160():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L161() else L162();
  L174():
    x10 = force? x9;
    checkMissing(x10);
    c8 = `is.object`(x10);
    if c8 then L176() else L177(x10);
  L180():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L181() else L182();
  D12():
    deopt 49 [r20];
  D21():
    deopt 76 [r38];
  D27():
    deopt 92 [];
  L13(r41):
    goto L14(r41);
  L18(r59):
    r61 = `>`(r59, 1);
    c10 = `as.logical`(r61);
    if c10 then L185() else L19();
  L23(r77):
    c13 = `as.logical`(r77);
    if c13 then L205() else L24();
  L139():
    _pretty_format = ldf `.pretty_format`;
    check L140() else D13();
  L159():
    goto L11(r38);
  L161():
    gettext1 = ldf gettext;
    check L163() else D22();
  L162():
    r40 = dyn base7(<lang gettext("'library' or 'require' calls not declared from:")>, <lang .pretty_format(sort(xx))>);
    goto L13(r40);
  L169():
    p8 = prom<V +>{
      sQuote1 = ldf sQuote;
      p7 = prom<V +>{
        xx10 = ld xx;
        xx11 = force? xx10;
        checkMissing(xx11);
        return xx11;
      };
      r50 = dyn sQuote1(p7);
      return r50;
    };
    r52 = dyn gettextf1("'library' or 'require' call not declared from: %s", p8);
    check L170() else D28();
  L175(dx5):
    st xx = dx5;
    length4 = ldf length in base;
    r57 = dyn length4(dx5);
    check L179() else D30();
  L176():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L178() else L177(dr4);
  L177(x12):
    r56 = `$`(x12, <sym imps>);
    goto L175(r56);
  L181():
    xx12 = ld xx;
    check L183() else D31();
  L182():
    r58 = dyn base9(<sym xx>);
    goto L18(r58);
  L197():
    x13 = ld x;
    check L199() else D40();
  L198():
    r76 = dyn base11(<lang `<-`(xx, `$`(x, in_depends))>);
    goto L23(r76);
  D13():
    deopt 51 [];
  D22():
    deopt 82 [];
  D28():
    deopt 95 [r52];
  D30():
    deopt 105 [r57];
  D31():
    deopt 108 [xx12];
  D40():
    deopt 135 [x13];
  L19():
    gettextf2 = ldf gettextf;
    check L194() else D38();
  L21(r70):
    goto L22(r70);
  L24():
    goto L29(NULL);
  L29(r99):
    sym15 = ldf length;
    base15 = ldf length in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L227() else L228();
  L140():
    p2 = prom<V +>{
      sort = ldf sort;
      p1 = prom<V +>{
        xx2 = ld xx;
        xx3 = force? xx2;
        checkMissing(xx3);
        return xx3;
      };
      r22 = dyn sort(p1);
      return r22;
    };
    r24 = dyn _pretty_format(p2);
    check L141() else D14();
  L163():
    r42 = dyn gettext1("'library' or 'require' calls not declared from:");
    check L164() else D23();
  L170():
    goto L14(r52);
  L178():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L175(dx4);
  L179():
    goto L16(r57);
  L183():
    xx13 = force? xx12;
    checkMissing(xx13);
    length5 = ldf length in base;
    r60 = dyn length5(xx13);
    check L184() else D32();
  L185():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L186() else L187();
  L199():
    x14 = force? x13;
    checkMissing(x14);
    c12 = `is.object`(x14);
    if c12 then L201() else L202(x14);
  L205():
    st msg = "  Please remove these calls from your code.";
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L206() else L207();
  D14():
    deopt 53 [r24];
  D23():
    deopt 84 [r42];
  D32():
    deopt 111 [r60];
  D38():
    deopt 127 [];
  L20(r63):
    goto L21(r63);
  L25(r81):
    r83 = `>`(r81, 1);
    c14 = `as.logical`(r83);
    if c14 then L210() else L26();
  L30(r101):
    c18 = `as.logical`(r101);
    if c18 then L235() else L31();
  L141():
    c3 = ldf c in base;
    r25 = dyn c3(r20, r24);
    check L142() else D15();
  L164():
    _pretty_format1 = ldf `.pretty_format`;
    check L165() else D24();
  L184():
    goto L18(r60);
  L186():
    gettext2 = ldf gettext;
    check L188() else D33();
  L187():
    r62 = dyn base10(<lang gettext("'loadNamespace' or 'requireNamespace' calls not declared from:")>, <lang .pretty_format(sort(xx))>);
    goto L20(r62);
  L194():
    p12 = prom<V +>{
      sQuote2 = ldf sQuote;
      p11 = prom<V +>{
        xx16 = ld xx;
        xx17 = force? xx16;
        checkMissing(xx17);
        return xx17;
      };
      r72 = dyn sQuote2(p11);
      return r72;
    };
    r74 = dyn gettextf2("'loadNamespace' or 'requireNamespace' call not declared from: %s", p12);
    check L195() else D39();
  L200(dx7):
    st xx = dx7;
    length6 = ldf length in base;
    r79 = dyn length6(dx7);
    check L204() else D41();
  L201():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L203() else L202(dr6);
  L202(x16):
    r78 = `$`(x16, <sym in_depends>);
    goto L200(r78);
  L206():
    xx18 = ld xx;
    check L208() else D42();
  L207():
    r80 = dyn base12(<sym xx>);
    goto L25(r80);
  L227():
    x17 = ld x;
    check L229() else D54();
  L228():
    r100 = dyn base15(<lang `<-`(xx, `$`(x, bad_practice))>);
    goto L30(r100);
  D15():
    deopt 55 [r25];
  D24():
    deopt 86 [];
  D33():
    deopt 117 [];
  D39():
    deopt 130 [r74];
  D41():
    deopt 140 [r79];
  D42():
    deopt 146 [xx18];
  D54():
    deopt 181 [x17];
  L26():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L220() else L221();
  L28(r92):
    goto L29(r92);
  L31():
    goto L36(NULL);
  L36(r123):
    sym19 = ldf length;
    base19 = ldf length in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L257() else L258();
  L142():
    goto L6(r25);
  L165():
    p6 = prom<V +>{
      sort1 = ldf sort;
      p5 = prom<V +>{
        xx8 = ld xx;
        xx9 = force? xx8;
        checkMissing(xx9);
        return xx9;
      };
      r44 = dyn sort1(p5);
      return r44;
    };
    r46 = dyn _pretty_format1(p6);
    check L166() else D25();
  L188():
    r64 = dyn gettext2("'loadNamespace' or 'requireNamespace' calls not declared from:");
    check L189() else D34();
  L195():
    goto L21(r74);
  L203():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L200(dx6);
  L204():
    goto L23(r79);
  L208():
    xx19 = force? xx18;
    checkMissing(xx19);
    length7 = ldf length in base;
    r82 = dyn length7(xx19);
    check L209() else D43();
  L210():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L211() else L212();
  L229():
    x18 = force? x17;
    checkMissing(x18);
    c17 = `is.object`(x18);
    if c17 then L231() else L232(x18);
  L235():
    st msg = "  Please use :: or requireNamespace() instead.\n  See section 'Suggested packages' in the 'Writing R Extensions' manual.";
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L236() else L237();
  D25():
    deopt 88 [r46];
  D34():
    deopt 119 [r64];
  D43():
    deopt 149 [r82];
  L27(r85):
    goto L28(r85);
  L32(r105):
    r107 = `>`(r105, 1);
    c19 = `as.logical`(r107);
    if c19 then L240() else L33();
  L37(r125):
    c23 = `as.logical`(r125);
    if c23 then L265() else L38(c23);
  L166():
    c7 = ldf c in base;
    r47 = dyn c7(r42, r46);
    check L167() else D26();
  L189():
    _pretty_format2 = ldf `.pretty_format`;
    check L190() else D35();
  L209():
    goto L25(r82);
  L211():
    gettext3 = ldf gettext;
    check L213() else D44();
  L212():
    r84 = dyn base13(<lang gettext("'library' or 'require' calls to packages already attached by Depends:")>, <lang .pretty_format(sort(xx))>, <sym msg>);
    goto L27(r84);
  L220():
    gettextf3 = ldf gettextf;
    check L222() else D50();
  L221():
    r93 = dyn base14(<lang gettextf("'library' or 'require' call to %s which was already attached by Depends.", sQuote(xx))>, <sym msg>);
    goto L28(r93);
  L230(dx9):
    st xx = dx9;
    length8 = ldf length in base;
    r103 = dyn length8(dx9);
    check L234() else D55();
  L231():
    dr8 = tryDispatchBuiltin.1("$", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L233() else L232(dr8);
  L232(x20):
    r102 = `$`(x20, <sym bad_practice>);
    goto L230(r102);
  L236():
    xx24 = ld xx;
    check L238() else D56();
  L237():
    r104 = dyn base16(<sym xx>);
    goto L32(r104);
  L257():
    x21 = ld x;
    check L259() else D68();
  L258():
    r124 = dyn base19(<lang `<-`(xx, `$`(x, unused_imports))>);
    goto L37(r124);
  D26():
    deopt 90 [r47];
  D35():
    deopt 121 [];
  D44():
    deopt 155 [];
  D50():
    deopt 169 [];
  D55():
    deopt 186 [r103];
  D56():
    deopt 192 [xx24];
  D68():
    deopt 227 [x21];
  L33():
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L250() else L251();
  L35(r116):
    goto L36(r116);
  L38(c25):
    c29 = `as.logical`(c25);
    if c29 then L268() else L39();
  L167():
    goto L13(r47);
  L190():
    p10 = prom<V +>{
      sort2 = ldf sort;
      p9 = prom<V +>{
        xx14 = ld xx;
        xx15 = force? xx14;
        checkMissing(xx15);
        return xx15;
      };
      r66 = dyn sort2(p9);
      return r66;
    };
    r68 = dyn _pretty_format2(p10);
    check L191() else D36();
  L213():
    r86 = dyn gettext3("'library' or 'require' calls to packages already attached by Depends:");
    check L214() else D45();
  L222():
    p16 = prom<V +>{
      sQuote3 = ldf sQuote;
      p15 = prom<V +>{
        xx22 = ld xx;
        xx23 = force? xx22;
        checkMissing(xx23);
        return xx23;
      };
      r95 = dyn sQuote3(p15);
      return r95;
    };
    r97 = dyn gettextf3("'library' or 'require' call to %s which was already attached by Depends.", p16);
    check L223() else D51();
  L233():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L230(dx8);
  L234():
    goto L30(r103);
  L238():
    xx25 = force? xx24;
    checkMissing(xx25);
    length9 = ldf length in base;
    r106 = dyn length9(xx25);
    check L239() else D57();
  L240():
    sym17 = ldf c;
    base17 = ldf c in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L241() else L242();
  L259():
    x22 = force? x21;
    checkMissing(x22);
    c22 = `is.object`(x22);
    if c22 then L261() else L262(x22);
  L265():
    ignore_unused_imports = ld ignore_unused_imports;
    check L266() else D70();
  D36():
    deopt 123 [r68];
  D45():
    deopt 157 [r86];
  D51():
    deopt 172 [r97];
  D57():
    deopt 195 [r106];
  D70():
    deopt 233 [c23, ignore_unused_imports];
  L34(r109):
    goto L35(r109);
  L39():
    goto L44(NULL);
  L44(r148):
    sym23 = ldf length;
    base23 = ldf length in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L290() else L291();
  L191():
    c11 = ldf c in base;
    r69 = dyn c11(r64, r68);
    check L192() else D37();
  L214():
    _pretty_format3 = ldf `.pretty_format`;
    check L215() else D46();
  L223():
    msg2 = ld msg;
    check L224() else D52();
  L239():
    goto L32(r106);
  L241():
    gettext4 = ldf gettext;
    check L243() else D58();
  L242():
    r108 = dyn base17(<lang gettext("'library' or 'require' calls in package code:")>, <lang .pretty_format(sort(xx))>, <sym msg>);
    goto L34(r108);
  L250():
    gettextf4 = ldf gettextf;
    check L252() else D64();
  L251():
    r117 = dyn base18(<lang gettextf("'library' or 'require' call to %s in package code.", sQuote(xx))>, <sym msg>);
    goto L35(r117);
  L260(dx11):
    st xx = dx11;
    length10 = ldf length in base;
    r127 = dyn length10(dx11);
    check L264() else D69();
  L261():
    dr10 = tryDispatchBuiltin.1("$", x22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L263() else L262(dr10);
  L262(x24):
    r126 = `$`(x24, <sym unused_imports>);
    goto L260(r126);
  L266():
    ignore_unused_imports1 = force? ignore_unused_imports;
    checkMissing(ignore_unused_imports1);
    r128 = `!`(ignore_unused_imports1);
    c26 = `as.logical`(r128);
    c27 = `&&`(c23, c26);
    goto L38(c27);
  L268():
    st msg = "  All declared Imports should be used.";
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L269() else L270();
  D37():
    deopt 125 [r69];
  D46():
    deopt 159 [];
  D52():
    deopt 173 [msg2];
  D58():
    deopt 201 [];
  D64():
    deopt 215 [];
  D69():
    deopt 232 [r127];
  L40(r130):
    r132 = `>`(r130, 1);
    c30 = `as.logical`(r132);
    if c30 then L273() else L41();
  L45(r150):
    c34 = `as.logical`(r150);
    if c34 then L298() else L46();
  L192():
    goto L20(r69);
  L215():
    p14 = prom<V +>{
      sort3 = ldf sort;
      p13 = prom<V +>{
        xx20 = ld xx;
        xx21 = force? xx20;
        checkMissing(xx21);
        return xx21;
      };
      r88 = dyn sort3(p13);
      return r88;
    };
    r90 = dyn _pretty_format3(p14);
    check L216() else D47();
  L224():
    msg3 = force? msg2;
    checkMissing(msg3);
    c16 = ldf c in base;
    r98 = dyn c16(r97, msg3);
    check L225() else D53();
  L243():
    r110 = dyn gettext4("'library' or 'require' calls in package code:");
    check L244() else D59();
  L252():
    p20 = prom<V +>{
      sQuote4 = ldf sQuote;
      p19 = prom<V +>{
        xx28 = ld xx;
        xx29 = force? xx28;
        checkMissing(xx29);
        return xx29;
      };
      r119 = dyn sQuote4(p19);
      return r119;
    };
    r121 = dyn gettextf4("'library' or 'require' call to %s in package code.", p20);
    check L253() else D65();
  L263():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L260(dx10);
  L264():
    goto L37(r127);
  L269():
    xx30 = ld xx;
    check L271() else D71();
  L270():
    r129 = dyn base20(<sym xx>);
    goto L40(r129);
  L290():
    x25 = ld x;
    check L292() else D83();
  L291():
    r149 = dyn base23(<lang `<-`(xx, `$`(x, depends_not_import))>);
    goto L45(r149);
  D47():
    deopt 161 [r90];
  D53():
    deopt 176 [r98];
  D59():
    deopt 203 [r110];
  D65():
    deopt 218 [r121];
  D71():
    deopt 242 [xx30];
  D83():
    deopt 277 [x25];
  L41():
    sym22 = ldf c;
    base22 = ldf c in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L283() else L284();
  L43(r141):
    goto L44(r141);
  L46():
    goto L52(NULL);
  L52(r175):
    sym28 = ldf length;
    base28 = ldf length in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L323() else L324();
  L216():
    msg = ld msg;
    check L217() else D48();
  L225():
    goto L28(r98);
  L244():
    _pretty_format4 = ldf `.pretty_format`;
    check L245() else D60();
  L253():
    msg6 = ld msg;
    check L254() else D66();
  L271():
    xx31 = force? xx30;
    checkMissing(xx31);
    length11 = ldf length in base;
    r131 = dyn length11(xx31);
    check L272() else D72();
  L273():
    sym21 = ldf c;
    base21 = ldf c in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L274() else L275();
  L292():
    x26 = force? x25;
    checkMissing(x26);
    c33 = `is.object`(x26);
    if c33 then L294() else L295(x26);
  L298():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L299() else L300();
  D48():
    deopt 162 [msg];
  D60():
    deopt 205 [];
  D66():
    deopt 219 [msg6];
  D72():
    deopt 245 [r131];
  L42(r134):
    goto L43(r134);
  L47(r154):
    st msg = r154;
    sym25 = ldf length;
    base25 = ldf length in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L302() else L303();
  L53(r177):
    c40 = `as.logical`(r177);
    if c40 then L331() else L54();
  L217():
    msg1 = force? msg;
    checkMissing(msg1);
    c15 = ldf c in base;
    r91 = dyn c15(r86, r90, msg1);
    check L218() else D49();
  L245():
    p18 = prom<V +>{
      sort4 = ldf sort;
      p17 = prom<V +>{
        xx26 = ld xx;
        xx27 = force? xx26;
        checkMissing(xx27);
        return xx27;
      };
      r112 = dyn sort4(p17);
      return r112;
    };
    r114 = dyn _pretty_format4(p18);
    check L246() else D61();
  L254():
    msg7 = force? msg6;
    checkMissing(msg7);
    c21 = ldf c in base;
    r122 = dyn c21(r121, msg7);
    check L255() else D67();
  L272():
    goto L40(r131);
  L274():
    gettext5 = ldf gettext;
    check L276() else D73();
  L275():
    r133 = dyn base21(<lang gettext("Namespaces in Imports field not imported from:")>, <lang .pretty_format(sort(xx))>, <sym msg>);
    goto L42(r133);
  L283():
    gettextf5 = ldf gettextf;
    check L285() else D79();
  L284():
    r142 = dyn base22(<lang gettextf("Namespace in Imports field not imported from: %s", sQuote(xx))>, <sym msg>);
    goto L43(r142);
  L293(dx13):
    st xx = dx13;
    length12 = ldf length in base;
    r152 = dyn length12(dx13);
    check L297() else D84();
  L294():
    dr12 = tryDispatchBuiltin.1("$", x26);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L296() else L295(dr12);
  L295(x28):
    r151 = `$`(x28, <sym depends_not_import>);
    goto L293(r151);
  L299():
    c35 = ldf c in base;
    r155 = dyn c35("  These packages need to be imported from (in the NAMESPACE file)", "  for when this namespace is loaded but not attached.");
    check L301() else D85();
  L300():
    r153 = dyn base24("  These packages need to be imported from (in the NAMESPACE file)", "  for when this namespace is loaded but not attached.");
    goto L47(r153);
  L323():
    x29 = ld x;
    check L325() else D98();
  L324():
    r176 = dyn base28(<lang `<-`(xx, `$`(x, imp2un))>);
    goto L53(r176);
  D49():
    deopt 165 [r91];
  D61():
    deopt 207 [r114];
  D67():
    deopt 222 [r122];
  D73():
    deopt 251 [];
  D79():
    deopt 265 [];
  D84():
    deopt 282 [r152];
  D85():
    deopt 288 [r155];
  D98():
    deopt 327 [x29];
  L48(r157):
    r159 = `>`(r157, 1);
    c36 = `as.logical`(r159);
    if c36 then L306() else L49();
  L54():
    goto L59(NULL);
  L59(r197):
    sym31 = ldf length;
    base31 = ldf length in base;
    guard31 = `==`.4(sym31, base31);
    if guard31 then L348() else L349();
  L218():
    goto L27(r91);
  L246():
    msg4 = ld msg;
    check L247() else D62();
  L255():
    goto L35(r122);
  L276():
    r135 = dyn gettext5("Namespaces in Imports field not imported from:");
    check L277() else D74();
  L285():
    p24 = prom<V +>{
      sQuote5 = ldf sQuote;
      p23 = prom<V +>{
        xx34 = ld xx;
        xx35 = force? xx34;
        checkMissing(xx35);
        return xx35;
      };
      r144 = dyn sQuote5(p23);
      return r144;
    };
    r146 = dyn gettextf5("Namespace in Imports field not imported from: %s", p24);
    check L286() else D80();
  L296():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L293(dx12);
  L297():
    goto L45(r152);
  L301():
    goto L47(r155);
  L302():
    xx36 = ld xx;
    check L304() else D86();
  L303():
    r156 = dyn base25(<sym xx>);
    goto L48(r156);
  L325():
    x30 = force? x29;
    checkMissing(x30);
    c39 = `is.object`(x30);
    if c39 then L327() else L328(x30);
  L331():
    sym29 = ldf length;
    base29 = ldf length in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L332() else L333();
  D62():
    deopt 208 [msg4];
  D74():
    deopt 253 [r135];
  D80():
    deopt 268 [r146];
  D86():
    deopt 292 [xx36];
  L49():
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L316() else L317();
  L51(r168):
    goto L52(r168);
  L55(r181):
    r183 = `>`(r181, 1);
    c41 = `as.logical`(r183);
    if c41 then L336() else L56();
  L60(r199):
    c44 = `as.logical`(r199);
    if c44 then L356() else L61();
  L247():
    msg5 = force? msg4;
    checkMissing(msg5);
    c20 = ldf c in base;
    r115 = dyn c20(r110, r114, msg5);
    check L248() else D63();
  L277():
    _pretty_format5 = ldf `.pretty_format`;
    check L278() else D75();
  L286():
    msg10 = ld msg;
    check L287() else D81();
  L304():
    xx37 = force? xx36;
    checkMissing(xx37);
    length13 = ldf length in base;
    r158 = dyn length13(xx37);
    check L305() else D87();
  L306():
    sym26 = ldf c;
    base26 = ldf c in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L307() else L308();
  L326(dx15):
    st xx = dx15;
    length14 = ldf length in base;
    r179 = dyn length14(dx15);
    check L330() else D99();
  L327():
    dr14 = tryDispatchBuiltin.1("$", x30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L329() else L328(dr14);
  L328(x32):
    r178 = `$`(x32, <sym imp2un>);
    goto L326(r178);
  L332():
    xx42 = ld xx;
    check L334() else D100();
  L333():
    r180 = dyn base29(<sym xx>);
    goto L55(r180);
  L348():
    x33 = ld x;
    check L350() else D109();
  L349():
    r198 = dyn base31(<lang `<-`(xx, `$`(x, imp32))>);
    goto L60(r198);
  D63():
    deopt 211 [r115];
  D75():
    deopt 255 [];
  D81():
    deopt 269 [msg10];
  D87():
    deopt 295 [r158];
  D99():
    deopt 332 [r179];
  D100():
    deopt 335 [xx42];
  D109():
    deopt 362 [x33];
  L50(r161):
    goto L51(r161);
  L56():
    gettextf7 = ldf gettextf;
    check L345() else D107();
  L58(r192):
    goto L59(r192);
  L61():
    goto L66(NULL);
  L66(r225):
    sym35 = ldf length;
    base35 = ldf length in base;
    guard35 = `==`.4(sym35, base35);
    if guard35 then L380() else L381();
  L248():
    goto L34(r115);
  L278():
    p22 = prom<V +>{
      sort5 = ldf sort;
      p21 = prom<V +>{
        xx32 = ld xx;
        xx33 = force? xx32;
        checkMissing(xx33);
        return xx33;
      };
      r137 = dyn sort5(p21);
      return r137;
    };
    r139 = dyn _pretty_format5(p22);
    check L279() else D76();
  L287():
    msg11 = force? msg10;
    checkMissing(msg11);
    c32 = ldf c in base;
    r147 = dyn c32(r146, msg11);
    check L288() else D82();
  L305():
    goto L48(r158);
  L307():
    gettext6 = ldf gettext;
    check L309() else D88();
  L308():
    r160 = dyn base26(<lang gettext("Packages in Depends field not imported from:")>, <lang .pretty_format(sort(xx))>, <sym msg>);
    goto L50(r160);
  L316():
    gettextf6 = ldf gettextf;
    check L318() else D94();
  L317():
    r169 = dyn base27(<lang gettextf("Package in Depends field not imported from: %s", sQuote(xx))>, <sym msg>);
    goto L51(r169);
  L329():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L326(dx14);
  L330():
    goto L53(r179);
  L334():
    xx43 = force? xx42;
    checkMissing(xx43);
    length15 = ldf length in base;
    r182 = dyn length15(xx43);
    check L335() else D101();
  L336():
    sym30 = ldf c;
    base30 = ldf c in base;
    guard30 = `==`.4(sym30, base30);
    if guard30 then L337() else L338();
  L350():
    x34 = force? x33;
    checkMissing(x34);
    c43 = `is.object`(x34);
    if c43 then L352() else L353(x34);
  L356():
    st msg = "See the note in ?`:::` about the use of this operator.";
    strwrap = ldf strwrap;
    check L357() else D111();
  D76():
    deopt 257 [r139];
  D82():
    deopt 272 [r147];
  D88():
    deopt 301 [];
  D94():
    deopt 315 [];
  D101():
    deopt 338 [r182];
  D107():
    deopt 354 [];
  D111():
    deopt 372 [];
  L57(r185):
    goto L58(r185);
  L67(r227):
    c49 = `as.logical`(r227);
    if c49 then L388() else L68();
  L279():
    msg8 = ld msg;
    check L280() else D77();
  L288():
    goto L43(r147);
  L309():
    r162 = dyn gettext6("Packages in Depends field not imported from:");
    check L310() else D89();
  L318():
    p28 = prom<V +>{
      sQuote6 = ldf sQuote;
      p27 = prom<V +>{
        xx40 = ld xx;
        xx41 = force? xx40;
        checkMissing(xx41);
        return xx41;
      };
      r171 = dyn sQuote6(p27);
      return r171;
    };
    r173 = dyn gettextf6("Package in Depends field not imported from: %s", p28);
    check L319() else D95();
  L335():
    goto L55(r182);
  L337():
    gettext7 = ldf gettext;
    check L339() else D102();
  L338():
    r184 = dyn base30(<lang gettext("Missing or unexported objects:")>, <lang .pretty_format(sort(xx))>);
    goto L57(r184);
  L345():
    p32 = prom<V +>{
      sQuote7 = ldf sQuote;
      p31 = prom<V +>{
        xx46 = ld xx;
        xx47 = force? xx46;
        checkMissing(xx47);
        return xx47;
      };
      r194 = dyn sQuote7(p31);
      return r194;
    };
    r196 = dyn gettextf7("Missing or unexported object: %s", p32);
    check L346() else D108();
  L351(dx17):
    st xx = dx17;
    length16 = ldf length in base;
    r201 = dyn length16(dx17);
    check L355() else D110();
  L352():
    dr16 = tryDispatchBuiltin.1("$", x34);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L354() else L353(dr16);
  L353(x36):
    r200 = `$`(x36, <sym imp32>);
    goto L351(r200);
  L357():
    p34 = prom<V +>{
      paste = ldf paste;
      p33 = prom<V +>{
        msg16 = ld msg;
        msg17 = force? msg16;
        checkMissing(msg17);
        return msg17;
      };
      r203 = dyn paste[, collapse](p33, " ");
      return r203;
    };
    r205 = dyn strwrap[, indent, exdent](p34, 2, 2);
    check L358() else D112();
  L380():
    x37 = ld x;
    check L382() else D125();
  L381():
    r226 = dyn base35(<lang `<-`(xx, `$`(x, imp3ff))>);
    goto L67(r226);
  D77():
    deopt 258 [msg8];
  D89():
    deopt 303 [r162];
  D95():
    deopt 318 [r173];
  D102():
    deopt 344 [];
  D108():
    deopt 357 [r196];
  D110():
    deopt 367 [r201];
  D112():
    deopt 378 [r205];
  D125():
    deopt 417 [x37];
  L68():
    goto L73(NULL);
  L73(r247):
    sym38 = ldf length;
    base38 = ldf length in base;
    guard38 = `==`.4(sym38, base38);
    if guard38 then L405() else L406();
  L280():
    msg9 = force? msg8;
    checkMissing(msg9);
    c31 = ldf c in base;
    r140 = dyn c31(r135, r139, msg9);
    check L281() else D78();
  L310():
    _pretty_format6 = ldf `.pretty_format`;
    check L311() else D90();
  L319():
    msg14 = ld msg;
    check L320() else D96();
  L339():
    r186 = dyn gettext7("Missing or unexported objects:");
    check L340() else D103();
  L346():
    goto L58(r196);
  L354():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L351(dx16);
  L355():
    goto L60(r201);
  L358():
    st msg = r205;
    sym32 = ldf length;
    base32 = ldf length in base;
    guard32 = `==`.4(sym32, base32);
    if guard32 then L359() else L360();
  L382():
    x38 = force? x37;
    checkMissing(x38);
    c48 = `is.object`(x38);
    if c48 then L384() else L385(x38);
  L388():
    sym36 = ldf length;
    base36 = ldf length in base;
    guard36 = `==`.4(sym36, base36);
    if guard36 then L389() else L390();
  D78():
    deopt 261 [r140];
  D90():
    deopt 305 [];
  D96():
    deopt 319 [msg14];
  D103():
    deopt 346 [r186];
  L62(r207):
    r209 = `>`(r207, 1);
    c45 = `as.logical`(r209);
    if c45 then L363() else L63();
  L69(r231):
    r233 = `>`(r231, 1);
    c50 = `as.logical`(r233);
    if c50 then L393() else L70();
  L74(r249):
    c53 = `as.logical`(r249);
    if c53 then L413() else L75();
  L281():
    goto L42(r140);
  L311():
    p26 = prom<V +>{
      sort6 = ldf sort;
      p25 = prom<V +>{
        xx38 = ld xx;
        xx39 = force? xx38;
        checkMissing(xx39);
        return xx39;
      };
      r164 = dyn sort6(p25);
      return r164;
    };
    r166 = dyn _pretty_format6(p26);
    check L312() else D91();
  L320():
    msg15 = force? msg14;
    checkMissing(msg15);
    c38 = ldf c in base;
    r174 = dyn c38(r173, msg15);
    check L321() else D97();
  L340():
    _pretty_format7 = ldf `.pretty_format`;
    check L341() else D104();
  L359():
    xx48 = ld xx;
    check L361() else D113();
  L360():
    r206 = dyn base32(<sym xx>);
    goto L62(r206);
  L383(dx19):
    st xx = dx19;
    length18 = ldf length in base;
    r229 = dyn length18(dx19);
    check L387() else D126();
  L384():
    dr18 = tryDispatchBuiltin.1("$", x38);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L386() else L385(dr18);
  L385(x40):
    r228 = `$`(x40, <sym imp3ff>);
    goto L383(r228);
  L389():
    xx54 = ld xx;
    check L391() else D127();
  L390():
    r230 = dyn base36(<sym xx>);
    goto L69(r230);
  L405():
    x41 = ld x;
    check L407() else D136();
  L406():
    r248 = dyn base38(<lang `<-`(xxx, `$`(x, imp3f))>);
    goto L74(r248);
  D91():
    deopt 307 [r166];
  D97():
    deopt 322 [r174];
  D104():
    deopt 348 [];
  D113():
    deopt 382 [xx48];
  D126():
    deopt 422 [r229];
  D127():
    deopt 425 [xx54];
  D136():
    deopt 452 [x41];
  L63():
    sym34 = ldf c;
    base34 = ldf c in base;
    guard34 = `==`.4(sym34, base34);
    if guard34 then L373() else L374();
  L65(r218):
    goto L66(r218);
  L70():
    gettextf9 = ldf gettextf;
    check L402() else D134();
  L72(r242):
    goto L73(r242);
  L75():
    goto L89(NULL);
  L89(r309):
    isTRUE = ldf isTRUE;
    check L463() else D166();
  L312():
    msg12 = ld msg;
    check L313() else D92();
  L321():
    goto L51(r174);
  L341():
    p30 = prom<V +>{
      sort7 = ldf sort;
      p29 = prom<V +>{
        xx44 = ld xx;
        xx45 = force? xx44;
        checkMissing(xx45);
        return xx45;
      };
      r188 = dyn sort7(p29);
      return r188;
    };
    r190 = dyn _pretty_format7(p30);
    check L342() else D105();
  L361():
    xx49 = force? xx48;
    checkMissing(xx49);
    length17 = ldf length in base;
    r208 = dyn length17(xx49);
    check L362() else D114();
  L363():
    sym33 = ldf c;
    base33 = ldf c in base;
    guard33 = `==`.4(sym33, base33);
    if guard33 then L364() else L365();
  L386():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L383(dx18);
  L387():
    goto L67(r229);
  L391():
    xx55 = force? xx54;
    checkMissing(xx55);
    length19 = ldf length in base;
    r232 = dyn length19(xx55);
    check L392() else D128();
  L393():
    sym37 = ldf c;
    base37 = ldf c in base;
    guard37 = `==`.4(sym37, base37);
    if guard37 then L394() else L395();
  L407():
    x42 = force? x41;
    checkMissing(x42);
    c52 = `is.object`(x42);
    if c52 then L409() else L410(x42);
  L413():
    st msg = "See the note in ?`:::` about the use of this operator.";
    strwrap1 = ldf strwrap;
    check L414() else D138();
  D92():
    deopt 308 [msg12];
  D105():
    deopt 350 [r190];
  D114():
    deopt 385 [r208];
  D128():
    deopt 428 [r232];
  D134():
    deopt 444 [];
  D138():
    deopt 462 [];
  D166():
    deopt 553 [];
  L64(r211):
    goto L65(r211);
  L71(r235):
    goto L72(r235);
  L313():
    msg13 = force? msg12;
    checkMissing(msg13);
    c37 = ldf c in base;
    r167 = dyn c37(r162, r166, msg13);
    check L314() else D93();
  L342():
    c42 = ldf c in base;
    r191 = dyn c42(r186, r190);
    check L343() else D106();
  L362():
    goto L62(r208);
  L364():
    gettext8 = ldf gettext;
    check L366() else D115();
  L365():
    r210 = dyn base33(<lang gettext("':::' calls which should be '::':")>, <lang .pretty_format(sort(xx))>, <sym msg>);
    goto L64(r210);
  L373():
    gettextf8 = ldf gettextf;
    check L375() else D121();
  L374():
    r219 = dyn base34(<lang gettextf("':::' call which should be '::': %s", sQuote(xx))>, <sym msg>);
    goto L65(r219);
  L392():
    goto L69(r232);
  L394():
    gettext9 = ldf gettext;
    check L396() else D129();
  L395():
    r234 = dyn base37(<lang gettext("Missing objects imported by ':::' calls:")>, <lang .pretty_format(sort(xx))>);
    goto L71(r234);
  L402():
    p42 = prom<V +>{
      sQuote9 = ldf sQuote;
      p41 = prom<V +>{
        xx58 = ld xx;
        xx59 = force? xx58;
        checkMissing(xx59);
        return xx59;
      };
      r244 = dyn sQuote9(p41);
      return r244;
    };
    r246 = dyn gettextf9("Missing object imported by a ':::' call: %s", p42);
    check L403() else D135();
  L408(dx21):
    st xxx = dx21;
    length20 = ldf length in base;
    r251 = dyn length20(dx21);
    check L412() else D137();
  L409():
    dr20 = tryDispatchBuiltin.1("$", x42);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L411() else L410(dr20);
  L410(x44):
    r250 = `$`(x44, <sym imp3f>);
    goto L408(r250);
  L414():
    p44 = prom<V +>{
      paste1 = ldf paste;
      p43 = prom<V +>{
        msg22 = ld msg;
        msg23 = force? msg22;
        checkMissing(msg23);
        return msg23;
      };
      r253 = dyn paste1[, collapse](p43, " ");
      return r253;
    };
    r255 = dyn strwrap1[, indent, exdent](p44, 2, 2);
    check L415() else D139();
  L463():
    p56 = prom<V +>{
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      c63 = `is.object`(x46);
      if c63 then L1() else L2(x46);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("$", x46);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(x48):
      r310 = `$`(x48, <sym imp3self>);
      goto L0(r310);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    r312 = dyn isTRUE(p56);
    check L464() else D167();
  D93():
    deopt 311 [r167];
  D106():
    deopt 352 [r191];
  D115():
    deopt 391 [];
  D121():
    deopt 405 [];
  D129():
    deopt 434 [];
  D135():
    deopt 447 [r246];
  D137():
    deopt 457 [r251];
  D139():
    deopt 468 [r255];
  D167():
    deopt 555 [r312];
  L314():
    goto L50(r167);
  L343():
    goto L57(r191);
  L366():
    r212 = dyn gettext8("':::' calls which should be '::':");
    check L367() else D116();
  L375():
    p38 = prom<V +>{
      sQuote8 = ldf sQuote;
      p37 = prom<V +>{
        xx52 = ld xx;
        xx53 = force? xx52;
        checkMissing(xx53);
        return xx53;
      };
      r221 = dyn sQuote8(p37);
      return r221;
    };
    r223 = dyn gettextf8("':::' call which should be '::': %s", p38);
    check L376() else D122();
  L396():
    r236 = dyn gettext9("Missing objects imported by ':::' calls:");
    check L397() else D130();
  L403():
    goto L72(r246);
  L411():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L408(dx20);
  L412():
    goto L74(r251);
  L415():
    st msg = r255;
    incoming = ld incoming;
    check L416() else D140();
  L464():
    c64 = `as.logical`(r312);
    if c64 then L465() else L90();
  D116():
    deopt 393 [r212];
  D122():
    deopt 408 [r223];
  D130():
    deopt 436 [r236];
  D140():
    deopt 470 [incoming];
  L90():
    goto L93(NULL);
  L93(r328):
    sym48 = ldf length;
    base52 = ldf length in base;
    guard48 = `==`.4(sym48, base52);
    if guard48 then L477() else L478();
  L367():
    _pretty_format8 = ldf `.pretty_format`;
    check L368() else D117();
  L376():
    msg20 = ld msg;
    check L377() else D123();
  L397():
    _pretty_format9 = ldf `.pretty_format`;
    check L398() else D131();
  L416():
    incoming1 = force? incoming;
    checkMissing(incoming1);
    c54 = `as.logical`(incoming1);
    if c54 then L417() else L76();
  L465():
    sym46 = ldf c;
    base50 = ldf c in base;
    guard46 = `==`.4(sym46, base50);
    if guard46 then L466() else L467();
  D117():
    deopt 395 [];
  D123():
    deopt 409 [msg20];
  D131():
    deopt 438 [];
  L76():
    goto L81();
  L81():
    sym42 = ldf length;
    base46 = ldf length in base;
    guard42 = `==`.4(sym42, base46);
    if guard42 then L436() else L437();
  L91(r314):
    st msg = r314;
    sym47 = ldf c;
    base51 = ldf c in base;
    guard47 = `==`.4(sym47, base51);
    if guard47 then L469() else L470();
  L94(r330):
    c69 = `as.logical`(r330);
    if c69 then L485() else L95();
  L368():
    p36 = prom<V +>{
      sort8 = ldf sort;
      p35 = prom<V +>{
        xx50 = ld xx;
        xx51 = force? xx50;
        checkMissing(xx51);
        return xx51;
      };
      r214 = dyn sort8(p35);
      return r214;
    };
    r216 = dyn _pretty_format8(p36);
    check L369() else D118();
  L377():
    msg21 = force? msg20;
    checkMissing(msg21);
    c47 = ldf c in base;
    r224 = dyn c47(r223, msg21);
    check L378() else D124();
  L398():
    p40 = prom<V +>{
      sort9 = ldf sort;
      p39 = prom<V +>{
        xx56 = ld xx;
        xx57 = force? xx56;
        checkMissing(xx57);
        return xx57;
      };
      r238 = dyn sort9(p39);
      return r238;
    };
    r240 = dyn _pretty_format9(p40);
    check L399() else D132();
  L417():
    sub = ldf sub;
    check L418() else D141();
  L466():
    c65 = ldf c in base;
    r315 = dyn c65("There are ::: calls to the package's namespace in its code.", "A package almost never needs to use ::: for its own objects:");
    check L468() else D168();
  L467():
    r313 = dyn base50("There are ::: calls to the package's namespace in its code.", "A package almost never needs to use ::: for its own objects:");
    goto L91(r313);
  L477():
    x53 = ld x;
    check L479() else D174();
  L478():
    r329 = dyn base52(<lang `<-`(xx, `$`(x, imp3unknown))>);
    goto L94(r329);
  D118():
    deopt 397 [r216];
  D124():
    deopt 412 [r224];
  D132():
    deopt 440 [r240];
  D141():
    deopt 473 [];
  D168():
    deopt 561 [r315];
  D174():
    deopt 583 [x53];
  L82(r287):
    r289 = `>`(r287, 1);
    c59 = `as.logical`(r289);
    if c59 then L440() else L83();
  L92(r317):
    goto L93(r317);
  L95():
    goto L100(NULL);
  L100(r356):
    sym52 = ldf length;
    base56 = ldf length in base;
    guard52 = `==`.4(sym52, base56);
    if guard52 then L509() else L510();
  L369():
    msg18 = ld msg;
    check L370() else D119();
  L378():
    goto L65(r224);
  L399():
    c51 = ldf c in base;
    r241 = dyn c51(r236, r240);
    check L400() else D133();
  L418():
    p45 = prom<V +>{
      xxx = ld xxx;
      xxx1 = force? xxx;
      checkMissing(xxx1);
      return xxx1;
    };
    r257 = dyn sub(":::.*", "", p45);
    check L419() else D142();
  L436():
    xxx2 = ld xxx;
    check L438() else D152();
  L437():
    r286 = dyn base46(<sym xxx>);
    goto L82(r286);
  L468():
    goto L91(r315);
  L469():
    strwrap2 = ldf strwrap;
    check L471() else D169();
  L470():
    r316 = dyn base51(<lang strwrap(paste(msg, collapse=" "), indent=0, exdent=2)>, <lang .pretty_format(sort(`$`(x, imp3selfcalls)))>);
    goto L92(r316);
  L479():
    x54 = force? x53;
    checkMissing(x54);
    c68 = `is.object`(x54);
    if c68 then L481() else L482(x54);
  L485():
    st msg = "See the note in ?`:::` about the use of this operator.";
    strwrap3 = ldf strwrap;
    check L486() else D176();
  D119():
    deopt 398 [msg18];
  D133():
    deopt 442 [r241];
  D142():
    deopt 477 [r257];
  D152():
    deopt 511 [xxx2];
  D169():
    deopt 566 [];
  D176():
    deopt 593 [];
  L83():
    sym44 = ldf length;
    base48 = ldf length in base;
    guard44 = `==`.4(sym44, base48);
    if guard44 then L450() else L451();
  L85(r298):
    goto L89(r298);
  L101(r358):
    c74 = `as.logical`(r358);
    if c74 then L517() else L102();
  L370():
    msg19 = force? msg18;
    checkMissing(msg19);
    c46 = ldf c in base;
    r217 = dyn c46(r212, r216, msg19);
    check L371() else D120();
  L400():
    goto L71(r241);
  L419():
    st z = r257;
    unlist = ldf unlist;
    check L420() else D143();
  L438():
    xxx3 = force? xxx2;
    checkMissing(xxx3);
    length21 = ldf length in base;
    r288 = dyn length21(xxx3);
    check L439() else D153();
  L440():
    sym43 = ldf c;
    base47 = ldf c in base;
    guard43 = `==`.4(sym43, base47);
    if guard43 then L441() else L442();
  L471():
    p58 = prom<V +>{
      paste2 = ldf paste;
      p57 = prom<V +>{
        msg30 = ld msg;
        msg31 = force? msg30;
        checkMissing(msg31);
        return msg31;
      };
      r319 = dyn paste2[, collapse](p57, " ");
      return r319;
    };
    r321 = dyn strwrap2[, indent, exdent](p58, 0, 2);
    check L472() else D170();
  L480(dx29):
    st xx = dx29;
    length23 = ldf length in base;
    r332 = dyn length23(dx29);
    check L484() else D175();
  L481():
    dr28 = tryDispatchBuiltin.1("$", x54);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L483() else L482(dr28);
  L482(x56):
    r331 = `$`(x56, <sym imp3unknown>);
    goto L480(r331);
  L486():
    p62 = prom<V +>{
      paste3 = ldf paste;
      p61 = prom<V +>{
        msg32 = ld msg;
        msg33 = force? msg32;
        checkMissing(msg33);
        return msg33;
      };
      r334 = dyn paste3[, collapse](p61, " ");
      return r334;
    };
    r336 = dyn strwrap3[, indent, exdent](p62, 2, 2);
    check L487() else D177();
  L509():
    x57 = ld x;
    check L511() else D190();
  L510():
    r357 = dyn base56(<lang `<-`(xx, `$`(x, data))>);
    goto L101(r357);
  D120():
    deopt 401 [r217];
  D143():
    deopt 480 [];
  D153():
    deopt 514 [r288];
  D170():
    deopt 572 [r321];
  D175():
    deopt 588 [r332];
  D177():
    deopt 599 [r336];
  D190():
    deopt 638 [x57];
  L84(r291):
    goto L85(r291);
  L86(r300):
    c61 = `as.logical`(r300);
    if c61 then L454() else L87();
  L102():
    goto L107(NULL);
  L107(r378):
    sym55 = ldf nzchar;
    base59 = ldf nzchar in base;
    guard55 = `==`.4(sym55, base59);
    if guard55 then L534() else L535();
  L371():
    goto L64(r217);
  L420():
    p46 = prom<V +>{
      _get_standard_package_names = ldf `.get_standard_package_names`;
      r258 = dyn _get_standard_package_names();
      c55 = `is.object`(r258);
      if c55 then L2() else L3(r258);
    L0(dx23):
      return dx23;
    L2():
      dr22 = tryDispatchBuiltin.1("[", r258);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(r260):
      sym39 = ldf c;
      base39 = ldf c in base;
      guard39 = `==`.4(sym39, base39);
      if guard39 then L5() else L6();
    L1(r264, r265):
      __ = ldf `[` in base;
      r267 = dyn __(r264, r265);
      goto L0(r267);
    L4():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    L5():
      c56 = ldf c in base;
      r266 = dyn c56("base", "recommended");
      goto L1(r260, r266);
    L6():
      r263 = dyn base39("base", "recommended");
      goto L1(r260, r263);
    };
    r269 = dyn unlist(p46);
    check L421() else D144();
  L439():
    goto L82(r288);
  L441():
    gettext10 = ldf gettext;
    check L443() else D154();
  L442():
    r290 = dyn base47(<lang gettext("Unexported objects imported by ':::' calls:")>, <lang .pretty_format(sort(xxx))>, <sym msg>);
    goto L84(r290);
  L450():
    xxx6 = ld xxx;
    check L452() else D160();
  L451():
    r299 = dyn base48(<sym xxx>);
    goto L86(r299);
  L472():
    _pretty_format12 = ldf `.pretty_format`;
    check L473() else D171();
  L483():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L480(dx28);
  L484():
    goto L94(r332);
  L487():
    st msg = r336;
    sym49 = ldf length;
    base53 = ldf length in base;
    guard49 = `==`.4(sym49, base53);
    if guard49 then L488() else L489();
  L511():
    x58 = force? x57;
    checkMissing(x58);
    c73 = `is.object`(x58);
    if c73 then L513() else L514(x58);
  L517():
    sym53 = ldf length;
    base57 = ldf length in base;
    guard53 = `==`.4(sym53, base57);
    if guard53 then L518() else L519();
  D144():
    deopt 482 [r269];
  D154():
    deopt 520 [];
  D160():
    deopt 533 [xxx6];
  D171():
    deopt 574 [];
  L87():
    goto L85(NULL);
  L96(r338):
    r340 = `>`(r338, 1);
    c70 = `as.logical`(r340);
    if c70 then L492() else L97();
  L103(r362):
    r364 = `>`(r362, 1);
    c75 = `as.logical`(r364);
    if c75 then L522() else L104();
  L108(r380):
    c78 = `as.logical`(r380);
    if c78 then L542() else L109();
  L421():
    st base = r269;
    sym40 = ldf any;
    base40 = ldf any in base;
    guard40 = `==`.4(sym40, base40);
    if guard40 then L422() else L423();
  L443():
    r292 = dyn gettext10("Unexported objects imported by ':::' calls:");
    check L444() else D155();
  L452():
    xxx7 = force? xxx6;
    checkMissing(xxx7);
    length22 = ldf length in base;
    r301 = dyn length22(xxx7);
    check L453() else D161();
  L454():
    sym45 = ldf c;
    base49 = ldf c in base;
    guard45 = `==`.4(sym45, base49);
    if guard45 then L455() else L456();
  L473():
    p60 = prom<V +>{
      sort11 = ldf sort;
      p59 = prom<V +>{
        x49 = ld x;
        x50 = force? x49;
        checkMissing(x50);
        c66 = `is.object`(x50);
        if c66 then L1() else L2(x50);
      L0(dx27):
        return dx27;
      L1():
        dr26 = tryDispatchBuiltin.1("$", x50);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(x52):
        r322 = `$`(x52, <sym imp3selfcalls>);
        goto L0(r322);
      L3():
        dx26 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx26);
      };
      r324 = dyn sort11(p59);
      return r324;
    };
    r326 = dyn _pretty_format12(p60);
    check L474() else D172();
  L488():
    xx60 = ld xx;
    check L490() else D178();
  L489():
    r337 = dyn base53(<sym xx>);
    goto L96(r337);
  L512(dx31):
    st xx = dx31;
    length25 = ldf length in base;
    r360 = dyn length25(dx31);
    check L516() else D191();
  L513():
    dr30 = tryDispatchBuiltin.1("$", x58);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L515() else L514(dr30);
  L514(x60):
    r359 = `$`(x60, <sym data>);
    goto L512(r359);
  L518():
    xx66 = ld xx;
    check L520() else D192();
  L519():
    r361 = dyn base57(<sym xx>);
    goto L103(r361);
  L534():
    x61 = ld x;
    check L536() else D201();
  L535():
    r379 = dyn base59(<lang `$`(x, methods_message)>);
    goto L108(r379);
  D155():
    deopt 522 [r292];
  D161():
    deopt 536 [r301];
  D172():
    deopt 576 [r326];
  D178():
    deopt 603 [xx60];
  D191():
    deopt 643 [r360];
  D192():
    deopt 646 [xx66];
  D201():
    deopt 673 [x61];
  L77(r271):
    c57 = `as.logical`(r271);
    if c57 then L427() else L78();
  L88(r303):
    goto L85(r303);
  L97():
    sym51 = ldf c;
    base55 = ldf c in base;
    guard51 = `==`.4(sym51, base55);
    if guard51 then L502() else L503();
  L99(r349):
    goto L100(r349);
  L104():
    gettextf12 = ldf gettextf;
    check L531() else D199();
  L106(r373):
    goto L107(r373);
  L109():
    goto L110(NULL);
  L110(dx36):
    c80 = ldf c in base;
    r384 = dyn c80(r9, r31, r53, r75, r99, r123, r148, r175, r197, r225, r247, r309, r328, r356, r378, dx36);
    check L549() else D204();
  L422():
    _in_ = ldf `%in%`;
    check L424() else D145();
  L423():
    r270 = dyn base40(<lang `%in%`(z, base)>);
    goto L77(r270);
  L444():
    _pretty_format11 = ldf `.pretty_format`;
    check L445() else D156();
  L453():
    goto L86(r301);
  L455():
    gettextf10 = ldf gettextf;
    check L457() else D162();
  L456():
    r302 = dyn base49(<lang gettextf("Unexported object imported by a ':::' call: %s", sQuote(xxx))>, <sym msg>);
    goto L88(r302);
  L474():
    c67 = ldf c in base;
    r327 = dyn c67(r321, r326);
    check L475() else D173();
  L490():
    xx61 = force? xx60;
    checkMissing(xx61);
    length24 = ldf length in base;
    r339 = dyn length24(xx61);
    check L491() else D179();
  L492():
    sym50 = ldf c;
    base54 = ldf c in base;
    guard50 = `==`.4(sym50, base54);
    if guard50 then L493() else L494();
  L515():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L512(dx30);
  L516():
    goto L101(r360);
  L520():
    xx67 = force? xx66;
    checkMissing(xx67);
    length26 = ldf length in base;
    r363 = dyn length26(xx67);
    check L521() else D193();
  L522():
    sym54 = ldf c;
    base58 = ldf c in base;
    guard54 = `==`.4(sym54, base58);
    if guard54 then L523() else L524();
  L536():
    x62 = force? x61;
    checkMissing(x62);
    c77 = `is.object`(x62);
    if c77 then L538() else L539(x62);
  L542():
    x65 = ld x;
    check L543() else D203();
  D145():
    deopt 487 [];
  D156():
    deopt 524 [];
  D162():
    deopt 540 [];
  D173():
    deopt 578 [r327];
  D179():
    deopt 606 [r339];
  D193():
    deopt 649 [r363];
  D199():
    deopt 665 [];
  D203():
    deopt 678 [x65];
  D204():
    deopt 684 [r384];
  L78():
    goto L80(NULL);
  L80(r284):
    goto L81();
  L98(r342):
    goto L99(r342);
  L105(r366):
    goto L106(r366);
  L424():
    p47 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    p48 = prom<V +>{
      base41 = ld base;
      base42 = force? base41;
      checkMissing(base42);
      return base42;
    };
    r274 = dyn _in_(p47, p48);
    check L425() else D146();
  L427():
    sym41 = ldf c;
    base43 = ldf c in base;
    guard41 = `==`.4(sym41, base43);
    if guard41 then L428() else L429();
  L445():
    p53 = prom<V +>{
      sort10 = ldf sort;
      p52 = prom<V +>{
        xxx4 = ld xxx;
        xxx5 = force? xxx4;
        checkMissing(xxx5);
        return xxx5;
      };
      r294 = dyn sort10(p52);
      return r294;
    };
    r296 = dyn _pretty_format11(p53);
    check L446() else D157();
  L457():
    p55 = prom<V +>{
      sQuote10 = ldf sQuote;
      p54 = prom<V +>{
        xxx8 = ld xxx;
        xxx9 = force? xxx8;
        checkMissing(xxx9);
        return xxx9;
      };
      r305 = dyn sQuote10(p54);
      return r305;
    };
    r307 = dyn gettextf10("Unexported object imported by a ':::' call: %s", p55);
    check L458() else D163();
  L475():
    goto L92(r327);
  L491():
    goto L96(r339);
  L493():
    gettext11 = ldf gettext;
    check L495() else D180();
  L494():
    r341 = dyn base54(<lang gettext("Unavailable namespaces imported from by ':::' calls:")>, <lang .pretty_format(sort(xx))>, <sym msg>);
    goto L98(r341);
  L502():
    gettextf11 = ldf gettextf;
    check L504() else D186();
  L503():
    r350 = dyn base55(<lang gettextf("Unavailable namespace imported from by a ':::' call: %s", sQuote(xx))>, <sym msg>);
    goto L99(r350);
  L521():
    goto L103(r363);
  L523():
    gettext12 = ldf gettext;
    check L525() else D194();
  L524():
    r365 = dyn base58(<lang gettext("'data(package=)' calls not declared from:")>, <lang .pretty_format(sort(xx))>);
    goto L105(r365);
  L531():
    p70 = prom<V +>{
      sQuote12 = ldf sQuote;
      p69 = prom<V +>{
        xx70 = ld xx;
        xx71 = force? xx70;
        checkMissing(xx71);
        return xx71;
      };
      r375 = dyn sQuote12(p69);
      return r375;
    };
    r377 = dyn gettextf12("'data(package=)' call not declared from: %s", p70);
    check L532() else D200();
  L537(dx33):
    nzchar = ldf nzchar in base;
    r382 = dyn nzchar(dx33);
    check L541() else D202();
  L538():
    dr32 = tryDispatchBuiltin.1("$", x62);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L540() else L539(dr32);
  L539(x64):
    r381 = `$`(x64, <sym methods_message>);
    goto L537(r381);
  L543():
    x66 = force? x65;
    checkMissing(x66);
    c79 = `is.object`(x66);
    if c79 then L545() else L546(x66);
  L549():
    goto L1(r384);
  D146():
    deopt 490 [r274];
  D157():
    deopt 526 [r296];
  D163():
    deopt 543 [r307];
  D180():
    deopt 612 [];
  D186():
    deopt 626 [];
  D194():
    deopt 655 [];
  D200():
    deopt 668 [r377];
  D202():
    deopt 677 [r382];
  L79(r277):
    st msg = r277;
    goto L80(r277);
  L425():
    any = ldf any in base;
    r275 = dyn any(r274);
    check L426() else D147();
  L428():
    msg24 = ld msg;
    check L430() else D148();
  L429():
    r276 = dyn base43(<sym msg>, "  Including base/recommended package(s):", <lang .pretty_format(intersect(base, z))>);
    goto L79(r276);
  L446():
    msg26 = ld msg;
    check L447() else D158();
  L458():
    msg28 = ld msg;
    check L459() else D164();
  L495():
    r343 = dyn gettext11("Unavailable namespaces imported from by ':::' calls:");
    check L496() else D181();
  L504():
    p66 = prom<V +>{
      sQuote11 = ldf sQuote;
      p65 = prom<V +>{
        xx64 = ld xx;
        xx65 = force? xx64;
        checkMissing(xx65);
        return xx65;
      };
      r352 = dyn sQuote11(p65);
      return r352;
    };
    r354 = dyn gettextf11("Unavailable namespace imported from by a ':::' call: %s", p66);
    check L505() else D187();
  L525():
    r367 = dyn gettext12("'data(package=)' calls not declared from:");
    check L526() else D195();
  L532():
    goto L106(r377);
  L540():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L537(dx32);
  L541():
    goto L108(r382);
  L544(dx35):
    goto L110(dx35);
  L545():
    dr34 = tryDispatchBuiltin.1("$", x66);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L547() else L546(dr34);
  L546(x68):
    r383 = `$`(x68, <sym methods_message>);
    goto L544(r383);
  D147():
    deopt 492 [r275];
  D148():
    deopt 495 [msg24];
  D158():
    deopt 527 [msg26];
  D164():
    deopt 544 [msg28];
  D181():
    deopt 614 [r343];
  D187():
    deopt 629 [r354];
  D195():
    deopt 657 [r367];
  L426():
    goto L77(r275);
  L430():
    msg25 = force? msg24;
    checkMissing(msg25);
    _pretty_format10 = ldf `.pretty_format`;
    check L431() else D149();
  L447():
    msg27 = force? msg26;
    checkMissing(msg27);
    c60 = ldf c in base;
    r297 = dyn c60(r292, r296, msg27);
    check L448() else D159();
  L459():
    msg29 = force? msg28;
    checkMissing(msg29);
    c62 = ldf c in base;
    r308 = dyn c62(r307, msg29);
    check L460() else D165();
  L496():
    _pretty_format13 = ldf `.pretty_format`;
    check L497() else D182();
  L505():
    msg36 = ld msg;
    check L506() else D188();
  L526():
    _pretty_format14 = ldf `.pretty_format`;
    check L527() else D196();
  L547():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L544(dx34);
  D149():
    deopt 499 [];
  D159():
    deopt 530 [r297];
  D165():
    deopt 547 [r308];
  D182():
    deopt 616 [];
  D188():
    deopt 630 [msg36];
  D196():
    deopt 659 [];
  L431():
    p51 = prom<V +>{
      intersect = ldf intersect;
      p49 = prom<V +>{
        base44 = ld base;
        base45 = force? base44;
        checkMissing(base45);
        return base45;
      };
      p50 = prom<V +>{
        z2 = ld z;
        z3 = force? z2;
        checkMissing(z3);
        return z3;
      };
      r280 = dyn intersect(p49, p50);
      return r280;
    };
    r282 = dyn _pretty_format10(p51);
    check L432() else D150();
  L448():
    goto L84(r297);
  L460():
    goto L88(r308);
  L497():
    p64 = prom<V +>{
      sort12 = ldf sort;
      p63 = prom<V +>{
        xx62 = ld xx;
        xx63 = force? xx62;
        checkMissing(xx63);
        return xx63;
      };
      r345 = dyn sort12(p63);
      return r345;
    };
    r347 = dyn _pretty_format13(p64);
    check L498() else D183();
  L506():
    msg37 = force? msg36;
    checkMissing(msg37);
    c72 = ldf c in base;
    r355 = dyn c72(r354, msg37);
    check L507() else D189();
  L527():
    p68 = prom<V +>{
      sort13 = ldf sort;
      p67 = prom<V +>{
        xx68 = ld xx;
        xx69 = force? xx68;
        checkMissing(xx69);
        return xx69;
      };
      r369 = dyn sort13(p67);
      return r369;
    };
    r371 = dyn _pretty_format14(p68);
    check L528() else D197();
  D150():
    deopt 501 [r282];
  D183():
    deopt 618 [r347];
  D189():
    deopt 633 [r355];
  D197():
    deopt 661 [r371];
  L432():
    c58 = ldf c in base;
    r283 = dyn c58(msg25, "  Including base/recommended package(s):", r282);
    check L433() else D151();
  L498():
    msg34 = ld msg;
    check L499() else D184();
  L507():
    goto L99(r355);
  L528():
    c76 = ldf c in base;
    r372 = dyn c76(r367, r371);
    check L529() else D198();
  D151():
    deopt 503 [r283];
  D184():
    deopt 619 [msg34];
  D198():
    deopt 663 [r372];
  L433():
    goto L79(r283);
  L499():
    msg35 = force? msg34;
    checkMissing(msg35);
    c71 = ldf c in base;
    r348 = dyn c71(r343, r347, msg35);
    check L500() else D185();
  L529():
    goto L105(r372);
  D185():
    deopt 622 [r348];
  L500():
    goto L98(r348);
  }
}