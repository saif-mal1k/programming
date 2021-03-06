# markdown syntax cheat-sheet

**tip:** use ```ctrl+f``` to quickly look through using keywords.

**note:** identation, spaces and next lines matter in md.

<br/>

## comments
```<!-- This content will not appear in the rendered Markdown -->```
<!-- This content will not appear in the rendered Markdown -->


<br/>

## HEADING
|syntax            | _priority_ |
|------------------|------------|
| `# heading`      | highest 
| `## heading`     |
| `### heading`    |
| `#### heading`   | 
| `##### heading`  | 
| `###### heading` | smallest


<br/>

## Text Styling
| Style      |    Syntax     |   Keyboard shortcut   |       Example              |       Output            |
|------------|---------------|-----------------------|----------------------------|-------------------------|
| **Bold**   |** ** or __ __ |command/control + b	 | `**This is bold text**`    |**This is bold text**    |
| _Italic_   |	* * or _ _   |command/control + i    | `*This text is italicized*`|_This text is italicized_|
|~~Strikethrough~~|	~~ ~~		| |`~~This was mistaken text~~`|	~~This was mistaken text~~ |
|**Bold and *nested* italic**|	** ** and _ _ |	|	`**This text is _extremely_ important**` |	**This text is _extremely_ important**|
|***All bold and italic***| *** *** | |	`***All this text is important***` | ***All this text is important*** |


<br/>

## Ignoring Markdown formatting
You can tell GitHub to ignore (or escape) Markdown formatting by using \ before the Markdown character.
<br/>***example:***
```Let's rename \*our-new-project\* to \*our-old-project\*.```
<br/>Let's rename \*our-new-project\* to \*our-old-project\*.


<br/>

## line break
use `<br/>` for a line break. &nbsp; you can add two blank lines to add one empty line.

<br/>

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


<br/>

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


<br/>

---
## Links
***syntax:***
`[linkText](https://url-of-location)`
<br/> ***example:*** `[Google](https://www.google.com)`

***output:*** [Google](https://www.google.com)

***Link with a title***
`[linkText](https://url-of-location "TITLE")`

***example:*** `[Google](https://www.google.com "goto GOOGLE")`

***output:*** [Google](https://www.google.com "goto GOOGLE")

<br/>

---
### ***Section link***
```md
# Table of Contents
1. [Example](#example)
2. [Example2](#example2)
3. [Third Example](#third-example)
4. <a href="http://github.com/saif-mal1k/md%20(markdown)">Fourth Example</a>

## Example
## Example2
## Third Example
```

***working example:***
# Table of Contents
1. [Example](#example)
2. [Example2](#example2)
3. [Third Example](#third-example)
4. <a href="http://github.com/saif-mal1k/md%20(markdown)">Fourth Example</a>

## Example
## Example2
## Third Example

<br/>

***custom-name anchor link.***
```md
# Table of Contents
4. [Fourth/Example](#custom-name1)

## <a name="custom-name1"></a> Fourth/Example
```

***working example:***
# Table of Contents
4. [Fourth/Example](#custom-name1)

## <a name="custom-name1"></a> Fourth/Example

<br/>

---
## Attaching files with README
### ***Relative links***
A relative link is a link that is relative to the current file. For example, if you have a README file in root of your repository, and you have another file in docs/CONTRIBUTING.md, the relative link to CONTRIBUTING.md in your README might look like this:

``[Contribution guidelines for this project](docs/CONTRIBUTING.md)``


<br/>

### Adding Images
***syntax:*** `![This is an image](/link to image)` 
<br />\****note:***\* the `!` mark.


<br/>

### Attaching files
To attach a file to an issue or pull request conversation, drag and drop it into the comment box. Alternatively, you can click the bar at the bottom of the comment box to browse, select, and add a file from your computer.
![image](https://user-images.githubusercontent.com/63545175/149994313-08f1ed6c-2373-4d61-9443-7b3ece289a7c.png)


<br/>

## Adding CSS in ReadMe
<a href="https://github.com/sindresorhus/css-in-readme-like-wat" title="https://github.com/sindresorhus/css-in-readme-like-wat"> read this </a>
<br/><a href="https://stackoverflow.com/questions/51956361/custom-css-file-for-readme-md-in-a-github-repo/51956450#:~:text=You%20can%20add%20some%20HTML,tag%20in%20your%20GitHub%20README." title="https://stackoverflow.com/questions/51956361/custom-css-file-for-readme-md-in-a-github-repo/51956450#:~:text=You%20can%20add%20some%20HTML,tag%20in%20your%20GitHub%20README."> and this </a>


<br/>

## Using emoji
You can add emoji to your writing by typing ```:EMOJICODE:```
<br/>***example:***
<br/>```:heart:``` :heart:


<br/>

---
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


<br/>

---
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


<br/>

---
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


<br/>

---
## adding page break / horizontal lines

`---`

---

`***`
***


<br/>

---
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


