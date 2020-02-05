---
layout: page
title: Homework
permalink: /homework/
---

## Academic Integrity Statement

All assignment submissions must be the sole work of each individual student. Students may not read or copy another student's solutions or share their own solutions with other students. Students may not review solutions from students who have taken the course in previous years. Submissions that are substantively similar will be considered cheating by all students involved, and as such, students must be mindful not to post their code publicly. Any use of electronics or other resources during an examination will be considered cheating. 

If you have any doubts about whether a particular action may be construed as cheating, ask the instructor for clarification before you do it. The instructor will make the final determination of what is considered cheating.

Cheating in this course will likely result in a grade of F for the course and may be subject to further disciplinary action.

Remember that:

* You will work on all assignments by yourself.
* All assignments will be auto-graded and must be submitted online using [Gradescope](https://www.gradescope.com/)
* All homework assignments are due 11:59pm on the shown due date.
* No homework is accepted late.
* You may resubmit your work until the deadline, with your most recent submission counting for credit.

{% for hw in site.homework %}

{% if hw.solution %}

**Solution**: [{{ hw.title }} Solution]({{site.baseurl }}{{ hw.url }})

{% else %}
# [{{ hw.title }}]({{ site.baseurl }}{{ hw.url }})

**Released**: {{ hw.released }}

**Due**: {{ hw.due }}

{{ hw.summary }}
{% endif %}

{% endfor %}
