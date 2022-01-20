# markdown syntax cheat-sheet

**tip:** use ```ctrl+f``` to quickly look through using keywords.


&nbsp;

## comments
```<!-- This content will not appear in the rendered Markdown -->```
<!-- This content will not appear in the rendered Markdown -->


&nbsp;

## HEADING
|syntax            | _priority_ |
|------------------|------------|
| `# heading`      | highest 
| `## heading`     |
| `### heading`    |
| `#### heading`   | 
| `##### heading`  | 
| `###### heading` | smallest


&nbsp;

## Text Styling
| Style      |    Syntax     |   Keyboard shortcut   |       Example              |       Output            |
|------------|---------------|-----------------------|----------------------------|-------------------------|
| **Bold**   |** ** or __ __ |command/control + b	 | `**This is bold text**`    |**This is bold text**    |
| _Italic_   |	* * or _ _   |command/control + i    | `*This text is italicized*`|_This text is italicized_|
|~~Strikethrough~~|	~~ ~~		| |`~~This was mistaken text~~`|	~~This was mistaken text~~ |
|**Bold and *nested* italic**|	** ** and _ _ |	|	`**This text is _extremely_ important**` |	**This text is _extremely_ important**|
|***All bold and italic***| *** *** | |	`***All this text is important***` | ***All this text is important*** |


&nbsp;

## Ignoring Markdown formatting
You can tell GitHub to ignore (or escape) Markdown formatting by using \ before the Markdown character.
<br/>***example:***
```Let's rename \*our-new-project\* to \*our-old-project\*.```
<br/>Let's rename \*our-new-project\* to \*our-old-project\*.


&nbsp;

## line break
use `<br/>` or  `&nbsp;` to add one empty line.  you can add two blank lines for a line break.

&nbsp;

## Quotext Text
>this is a quoted text 

***syntax:*** `>this is a quoted text`

***example:***
```
> Blockquotes can also be nested...
>> ...by using additional greater-than signs right next to each other...
> > > ...or with spaces between arrows.
```
***output:***
> Blockquotes can also be nested...
>> ...by using additional greater-than signs right next to each other...
> > > ...or with spaces between arrows.


&nbsp;

## Adding Code 

***note:*** add your code between ` ``` ``` ` , such that.
````
```languageName
your code here
```
````

***example:***
````
```C++ 
# <include>
using namespace std;  
int main(){
    //this is the example code 
}
```
````
***output:***
```C++ 
# <include>
using namespace std;  
int main(){
    //this is the example code 
}
```


&nbsp;

## Links
***syntax:***
`[linkText](https://url-of-location)`
<br/> ***example:*** `[Google](https://www.google.com)`
***output:*** [Google](https://www.google.com)

### ***Section link***
what

### ***Relative links***
A relative link is a link that is relative to the current file. For example, if you have a README file in root of your repository, and you have another file in docs/CONTRIBUTING.md, the relative link to CONTRIBUTING.md in your README might look like this:

``[Contribution guidelines for this project](docs/CONTRIBUTING.md)``


&nbsp;

### Adding Images
***syntax:*** `![This is an image](/link to image)` 
<br />\****note***\* the `!` mark.


&nbsp;

### Attaching files
To attach a file to an issue or pull request conversation, drag and drop it into the comment box. Alternatively, you can click the bar at the bottom of the comment box to browse, select, and add a file from your computer.
![image](https://user-images.githubusercontent.com/63545175/149994313-08f1ed6c-2373-4d61-9443-7b3ece289a7c.png)


&nbsp;

## Using emoji
You can add emoji to your writing by typing ```:EMOJICODE:```
<br/>***example:***
<br/>```:heart:``` :heart:


&nbsp;

## List
### You can make an unordered list by preceding one or more lines of text with - or *.
***example:***
```
* Mango
* Orange
* Banana
```
* Mango
* Orange
* Banana

### To make ordered list, precede each line with a number.
***example:***
```
1. Start PC
2. Open VScode
3. Do Code 
```
1. Start PC
2. Open VScode
3. Do Code 

### you can also make a nested list by doing -
***example:***
```
- First list item
   - First nested list item
     - Second nested list item
```
- First list item
   - First nested list item
     - Second nested list item


&nbsp;

## Creating a table
***example:***
```
| First Header  | Second Header |
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |
```
| First Header  | Second Header |
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |

aligning content 
```
| Left-aligned | Center-aligned | Right-aligned |
| :---         |     :---:      |          ---: |
| git status   | git status     | git status    |
| git diff     | git diff       | git diff      |
```
| Left-aligned | Center-aligned | Right-aligned |
| :---         |     :---:      |          ---: |
| git status   | git status     | git status    |
| git diff     | git diff       | git diff      |

*note:* To include a pipe | as content within your cell, use a \ before the pipe:
```
| Name     | Character |
| ---      | ---       |
| Backtick | `         |
| Pipe     | \|        |
```
| Name     | Character |
| ---      | ---       |
| Backtick | `         |
| Pipe     | \|        |


&nbsp;

## Organizing information with collapsed sections
***example:***
````
<details>
<summary>CLICK ME</summary>
<p>
#### We can hide anything, even code!
  
  ```python
      python("Hello World")
  ```
  
</p>
</details>
````


Output:
<details><summary>CLICK ME</summary>
<p>

#### We can hide anything, even code!

  ```python
      python("Hello World")
  ```

</p>
</details>


&nbsp;

## adding page break

---

***


&nbsp;

## FootNotes
```Note
Note: The position of a footnote in your Markdown does not influence where the footnote will be rendered. 
You can write a footnote right after your reference to the footnote, and the footnote will still render at the bottom of the Markdown.
```

You can add footnotes to your content by using this bracket syntax:
```
Here is a simple footnote[^1].

A footnote can also have multiple lines[^2].  

You can also use words, to fit your writing style more closely[^note].

[^1]: My reference.
[^2]: Every new line should be prefixed with 2 spaces.  
  This allows you to have a footnote with multiple lines.
[^note]:
    Named footnotes will still render with numbers instead of the text but allow easier identification and linking.  
    This footnote also has been made with a different syntax using 4 spaces for new lines.
``` 

Here is a simple footnote[^1].

A footnote can also have multiple lines[^2].  

You can also use words, to fit your writing style more closely[^note].

[^1]: My reference.
[^2]: Every new line should be prefixed with 2 spaces.  
  This allows you to have a footnote with multiple lines.
[^note]:
    Named footnotes will still render with numbers instead of the text but allow easier identification and linking.  
    This footnote also has been made with a different syntax using 4 spaces for new lines.


