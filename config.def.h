/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Meslo LG M:size=10:antialias=true:autohint=true",
    "Noto Color Emoji:pixelsize=16:antialias=true:autohint=true",
    "Material Design Icons:pixelsize=16:antialias=true:autohint=true",
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
	[SchemeNorm] = { "#e4e4e4", "#262626" },
	[SchemeSel]  = { "#ffffff", "#0087d7" },
	[SchemeOut]  = { "#000000", "#00af87" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
